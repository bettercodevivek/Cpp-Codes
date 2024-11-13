#include<iostream>
using namespace std;
int main(){
    // We'll performn some tasks to learn about operators
    // Task 1

    int NumberOfCups ;
    int PricePerCup ;

    cout<<"Enter the number of cups you want \n";
    cin>>NumberOfCups;

    cout<<"Now enter the price per cup\n";
    cin>>PricePerCup;

    int totalVal = PricePerCup * NumberOfCups ;

    cout<< " The total value of all the cups is :- "<<totalVal<<endl;

    return 0;
}