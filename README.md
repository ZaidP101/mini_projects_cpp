# C++ Mini Projects

This repository contains simple C++ console applications demonstrating various functionalities.

## Projects

### 1. Simple C++ Login System

A simple C++ console application that simulates a basic login system with the following functionalities:

- **Login**: Allow users to log in using their username and password.
- **Sign-Up**: Register a new user with a username, email, and password.
- **Forgot Password**: Recover a forgotten password by providing a registered username and email.

#### Features

- **Sign-Up**: Users can create an account by providing a username, email, and password.
- **Login**: Users can log in by entering their username and password. The system checks for credentials and grants access if they are correct.
- **Forgot Password**: Users can retrieve their forgotten passwords by providing their registered username and email.

#### How It Works

The application stores user credentials in a file (`logindata.txt`) using a simple format where each entry is separated by a delimiter (`*`). The program reads from and writes to this file to handle user authentication and data management.

#### Requirements

- A C++ compiler (g++ or equivalent)
- A text file named `logindata.txt` in the same directory as the executable for storing user data.

---

### 2. Pharmacy Management System

A C++ console application that simulates a simple pharmacy management system. It allows the user to add, search, delete, view, and save medicine records.

#### Features

- **Add Medicine**: Add a new medicine record, including ID, name, quantity, and price.
- **Search Medicine**: Search for a medicine by its name.
- **Delete Medicine**: Delete a medicine record by its name.
- **View All Medicines**: Display all medicine records.
- **Save to File**: Save all current medicine records to a file (`sample_save.txt`).

#### How It Works

The application stores medicine records in a `vector` and allows users to interact with the records using various options in the console. Users can save the current state to a file named `sample_save.txt`.

#### Requirements

- A C++ compiler (g++ or equivalent)
- The program saves data to a text file named `sample_save.txt` in the same directory as the executable.

---

## Contributing

Feel free to fork this repository, make improvements, and create a pull request. Contributions are always welcome!
