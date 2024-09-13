#include<iostream>
#include<vector>
#include<fstream>
using namespace std;
struct pharmacy{
    char ID;
    string name;
    int quantity;
    int price;
};
pharmacy phar;
vector<pharmacy> med;

void addMed(){
    int choise;
    do{
        cout<<" ID: "; cin>>phar.ID;
        cout<<" Name: "; cin>>phar.name;
        cout<<" Quantity: "; cin>>phar.quantity;
        cout<<" Price: "; cin>>phar.price;
        med.push_back(phar);
        cout<<" Saved. "<<"\n";
        cout<<" Enter 0 to exit or 1 to continue "; cin>>choise;
    }
    while(choise!=0);
}

void search(){
    string n;
    cout<<" Enter the Name of Med : "; cin>>n; cout<<"\n";
    for(int i=0; i<med.size(); i++){
        if(n==med[i].name){
            cout<<i+1<<" Name : "<<med[i].name<<"\n";
            cout<<i+1<<" ID : "<<med[i].ID<<"\n";
            cout<<i+1<<" Quantity : "<<med[i].quantity<<"\n";
            cout<<i+1<<" Price : "<<med[i].price<<"\n"<<"\n";
        }
    }
}

void del(){
    string n;
    cout<<" Enter the Name of Med : "; cin>>n;
    for(int i=0; i<med.size(); i++){
        if(n==med[i].name){
            med.erase(med.begin()+i); // from start to the i^th position were found. eg: med found at 8th position so delete element on 8th position, count from start 0+8 
            cout<<"Deleted : "<<med[i].name<<"\n"<<"\n";
        }
    }
}

void all(){
    for(int i=0; i<med.size(); i++){
        cout<<i+1<<" ID : "<<med[i].ID<<"\n";
        cout<<" Name : "<<med[i].name<<"\n";
        cout<<" Quantity : "<<med[i].quantity<<"\n";
        cout<<" Price : "<<med[i].price<<"\n"<<"\n";
    }
}

void save(const vector<pharmacy>& med, const string& sample_save){
    ofstream out("/home/patel/z_C++/mini_projects_cpp/PharmacyManagement/sample_save.txt");
    if(!out){
        cerr<<" File "<<sample_save<<" not found !!!! "<<"\n";
    }
    for(int i=0; i<med.size(); i++){
        out<<i+1<<"ID"<<med[i].ID<<"\n"<<" Name "<<med[i].name<<"\n"<<" Quantity "<<med[i].quantity<<"\n"<<" Price "<<med[i].price<<"\n";
    }
    out.close();
    cout<<" All meds saved to file : "<<sample_save<<"\n";
}


int main(){
    while(true){
        int num;
        cout<<" Enter '1' for Adding Meds : "<<"\n";
        cout<<" Enter '2' to Search Meds : "<<"\n";
        cout<<" Enter '3' to Delete Meds : "<<"\n";
        cout<<" Enter '4' to view all Meds : "<<"\n";
        cout<<" Enter '5' to Save meds to File : "<<"\n";
        cout<<" Enter '6' to Exit : "<<"\n";
        cout<<" Enter the number as per your requirment here :> ";
        cin>>num;

        switch(num){
            case 1:{
                addMed();
            break;
            }
            case 2:{
                search();
            break;
            }
            case 3:{
                del();
            break;
            }
            case 4:{
                all();
            break;
            }
            case 5:{
                save(med, "/home/patel/z_C++/mini_projects_cpp/PharmacyManagement/sample_save.txt");
            break;
            }
            case 6:
                return 0;
            default:
                cout<<" Invalid choice. Please try again." <<"\n";
            
        }
    }
}