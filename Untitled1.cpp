//Done by Nurgissa Izturgan
#include <iostream>
#include <vector>
#include <cstdlib>
#include "Person.h"
#include <ctime>


using namespace std;

void change_Luck(Person& prsn1, Person& prsn2){
    int p = prsn1.getLuck();
    prsn1.setLuck(prsn2.getLuck());
    prsn2.setLuck(p);
}

int main() {
    srand(time(NULL));
    vector < Person > participants;
    participants.push_back(Person("Muha", 18, rand() % 100 + 1));
    participants.push_back(Person("Arsen", 30, rand() % 100 + 1));
    participants.push_back(Person("Rayko", 5, rand() % 100 + 1));
    participants.push_back(Person("Alexandr", 20, rand() % 100 + 1));
    participants.push_back(Person("Aigerim", 10, rand() % 100 + 1));
    Person luckiest = Person();
    for(int i = 0; i < participants.size(); ++i){
        if(luckiest.getLuck() < participants[i].getLuck()){
            luckiest = participants[i];
        }
    }
    cout<<"The Luckiest person is " << luckiest.getName() << " with the luck of " << luckiest.getLuck() << "\n";

    Person *person = new Person("Adik", 20, 123);

    //By going forward we are not going to use this object in our code, as you see here static memory allocation creates variables before the code, as a result  memory is left as static.
    cout<< "First person info: \n";
    cout<< participants[0].getName() << " " <<participants[0].getAge()<<" "<< participants[0].getLuck() <<endl;
    cout<< "Second person info: \n";
    cout<< participants[1].getName() << " " <<participants[1].getAge()<<" "<< participants[1].getLuck() <<endl;

    change_Luck(participants[1], participants[0]);

    cout<<"After changing properties: \n";

    cout<< "Information about the 1st person: \n";
    cout<< participants[0].getName()<<" "<<participants[0].getAge()<<" "<<participants[0].getLuck()<<endl;
    cout<< "Information about the 2nd person: \n";
    cout<< participants[1].getName()<<" "<<participants[1].getAge()<< " " <<participants[1].getLuck()<<endl;

    delete person;//as you see here, I am deleting 'person' to avoid the memory which could be stayed here in the storage. What we are doing is that one more feature of 
    //dynamix memory
    
    return 0;
}

