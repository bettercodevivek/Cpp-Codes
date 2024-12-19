// lets learn a bit about unordered set in c++ which are used for hash mapping.

#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    unordered_map<string,int> map1; // <key,value>

    // if you want to assign values at time of declaration only then,

    unordered_map<string,int> map2 = {{"name1",1},{"name2",2},{"name3",3}};

    // if you want to assign values/ insert them after declaration then,

    // there are 2 ways:-

    // using the key

    map1["name1"]=10;
    map1["name2"]=20;

    // using the insert function

    map1.insert({"name3",30});

    // accessing can also be done in 2 ways 

    // using []

    cout<<"value at :- "<<map1["name1"]<<endl;

    // using at function

    cout<<map1.at("name2")<<endl;

    // checking if a key exists

    // we can use the find() function as well as the count() function

    if(map1.find("name4")!=map1.end()){
        cout<<"key exists"<<endl;
    }
    else{
        cout<<"key doesnt exist"<<endl;
    }

    if(map1.count("name2")){
        cout<<"key name4 exists"<<endl;
    }
    else{
        cout<<"it does not exists"<<endl;
    }


   // iterating over an unordered map can be done in 2 ways :-

   // 1st way

   for(auto &pair:map1){
    cout<<"Key:-"<<pair.first<<"value:-"<<pair.second<<endl;
   }

   // 2nd way

   for(auto it=map2.begin();it!=map2.end();++it){
     cout<<"key:- "<<it->first<<" "<<"value:- "<<it->second<<endl;
   }

}