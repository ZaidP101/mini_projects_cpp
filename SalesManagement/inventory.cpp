#include<iostream>
#include<vector>
using namespace std;
struct sale{
    string name;
    int quantity, price;
};
sale sl;
vector<sale> item;

int main(){
    while(true){
        int num;
        cout<<" Enter '1' for Adding Items : "<<"\n";
        cout<<" Enter '2' to Search Items : "<<"\n";
        cout<<" Enter '3' Sold Items : "<<"\n";
        cout<<" Enter '4' to view all Items : "<<"\n";
        cout<<" Enter '5' to Delete Items : "<<"\n";
        cout<<" Enter '0' to Exit : "<<"\n";
        cout<<" Enter the number as per your requirment here :> ";
        cin>>num; cout<<"\n";

        if(num==1){
            int choise;
            do{
                cout<<"\n Name: "; cin>>sl.name;
                cout<<" Quantity: "; cin>>sl.quantity;
                cout<<" Price: "; cin>>sl.price;
                item.push_back(sl);
                cout<<" Total Price = "<<sl.quantity*sl.price<<"\n";
                cout<<" Saved. "<<"\n"<<"\n";
                cout<<" Enter 0 to exit or 1 to continue "; cin>>choise; cout<<"\n";
            }
            while(choise!=0);
        } else if(num==2){string n;
            cout<<"\n Enter the Item Name : "; cin>>n;
            for(int i=0; i<item.size(); i++){
                if(n==item[i].name){
                    cout<<" Name : "<<item[i].name<<"\n";
                    cout<<" Price : "<<item[i].price<<"\n";
                    cout<<" Quantity : "<<item[i].quantity<<"\n";
                    cout<<" Total : "<<item[i].quantity*item[i].price<<"\n"<<"\n";
                }
            }
        }else if(num==3){string n;
            cout<<"\n Name of the Item : "; cin>>n;
            for(int i=0; i<item.size(); i++){
                if(n==item[i].name){ int q;
                    cout<<" Enter the amount of quantity sold : "; cin>>q;
                    item[i].quantity = item[i].quantity-q;
                    cout<<" Current inventory of the Item : "<<item[i].name<<" = "<<item[i].quantity<<" @ "<<item[i].price<<"\n";
                    cout<<" Total = "<<item[i].quantity*item[i].price<<"\n"<<"\n";
                }
            }
        }else if(num==4){
            for(int i=0; i<item.size(); i++){
                cout<<i+1<<"\n Name : "<<item[i].name<<"\n";
                cout<<" Price : "<<item[i].price<<"\n";
                cout<<" Quantity : "<<item[i].quantity<<"\n";
                cout<<" Total = "<<item[i].quantity*item[i].price<<"\n"<<"\n";
            }
        }else if (num==5){ string n;
            cout<<"\n Name of the Item to be Deleted : "; cin>>n;
            for(int i=0; i<item.size(); i++){
                if(n==item[i].name){
                    item.erase(item.begin()+i);
                    cout<<"Deleted : "<<item[i].name<<"\n"<<"\n";
                }
            }
        }else if(num==0){
            exit(0);
        }else{cout<<" Invalid Input. Try again...."<<"\n"<<"\n";}
    }

}

