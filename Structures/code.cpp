#include <iostream>
#include <string>

using namespace std;

// Yapılar - Structures

int main() {

    //Yapılar içine farklı veri tipinde değişkenler alabilir.

    struct {
        int myAge;
        string myName;
    } myStructure;

    myStructure.myName = "GhoST";
    myStructure.myAge = 10;

    cout << "My name is " << myStructure.myName << endl;
    cout << "I am " << myStructure.myAge << " years old." << endl;

    //Birden fazla yapıya atama
    struct
    {
        int myInt;
        string myString;
    } myStruct1,myStruct2,myStruct3;

    myStruct1.myInt = 15;
    myStruct2.myInt = 20;
    myStruct3.myInt = 25;
    myStruct1.myString = "Hello ";
    myStruct2.myString = "MY ";
    myStruct3.myString = "Friend!";

    cout << "Sınav Notum : " << (myStruct1.myInt + myStruct2.myInt + myStruct3.myInt) << endl;
    cout << "Mesajım: " << (myStruct1.myString + myStruct2.myString + myStruct3.myString) << endl;

    //Adlandırılmış Yapılar
    struct Person {
        string name;
        int age;
        string gender;
    };

    Person person;
    person.name = "GhoST";
    person.age = 12;
    person.gender = "Man";
    cout << "My name is " << person.name << endl;
    cout << "I am " << person.age << " years old" << endl;
    cout << "I am a " << person.gender << endl;

    Person person2;
    person2.name = "Jade";
    person2.age = 25;
    person2.gender = "Woman";
    cout << "My name is " << person2.name << endl;
    cout << "I am " << person2.age << " years old" << endl;
    cout << "I am a " << person2.gender << endl;

    return 0;
}