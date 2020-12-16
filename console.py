import copy
import os
import sys

# define our clear function
def clear():
    # for windows
    if os.name == 'nt':
        _ = os.system('cls')
    # for mac and linux(here, os.name is 'posix')
    else:
        _ = os.system('clear')
def systemStrip(input):
    return input.strip("").replace("&", "").replace("|", "").replace(";", "").replace("!", "").replace("\\", "")

def newFile(name, par, data):
    temp = CustomFile(str(name), par)
    temp.setContent(str(data))
    return temp

class CustomFile:
    def __init__(self, name, par):
        self.parent = par
        self.name = name
        self.data = " "
        self.type = "File"

    def setContent(self, tempData):
        self.data = tempData

    def getContent(self):
        return self.data

    def appendContent(self, input):
        self.data +=  str(input)

class Directory:

    def __init__(self, name, par=None):
        self.parent = None
        if not par == None:
            self.parent = par
        self.children = []
        self.name = name
        self.type = "Directory"

    def printChildren(self, showHidden):
        if showHidden:
            resultPC = ""
            for x in self.children:
                resultPC += str(x.name) + "\t"
            print(resultPC)
        elif not showHidden:
            resultPC = ""
            for x in self.children:
                if str(x.name).startswith("."):
                    continue
                else:
                    resultPC += str(x.name) + "\t"
            print(resultPC)

    def hasNext(self):
        if len(self.children) != 0:
            for thing in self.children:
                if thing.type == "Directory":
                    return True
        return False

    def hasParent(self):
        if not self.parent == None:
            return True
        return False

    def next(self):
        if self.hasNext() == True:
            for thing in self.children:
                if thing.type == "Directory":
                    return thing
                return None

    def nextDirectory(self, str):
        if self.hasNext() == True:
            for thing in self.children:
                if thing.type == "Directory" and thing.name == str:
                    return thing
                return None

    def childrenNames(self):
        tempArr = []
        for child in self.children:
            tempArr.append(child.name)
        return tempArr

currentDirectory = Directory("~")
currentPath = []
currentPath.append(currentDirectory.name)

def refreshPath():
    currentPath2 = []
    pointerDirectory = Directory("ptr", currentDirectory)
    pointerDirectory = pointerDirectory.parent
    while pointerDirectory.hasParent():
        currentPath2.append(str(pointerDirectory.name))
        pointerDirectory = pointerDirectory.parent
        continue
    currentPath2.append(str(pointerDirectory.name))
    currentPath2.reverse()
    currentPath = currentPath2
    #print("currentPath inside: " + str(currentPath2))
    #print("currentPath outside-from-in: " + str(currentPath))
    return currentPath2

def printPath():
    tempArr = refreshPath()
    #print("temp:  " + str(tempArr))
    resultA = ""
    for i in tempArr:
        resultA += str(i) + "/"
    print(resultA)
    return resultA

'''
custom heirarchy start
'''
DocumentsInit = Directory("Documents", currentDirectory)
SpecialDocs = Directory("SpecialDocs", DocumentsInit)
Hello2 = CustomFile("HelloWorld2.txt", DocumentsInit)
Hello2.setContent("Hello, Programmer!")
DocumentsInit.children.append(Hello2)
DocumentsInit.children.append(SpecialDocs)

currentDirectory.children.append(DocumentsInit)
currentDirectory.children.append(Directory("Downloads", currentDirectory))
currentDirectory.children.append(Directory("UserInfo", currentDirectory))
currentDirectory.children.append(newFile("HelloWorld.txt", currentDirectory, "Hello, World!"))
'''
custom heirarchy end
'''

while(True):
    inputRaw = input("user@virtualShell: ")
    inputRaw = inputRaw.strip()
    inputArray0 = inputRaw.split(" ")
    inputArray0t = []
    inputArray1 = []
    for i in inputArray0:
        temp = i.split("-")
        for x in temp:
            inputArray0t.append(x)
    for i in inputArray0t:
        temp = i.split("/")
        for x in temp:
            inputArray1.append(x)
    inputFirst = inputArray1[0]
    print(str(inputArray1))

    if str(inputFirst) == "cd":
        inputArray1.pop(0)
        for i in range(0, len(inputArray1)):
            if len(inputArray1) > 0 and inputArray1[0] == "~":
                while currentDirectory.parent is not None:
                    currentDirectory = currentDirectory.parent
                    refreshPath()
            elif len(inputArray1) > 0 and inputArray1[0] in currentDirectory.childrenNames():
                i = currentDirectory.childrenNames().index(inputArray1[0])
                x = currentDirectory.children[i]
                if x.type == "Directory":
                    currentDirectory = x
                    refreshPath()
                elif x.type == "File":
                    print('\"' + inputArray1[0] + '\"' + ' is not a directory')
                else:
                    print('\"' + inputArray1[0] + '\"' + ' is not a directory')
            elif inputArray1[0] == "..":
                if currentDirectory.parent is not None:
                    currentDirectory = currentDirectory.parent
                    refreshPath()
                else:
                    print("Root directory has no parents, it's like batman")
            else:
                print("not a valid Directory")
                refreshPath()
            inputArray1.pop(0)
            if len(inputArray1) == 0:
                printPath()

    elif str(inputFirst) == "ls":
        inputArray1.pop(0)
        argsArray = [""]
        for i in range(2, len(inputRaw)):
            argsArray += inputRaw[i]
        if "a" in argsArray or "A" in argsArray:
            currentDirectory.printChildren(True)
            #print("revealing hidden files")
        else:
            printPath()
            currentDirectory.printChildren(False)

    elif str(inputFirst) == "cat":
        inputArray1.pop(0)
        for i in range(0, len(inputArray1)):
            if len(inputArray1) > 0 and inputArray1[0] in currentDirectory.childrenNames():
                i = currentDirectory.childrenNames().index(inputArray1[0])
                x = currentDirectory.children[i]
                if x.type == "File":
                    print(x.getContent())
                    refreshPath()
                    break
                else:
                    print("" + x.name + " does not have attribute: 'file_data'")
                    break

    elif str(inputFirst).lower() == "mkdir" or str(inputFirst).lower() == "mkDir":
        inputArray1.pop(0)
        currentNames = currentDirectory.childrenNames()
        if len(inputArray1) > 0 and inputArray1[0] in currentNames:
            print("There is already a File or Directory with the given name in the current Directory")
            continue
        for i in range(0, len(inputArray1)):
            if len(inputArray1) > 0:
                currentDirectory.children.append(Directory(inputArray1[0], currentDirectory))
                refreshPath()
                break

    elif str(inputFirst).lower() == "touch":
        inputArray1.pop(0)
        for i in range(0, len(inputArray1)):
            if len(inputArray1) > 0:
                currentDirectory.children.append(CustomFile(inputArray1[0], currentDirectory))
                refreshPath()
                break

    elif str(inputFirst).lower() == "cls" or str(inputFirst).lower() == "clear":
        inputArray1.pop(0)
        """
        script = '''
        echo "hello"
        cls
        '''
        os.system("bash -c '%s'" % script)
        """
        clear()

    elif str(inputFirst).lower() == "exit":
        sys.exit()

    elif str(inputFirst).lower() == "vim" or str(inputFirst).lower() == "kate" or str(inputFirst).lower() == "gedit":
        inputArray1.pop(0)
        if len(inputArray1) > 0 and inputArray1[0] in currentDirectory.childrenNames():
            i = currentDirectory.childrenNames().index(inputArray1[0])
            x = currentDirectory.children[i]
            if x.type == "File":
                q1 = input("do you wish to set the content(erasing all old data)? y/n: ")
                if (str(q1)[0:1:1]).lower() == "y":
                    print("Please write content to be written:")
                    q2 = input()
                    x.setContent(str(q2))
                else:
                    q4 = input("do you wish to append to the File? y/n: ")
                    if (str(q4)[0:1:1]).lower() == "y":
                        print("Please write content to be appended:")
                        q3 = input()
                        x.appendContent(str(q3))

    elif str(inputFirst).lower() == "ping":
        inputArray1.pop(0)
        command = str("ping ") + str(inputArray1[0])
        # there is a potential security vulnerability here. If they put ping xxxx && somecommand or the sort && ping
        command = systemStrip(str(command))
        os.system(str(command))

    elif str(inputFirst).lower() == "echo":
        print(str(inputRaw[5::1]))

    elif str(inputFirst).lower() == "curl":
        command = inputRaw
        command = systemStrip(str(command))
        os.system(str(command))

    elif str(inputFirst).lower() == "head":
        inputArray1.pop(0)
        if len(inputArray1) > 0 and inputArray1[0] in currentDirectory.childrenNames():
            i = currentDirectory.childrenNames().index(inputArray1[0])
            x = currentDirectory.children[i]
            if x.type == "File":
                tempData = x.data
                tempDataArr = tempData.splitlines(True)
                if len(tempDataArr) < 11:
                    for x in tempDataArr:
                        print(str(x))
                else:
                    count = 0
                    while count < 10:
                        print(str(tempDataArr[count]))
                        count += 1
                if len(tempDataArr) == 0:
                    print() # intentionally print a single blank line

    elif str(inputFirst).lower() == "tail":
        inputArray1.pop(0)
        if len(inputArray1) > 0 and inputArray1[0] in currentDirectory.childrenNames():
            i = currentDirectory.childrenNames().index(inputArray1[0])
            x = currentDirectory.children[i]
            if x.type == "File":
                tempData = x.data
                tempDataArr = tempData.splitlines(True)
                if len(tempDataArr) < 11:
                    for x in tempDataArr:
                        print(str(x))
                else:
                    count = 0
                    fileLength = int(len(tempDataArr))
                    while count < 10:
                        print(str(tempDataArr[fileLength - count]))
                        count += 1
                if len(tempDataArr) == 0:
                    print() # intentionally print a single blank line

    elif str(inputFirst).lower() == "rm":
        inputArray1.pop(0)
        if len(inputArray1) == 0:
            print("Please give an argument for rm")
        found = False
        for num in range(0, len(inputArray1)):
            if len(inputArray1) > 0 and inputArray1[num] in currentDirectory.childrenNames():
                i = currentDirectory.childrenNames().index(inputArray1[num])
                x = currentDirectory.children[i]
                if x.type == "File":
                    currentDirectory.children.remove(x)
                    found = True
                    break
                if x.type == "Directory" and "r" in inputArray1:
                    currentDirectory.children.remove(x)
                    found = True
                    break
                elif x.type == "Directory":
                    print('Cannot delete, please pass \"-r\" argument in order to delete Directories\n\t*Doing so will also delete all files and folders therein')
                    found = True
                    break
        if not found:
            print("Syntax error: Unable to Locate File")

    elif str(inputFirst).lower() == "":
        continue
    else:
        print('\"' + inputFirst + '\" is not a valid command')

    #printPath()
    '''
    rm * added
    mv *
    save functionality *
    find command
    grep command
    system call to SSH #don't want, don't see the use
    ftp #don't want, don't see the use
    '''
