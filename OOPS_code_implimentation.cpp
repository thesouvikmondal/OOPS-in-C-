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
    
    //creating constructor
    Hero(){
        cout<<" called constructor"<<endl;
    }
    
    //parameterised constructor
    Hero(int health,char level){
        this->health=health;
        this->level=level;
    }


    //create manual copy constructor
    Hero(Hero& temp){
        this->health=temp.health;
        this->level=temp.level;
    }




    //use of getter to acces the peivate property
    int gethealth(){
        return health;
    }
    char getlevel(){
        return level;
    }

    //print function
    void print(){
        cout<<"health : "<<this->health<<endl;
        cout<<"level : "<<this->level<<endl;
    }

    //use of setter to manipulate private properties
    void sethealth(int h){
        health=h;
    } 
    void setlevel(char ch){
        level=ch;
    }


    //destructor
    ~Hero(){
        cout<<"destructor is called"<<endl;
    }

};


int main(){

    Hero a;

    //dynamically
    Hero *b=new Hero();
    delete b;














    // Hero s(7,'B');
    // s.print();

    // //copy constructor by default
    // Hero r(s);
    // r.print();










    //called manulay crated constructor 
    //Hero ramesh;

    //called parametarised constructor
    // Hero ramesh(10);

    // cout<<"address of ramesh"<<&ramesh<<endl;
    // ramesh.gethealth();






    //Hero ramesh;
    //cout<<"size :"<<sizeof(h1)<<endl;
    // ramesh.health=70;
    // ramesh.level='c';


    //create hero dynamically 
    // Hero *b=new Hero;
    // cout<<"health is dynamically :"<<b->health<<endl;
    
    // ramesh.sethealth(60);
    // ramesh.setlevel('b');
    // cout<<"health is : "<<ramesh.gethealth()<<endl;
    // cout<<"level is : "<<ramesh.getlevel()<<endl;
}