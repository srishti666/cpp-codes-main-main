#include<iostream>
#include<vector>
#include<list>
#include<set>
#include<map>
#include<forward_list>

using namespace std;

int main(){
    // vector<int> v={2,4,6,8,10};
    // v.push_back(20);
    // v.push_back(30);

    // v.pop_back();

    // for(int x:v)
    //     cout<<x<<endl;

    // vector<int>::iterator itr;

    // cout<<"using Iterator"<<endl;
    // for(itr=v.begin();itr!=v.end(); itr++)
    //     cout<<*itr<<endl;

    // cout<<"using for each loop"<<endl;
    // for(int x:v)
    //     cout<<x<<endl; 

//linked list
    // list<int> v={2,4,6,8,10};
    //  v.push_back(20);
    //  v.push_back(30);

    // list<int>::iterator itr;

    //forward list
    forward_list<int> f={2,4,6,8,10};
     f.push_front(20); //push back is not there in forward list
     f.push_front(30);

     //set
    //  set<int> v={2,4,6,8,10,10}; //no duplicatde elements
    //  v.insert(20);
    //  v.insert(30);

    // map<int, string> m;
    // m.insert(pair<int,string> (1,"srishti"));
    // m.insert(pair<int,string> (2,"astha"));
    // m.insert(pair<int,string> (3,"lily"));

    // map<int, string>::iterator itr;
    // for(itr=m.begin();itr!=m.end();itr++){
    //     cout<<itr->first<<" "<<itr->second<<endl;
    // }

    // map<int, string> :: iterator itr1;
    // itr1= m.find(2);
    // cout<<itr1->first<<" "<<itr->second<<endl;

    map<int,string> m;
    m.insert(pair<int,string>(1,"srishti"));
    m.insert(pair<int,string>(2,"astha"));
    m.insert(pair<int,string>(3,"lily"));

    map<int, string>::iterator itr;
    for(itr=m.begin();itr!=m.end();itr++){
        cout<<itr->first<<". "<<itr->second<<endl;
    }
    


}

