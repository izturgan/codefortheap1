
// Written by Nurgissa Izturgan IT-2003
#include <cstring>

using namespace std;

 //ASSIGNMENT2_PERSON.H

class Person{
public:
    Person(){ 
        this->fname = "";
        this->age = 0;
        this->prsnluck = 0;
    }
    Person(string Name, int Age, int Luck){
        this->fname = Name;
        this->prsnage = Age;
        this->prsnluck = Luck;
    }
    void setName(string name){
        this->fname = name;
    }
    void setAge(int Age){
        this->prsnage = age;
    }
    void setLuck(int Luck){
        this->prsnluck = Luck;
    }
    string getName(){
        return this->name;
    }
    int getAge(){
        return this->prsnage;
    }
    int getLuck(){
        return this->luck;
    }
private:
    string fname;
    int prsnage;
    int prsnluck;
};

