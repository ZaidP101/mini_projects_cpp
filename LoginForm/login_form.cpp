#include<iostream>
#include<fstream>
using namespace std;

class temp{
    string userName, Email, Password;
    string searchuser,searchpass, searchemail;
    bool userfound = false;
    fstream file;
    public:
    void login();
    void signup();
    void forgot();
}obj;

int main(){
    cout<<"\n 1 - Login";
    cout<<"\n 2 - Sign-Up";
    cout<<"\n 3 - Forgot Password??";
    cout<<"\n 4 - Exit";
    cout<<"Enter the appropriate Number : ";
    int choise;
    cin>>choise;
    // cout<<choise<<"\n";

    switch(choise){
        case 1 :
            obj.login();
        break;
        case 2 :
            obj.signup();
        break;
        case 3 :
            obj.forgot();
        break;
        case 4 :
            return 0;
        break;
        default:
            cout<<"Invalid Number\n Please seletc from the given list";
    }
}
void temp :: signup(){
    cout<<"\n Enter Your Username : ";
    cin.ignore();
    getline(cin,userName);
    cout<<"Enter Your Email : ";
    getline(cin,Email);
    cout<<"Enter Your Password : ";
    getline(cin,Password);

    file.open("logindata.txt", ios :: out | ios :: app); // The combination ios::out | ios::app means the file is opened for output, and any data written to it will be appended to the end.
    file<<userName<<"*"<<Email<<"*"<<Password<<"\n"; //(*)is used as a delimiter to separate different fields of data when writing them into a single line in the file
    file.close();
}
void temp :: login(){
    cout<<"\n------------  Login  ------------\n";
    cin.ignore();
    cout<<"Enter your UserName : ";
    getline(cin,searchuser);
    cout<<"Enter your Password : ";
    getline(cin,searchpass);

    file.open("logindata.txt", ios::in);
    if (!file.is_open()) {
        cout << "Error opening the file.\n";
    return;
}

while (getline(file, userName, '*') && getline(file, Email, '*') && getline(file, Password, '\n')) {
    if (userName == searchuser) {
         userfound = true;
        if (Password == searchpass) {
            cout << "Login Successful\n";
            cout << "Your User name is: " << userName << "\n";
            cout << "Your Password is: " << Password << "\n";
            cout << "Your Email is: " << Email << "\n";
        } else {
            cout << "Password is incorrect.\n";
        }
        break; // Exit the loop if a user is found
    }
}

if (!userfound) {
    cout << "User does not exist. Enter the correct Username or Signup.\n";
}

file.close();
}
void temp :: forgot(){
    cout<<"\nEnter username : ";
    cin.ignore();
    getline(cin, searchuser);
    cout<<"Enter Email : ";
    getline(cin, searchemail);

    file.open("logindata.txt", ios :: in);
    if(!file){
        cout<<"Error opning file";
        return;
    }
    bool found = false;
    while(getline(file, userName,'*') && (getline(file,Email,'*')) && getline(file,Password,'\n')){
        if (userName == searchuser && Email == searchemail) {
            cout << "Account Found\n";
            cout << "Your Password is: " << Password << "\n";
            found = true;
            break; // Exit the loop once the account is found
        }
    }
    if(!found){
        cout<<"Account not found\n";
    }
    file.close();
}
   