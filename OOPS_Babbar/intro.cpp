#include <iostream>
#include <string.h>
using namespace std;

class Hero {
    private:
    int health;

    public:
    char *name;
    char level;
    static int timeToComplete;
    Hero() {
        cout << "Simple constructor called" << endl;
        name = new char[100];
    }
    //Parameterized Constructor
    Hero(int health){
        this->health = health;
    }
    Hero(int health, char level){
        this->level = level;
        this->health = health;
    }
    // Copy Constructor
    Hero(Hero &temp){
        char *ch = new char[strlen(temp.name) + 1];
        strcpy(ch, temp.name);
        this->name = ch;
        cout << "My copy constructor called" << endl;
        this->health = temp.health;
        this->level = temp.level;
    }
    int getHealth(){
        return health;
    }
    char getLevel(){
        return level;
    }
    void setHealth(int h){
        health = h;
    }
    void setLevel(char ch){
        level = ch;
    }
    void setName(char name[]){
        strcpy(this->name, name);
    }

    void print() {
        cout<<endl;
        cout << "Name is: " << this->name << endl;
        cout << "Health is: " << this->health << endl;
        cout<< "Level is: " << this->level << endl;
    }
    ~Hero() {
        cout << "Destructor bhai called" << endl;
    }
    static int random() {
        return timeToComplete;
    }
};

int Hero::timeToComplete = 5;

int main() {

    //cout << Hero::timeToComplete << endl;
    cout << Hero::random() << endl;









    /*
    // Static
    Hero a;

    //Dynamic
    Hero *b = new Hero();
    // destructor should be called manually for dynamically created objects 
    delete b;
    */




















    // Hero hero1;
    // hero1.setHealth(12);
    // hero1.setLevel('D');
    // char name[7] = "Babbar";
    // hero1.setName(name);
    // // hero1.print();

    // Hero hero2(hero1);
    // // hero2.print();
    // // Hero hero2 = hero1;

    // hero1.name[0] = 'G';
    // // hero1.setHealth(70);
    // hero1.print();
    // hero2.print();

    // // Copy Assignment Operator
    // hero1 = hero2;

    // hero1.print();
    // hero2.print();













    // Hero S(70, 'C');
    // S.print();

    // // Copy constructor gets called
    // Hero R(S);
    // R.print();














    // //Object created statically
    // Hero henry(10);
    // henry.print();
    // //henry.getHealth();
    // //cout << "Address of henry: " << &henry << endl;

    // //Object created dynamically
    // Hero *harry = new Hero(11);
    // harry->print();

    // Hero temp(22, 'B');
    // temp.print();

    /*
    //static allocation
    Hero a;
    a.setHealth(80);
    a.setLevel('B');
    cout<<"Level is " << a.level << endl;
    cout<<"Health is "<<a.getHealth() << endl;

    // dynamic allocation
    Hero *b = new Hero;
    b->setHealth(70);
    b->setLevel('A');
    cout<<"Level is " << (*b).level << endl;
    cout<<"Health is " << (*b).getHealth() << endl;

    cout<<"Level is " << b->level << endl;
    cout<<"Health is " << b->getHealth() << endl;
    */
    

    // creation of object
    // Hero h1;
    // cout<<"hero h1's size is "<<sizeof(h1);
    // cout<<"h1's health is "<< h1.getHealth()<<endl;
    // //cout<<"size : " << sizeof(h1) << endl;
    // // setter used below
    // h1.setHealth(70);
    // h1.level = 'A';

    // cout<<"Health is "<<h1.getHealth()<<endl;
    // cout<<"Level is "<<h1.level<<endl;

    return 0;
}