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

string Choice;

do{
    cout<<"Hello My Good Sir, Do wish to have more tea?"<<endl;
    getline(cin,Choice);
}
while(Choice!="no");

 return 0;
}                     