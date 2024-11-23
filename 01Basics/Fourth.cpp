#include<iostream>
using namespace std;

int main(){
    // Now we will perform tasks to practice loops

// Task 1

// int Orders;
// int RemainingCups=Orders;
// int i=1;
// cout<<"enter the number of orders"<<endl;
// cin>>Orders;

// while(i <= Orders){
//    cout<<"The current tea cup being served is => "<<i<<endl;
//    RemainingCups=Orders-i;
//    cout<<"The number of remaining tea cups is => "<<RemainingCups<<endl;
//    i++;
// }


// Task 2

// string Choice;

// do{
//     cout<<"Hello My Good Sir, Do wish to have more tea?"<<endl;
//     getline(cin,Choice);
// }
// while(Choice!="no");


// Task 3

// int TeaCups;
// cout<<"Enter the number of tea cups you want"<<endl;
// cin>>TeaCups;

// for(int i=1;i<=TeaCups;i++){
//  cout<<"Instructions for making Tea Cup = "<<i<<endl;
//  cout<<"Step 1:- Add Water"<<endl; 
//  cout<<"Step 2:- Add Tea"<<endl; 
//  cout<<"Step 3:- Add Milk"<<endl; 
//  cout<<"Step 4:- Let it Boil"<<endl; 
// }

// Task 4
// string input;
// while(input!="stop"){
// getline(cin,input);
// if(input == "stop"){
//     break;
// }
// cout<<"Here is your tea"<<endl;

// }

// cout<<"no more tea now !";

// Task 5

string TeaNames[5]={"milk Tea","red tea","green tea","black tea","blue tea"};

for(int i=0;i<5;i++){
    if(TeaNames[i]=="green tea"){
        continue;
    }
    cout<<"Brewing"<<TeaNames[i];
}

 return 0;
}                     