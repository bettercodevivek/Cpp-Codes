#include <iostream>
using namespace std;

// we can write our own namespace also in the following manner 

namespace hello {
      int display(){
           int a=25;
           int b=35;
       int sum = a+b;
            return sum;
      }
}


int main(){
      
// using our custom namespace in the code

 int value=hello::display();

      int a,b;

cout<<"Enter the values for a and b \n";

 cin>>a;
 cin>>b;

 cout<<"The total value is => \n"<<a+b<<endl;  


 cout << "Value recieved from the custom namespace is => " << value;     

    //  cout << "Hello World \n" ;
}
