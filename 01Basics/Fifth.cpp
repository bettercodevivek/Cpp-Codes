#include<iostream>
using namespace std;

void modifier(int &n){
    n+=100;
    cout<<"inside the function :- "<<n<<endl;
}

int main(){
   
   int num = 50;

   modifier(num);

   cout<<"Outside the function"<<num<<endl;



    return 0;
}
