import pandas as pd
import argparse

#Manager object, contains name, email, and array of lists, each list being a subnet name and cidr notation of range
class Manager:
    name = "Name"
    email = "Email"
    ip_array = []

    def __init__(self, iName, iEmail):
        self.name = iName
        self.email = iEmail

    def toString(self):
        return ("Name: " + self.name + " email: " + self.email)

    def extendedToString(self):
        result = "Name: " + self.name + " email: " + self.email + "\n"
        for ipSet in self.ip_array:
            result = result + "Subnet Name: " + ipSet[0] + " Subnet CIDR: " + ipSet[1] + '\n'
        return result

#Create array of manager objects, populate name and email
def managerList(datFrame):
    subAr = []
    emailAr = []
    tempManAr = []
    for row1,row2 in zip(datFrame.loc[:,'Subnet Manager'], datFrame.loc[:,'Email']):
        if '\n' in str(row1):
            nameRay = row1.split('\n')
            emailRay = row2.split('\n')
            for name, email in zip(nameRay,emailRay):
                if name not in subAr and name != '' and name != 'nan':
                    m1 = Manager(name, email)
                    tempManAr.append(m1)
                    subAr.append(name)
                    emailAr.append(email)
        else:
            if str(row1) not in subAr and str(row1) != '' and str(row1) != 'nan':
                m1 = Manager(str(row1), str(row2))
                tempManAr.append(m1)
                subAr.append(str(row1))
                emailAr.append(str(row2))
    return tempManAr

#Add IP range names and CIDR notation to object array
def IPs(objArray, datFrame):
    for obj in objArray:
        tempArray = []
        for row1,row2,row3 in zip(datFrame.loc[:,'Subnet Name'], datFrame.loc[:,'IP Range of Scan'], datFrame.loc[:,'Subnet Manager']):
            if obj.name in str(row3):
                tempArray.append((str(row1),str(row2)))
        obj.ip_array = tempArray

#Create csv
def createSubnetCsv(objArray):
    columns = ['Subnet Manager', 'Email', 'Subnets Managed', 'Subnet CIDR']
    newFrame = pd.DataFrame(columns=columns)
    for obj in objArray:
        subnetArray = []
        cidrArray = []
        for ipRange in obj.ip_array:
            subnetArray.append(str(ipRange[0]))
            cidrArray.append(str(ipRange[1]))
        newFrame.loc[len(newFrame)] = [obj.name, obj.email, subnetArray, cidrArray]
    return newFrame

#Main block of script
if __name__== '__main__':

    parser = argparse.ArgumentParser()
    parser.add_argument("infile", help="IP Range file as csv, path if necessary")
    parser.add_argument("outfile", help="name of csv file to create with individuals listed")
    args = parser.parse_args()

    manAr = []

    #Get data
    df = pd.read_csv(args.infile, index_col = False)
    manAr = managerList(df)
    IPs(manAr, df)

    dfOut = createSubnetCsv(manAr)
    dfOut.to_csv(args.outfile, index=False, header=True)
