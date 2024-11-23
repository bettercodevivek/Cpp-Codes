#include<iostream>
#include<string>
using namespace std;
int main(){
    // We'll performn some tasks to learn about operators
    // Task 1

    // int NumberOfCups ;
    // int PricePerCup ;

    // cout<<"Enter the number of cups you want \n";
    // cin>>NumberOfCups;

    // cout<<"Now enter the price per cup\n";
    // cin>>PricePerCup;

    // int totalVal = PricePerCup * NumberOfCups ;

    // cout<< " The total value of all the cups is :- "<<totalVal<<endl;

    

    // Task 2

    // int NumberOfTeabags ;
    // cout<<"Enter the number of teabags\n";
    // cin>>NumberOfTeabags;

    // if(NumberOfTeabags<10){
    //     NumberOfTeabags += 5 ;
    // }

    // cout<<NumberOfTeabags;
    
    // Task 3

    int NumberOfTeaCups;
    cout<<"Enter the Number of tea cups you bought"<<endl;
    cin>>NumberOfTeaCups;
    string BadgeName;

    if(NumberOfTeaCups >= 20){
        BadgeName="GOLD";
        cout<<"The Badge you have recieved is :- "<<BadgeName;
    }
    else if(NumberOfTeaCups>10 && NumberOfTeaCups<20){
        BadgeName="SILVER";
        cout<<"The Badge you have recieved is :- "<<BadgeName;
    }
    else{
        BadgeName="BRONZE";
        cout<<"The Badge you have recieved is :- "<<BadgeName;
    }



    return 0;
}