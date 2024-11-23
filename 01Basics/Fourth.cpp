#include<iostream>
using namespace std;
// Now we will perform tasks to practice loops

// Task 1
int main(){
int Orders;
int RemainingCups=Orders;
int i=1;
cout<<"enter the number of orders"<<endl;
cin>>Orders;

while(i <= Orders){
   cout<<"The current tea cup being served is => "<<i<<endl;
   RemainingCups=Orders-i;
   cout<<"The number of remaining tea cups is => "<<RemainingCups<<endl;
   i++;
}
 return 0;
}                     