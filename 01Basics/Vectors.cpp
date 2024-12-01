// Let us study about the vectors now.
// Vectors are simply like array just more flexible,It can dynamically resize itself when elements are added or removed.
// Memory management is handled automatically.

#include<iostream>
#include<vector>
using namespace std;

int main(){


vector<int> v = {1,2,3,4,5,6,7,8,9,10};
// declaring a vector

// operations on vectors

// v.push_back(1);
// v.push_back(2);
// v.push_back(3);
// v.push_back(4);

// // cout<<v[0]<<endl<<v[1]<<endl<<v[2]<<endl<<v[3];

// // iterating through vector

// for(int i=0;i<v.size();i++){
// cout<<v[i]<<endl;
// }

// // pop_back() removes element from the last

// v.pop_back();


// for(int i=0;i<v.size();i++){
// cout<<v[i]<<endl;
// }

// vector<string> v2;

// v2.push_back("john doe");

// v2.push_back("florence");

// for(int i=0;i<v2.size();i++){
// cout<<v2[i]<<endl;
// }

// int arr1[5];

// for(int i=0;i<5;i++){
//     cin>>arr1[i];
// }

// vector<int> v3;

// cout<<"enter vector values"<<endl;

// for(int i=0;i<10;i++){
//     v3.push_back(i);
// }

// for(int i=0;i<v3.size();i++){
//     cout<<v3[i];
// }

// for(int i=0;i<5;i++){
//     cout<<arr1[i]<<endl;
// }

// You can take input for the values that you wish to enter in an array but you cannot do the same in vectors, rather you can loop through and push_back values into it.

// for looping for-each loop should be used as it is more readable.

// for-each example

// for(int value:v){
//    cout<<value<<endl;
// }

// cout<<v.front()<<endl<<v.back();



vector<int>::iterator it;

for(it=v.begin();it!=v.end();++it){
    cout<<*it<<endl;
}

//  begin() returns an iterator that points to the first element of the data structure.
//  end() returns an iterator that points to one position after the last element.

// Iterators are like "pointers" in that they "point" to elements in a data structure rather than returning values from them. They refer to a specific position, providing a way to access and modify the value when needed, without making a copy of it.

// The auto keyword allows the compiler to automatically determine the correct data type, which simplifies the code and makes it more readable:

// so instead of writing vector<int>::iterator it, we can simply write auto it;

auto itr = v.end()-1;

cout<<*itr<<endl;

// let us see usage of iterators along with erase and insert functions on vectors.


}