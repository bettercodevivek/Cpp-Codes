// In this we will learn about variables,constants,datatypes.

#include <iostream>
#include <string>
using namespace std;

int main(){

int var1 ; // This is declaration of a variable

var1=20; // This is initialisation of that variable

int var2=25; // We can do both in a single line like this;

// once declared variables do not need to be declared and their values can be modified too.

// But if you want the value to remain same and that i should not be modified we can use const keyword

const int var3 = 60;

// Datatypes in cpp can be divided into 3 type broadly :- 
// 1. Primitve
// 2. Derived
// 3. User-Defined

// let us see a bit about primitive data types in c++

int variable1 = 25;
float balance =100.2;
double temp=234.346;
char variable2 = 'A';
string name1 = "sdfbr";
bool variable3 = false; 

// Something New :- So basically in C++ double quotes are used to enclose string whereas single quotes are used to enclose single characters.

// cout<<variable2<<variable1<<name1;


// Let us now see signed and unsigned integers.

// // basically if you want a variable to store only postive int values then unsigned should be used with it.

// unsigned int Tealeaves=-20;

// // Tealeaves = 20;

// // basically if a -ve int value is assigned to unsigned int then it generates a garbage value

// // Similarly there are many other datatypes to see like long, long long, short

// cout<<Tealeaves;

// Something about strings is that if you want to use strings it is important to incljude their header file before using.

// string myName ;

// getline(cin,myName);

// cout<< myName;

int BasePrice ;

cout<<"Enter the Base Price of your tea";

cin>>BasePrice;

float newPrice = float(BasePrice + BasePrice*0.1);

cout << newPrice;

// ASCII code for large alphabets starts with A=65 and a=97 for small.

}