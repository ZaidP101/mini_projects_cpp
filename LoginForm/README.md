# Simple C++ Login System
A simple C++ console application that simulates a basic login system with the following functionalities:

- Login: Allow users to log in using their username and password.
- Sign-Up: Register a new user with a username, email, and password.
- Forgot Password: Recover a forgotten password by providing a registered username and email.

## Features
- Sign-Up: Users can create an account by providing a username, email, and password.
- Login: Users can log in by entering their username and password. The system checks for credentials and grants access if they are correct.
- Forgot Password: Users can retrieve their forgotten passwords by providing their registered username and email.

## How It Works
The application stores user credentials in a file (logindata.txt) using a simple format where each entry is separated by a delimiter (*). The program reads from and writes to this file to handle user authentication and data management.

## Requirements
- A C++ compiler (g++ or equivalent)
- A text file named logindata.txt in the same directory as the executable for storing user data.

## Contributing
Feel free to fork this project, make improvements, and create a pull request. Contributions are always welcome!