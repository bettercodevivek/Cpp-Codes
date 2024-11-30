// Let us study about the vectors now.
// Vectors are simply like array just more flexible,It can dynamically resize itself when elements are added or removed.
// Memory management is handled automatically.

#include<iostream>
#include<vector>
using namespace std;

int main(){


vector<int> v;
// declaring a vector

// operations on vectors

v.push_back(1);
v.push_back(2);
v.push_back(3);
v.push_back(4);

cout<<v[0]<<endl<<v[1]<<endl<<v[2]<<endl<<v[3];

}