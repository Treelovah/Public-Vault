# input the data in mm/dd/yyyy format (dataStr)

# Split the dataStr into month, day and year strings

# Convert the month string into a month number

# Use the month number to look up the month name

# Create an ew data stting in form Month Day, Year

# Output the new date string
def main():
	dataStr = input("Enter the date in (mm/dd/yyyy) format: ")
	monthStr, dayStr, yearStr = dataStr.split("/")

	months = ["January", "Feburary", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"]
	monthStr = months[int(monthStr)-1]

	print("The converted date is: ", monthStr, dayStr+",", yearStr)


main()