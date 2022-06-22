#include<bits/stdc++.h>
#include<vector>
#include <iostream>
using namespace std;
//import hero class from another file
//#include"Hero.cpp"

class Hero {
    public:
    int health;
    char level;
};


int main(){
    Hero ramesh;
    //cout<<"size :"<<sizeof(h1)<<endl;
    ramesh.health=70;
    ramesh.level='c';
    cout<<"health is : "<<ramesh.health<<endl;
    cout<<"level is : "<<ramesh.level<<endl;
}