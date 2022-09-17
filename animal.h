#include <iostream>
#include <string>

using namespace std;

#ifndef animal_h
#define animal_h


//class declaration
class Animal {
    public: 
        Animal(string name, string owner); //constructor
        ~Animal(); //deconstructor
        void printInfo();
        
    private:
        string name;
        string owner;
};



#endif