#include<bits/stdc++.h>
#include<vector>
#include <iostream>
using namespace std;
//import hero class from another file
//#include"Hero.cpp"

class Hero {
    private:
    int health;
    char level;

    public:
    //use of getter to acces the peivate property
    int gethealth(){
        return health;
    }
    char getlevel(){
        return level;
    }

    //use of setter to manipulate private properties
    void sethealth(int h){
        health=h;
    } 
    void setlevel(char ch){
        level=ch;
    }

};


int main(){
    Hero ramesh;
    //cout<<"size :"<<sizeof(h1)<<endl;
    // ramesh.health=70;
    // ramesh.level='c';
    ramesh.sethealth(60);
    ramesh.setlevel('b');
    cout<<"health is : "<<ramesh.gethealth()<<endl;
    cout<<"level is : "<<ramesh.getlevel()<<endl;
}