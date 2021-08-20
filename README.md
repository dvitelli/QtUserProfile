# QTUserProfile

## Description 

This simple QT program takes in a username, country information from a dropdown, and birthday of the user through QT calendar and then saves the login info into a flat file. Once entered the program allows your to view your profile and change your avatar. On new startup, the program loads from the flat file the most recent login, and inputs user information.

## User Flow

On entry user is presented with three fields to enter information: Username, Country, and Birthday. 

	Username - User can select a randomly generated username through the Generate Random Username button. This button creates an array and then randomly chooses the array location for both the prefix and suffix which then are concatenated together. 

	Country - A dropdown menu lets the user select the country their currently have residence.

	Birthday - A calendar dropdown menu allows the user to select when they were born.

After entering all information the user may press the login button, which performs checks on the username to prevent errors.

	First check - The program checks to see if the username is blank, if it is it throws an error message and makes the user type in a new username.

	Second check - The program checks to see if the username contains non-alphanumeric characters. If it does it throws an error message and makes the user type in a new username.

	Third Check - The program checks to see if the file "Username.csv" exists. If it does not it creates it.

If the checks pass, the program then opens another window; the User Profile Account. The User Profile Account reads from the "Username.csv" file and inputs info from the most recent account into the text fields.

The User Profile Account also includes two more functional buttons, the Change Avatar button and Switch Accounts button:

	Change Avatar Button - Opens the file explorer and lets the user select an image to put into the image label.

	Switch Accounts - Opens the previous User Profile Login window and the user can now reenter information to be logged to the file.

## Notes:

- I had some trouble reopening the User Profile Login window after closing the User Profile Account window
- Took me a while to get flat file working, not sure if implementation is good
- Chose a 1d array for the random username generator, not sure if most efficient



