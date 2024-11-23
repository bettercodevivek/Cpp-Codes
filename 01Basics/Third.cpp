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

    // int NumberOfTeaCups;
    // cout<<"Enter the Number of tea cups you bought"<<endl;
    // cin>>NumberOfTeaCups;
    // string BadgeName;

    // if(NumberOfTeaCups >= 20){
    //     BadgeName="GOLD";
    //     cout<<"The Badge you have recieved is :- "<<BadgeName;
    // }
    // else if(NumberOfTeaCups>10 && NumberOfTeaCups<20){
    //     BadgeName="SILVER";
    //     cout<<"The Badge you have recieved is :- "<<BadgeName;
    // }
    // else{
    //     BadgeName="BRONZE";
    //     cout<<"The Badge you have recieved is :- "<<BadgeName;
    // }


    // Task 4
     
    //  string status;
    //  cout<<"Enter your status if you are a student or not :- "<<endl;
    //  getline(cin,status);

    //  int NumberOfCups;
    //  cout<<"Enter the Number of cups you have"<<endl;
    //  cin>>NumberOfCups;

    //  if(status=="student" || NumberOfCups > 15){
    //     cout<<"You are eligible for a discount"<<endl;
    //  }
    //  else{
    //     cout<<"Not eligible for discount"<<endl;
    //  }


   //NOW WE WILL BE PERFORMING SOME TASKS REALTED TO CONDITIONALS

   // Task 1

//    string orderName;

//    cout<<"Enter the name of your order"<<endl;

//    getline(cin,orderName);


//    if(orderName == "green tea"){
//     cout<<"Order is confirmed"<<endl;
//    }


// Task 2

//  int Hour;
//  cout<<"Enter the hour of the day :- "<<endl;
//  cin>>Hour;

//  if(8<=Hour<=18){
//     cout<<"The shop is open boss !"<<endl;
//  }
//  else{
//     cout<<"the shop is closed boss!";
//  }


// Task 3

// int NumberOfTeaCupsOrdered;
// int discount;
// cout<<"Enter the number of tea cups you have ordered :- "<<endl;
// cin>>NumberOfTeaCupsOrdered;

// if(NumberOfTeaCupsOrdered>20){
//    discount=20;
// }
// else if(10 < NumberOfTeaCupsOrdered < 20){
//     discount = 10;
// }
// else{
//     discount=0;
// }

// cout<<"You will get "<<discount<<"% discount"<<endl;

// Task 4

int Tea;
float Price;
string TeaName;
cout<<"Please enter your choice of tea :-"<<endl<<"for green tea press 1"<<endl<<"for black tea press 2"<<endl<<"For oolong tea press 3"<<endl;
cin>>Tea;

switch(Tea){
    case 1 : Price = 5 ;
              TeaName="Green Tea";
             cout<<"your selected tea is "<<TeaName<<" and its price is $"<<Price<<endl;
             break;

    case 2 : Price = 10 ;
              TeaName="Black Tea";
             cout<<"your selected tea is "<<TeaName<<" and its price is $"<<Price<<endl;
             break;

    case 3 : Price = 15 ;
              TeaName="Oolong Tea";
             cout<<"your selected tea is "<<TeaName<<" and its price is $"<<Price<<endl;
             break;
    default : cout<< "please select a valid choice"<<endl;
              break;
        
}




    return 0;
}