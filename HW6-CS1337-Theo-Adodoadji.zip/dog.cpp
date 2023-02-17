#include "Dog.h"
#include <string>
#include <iostream>

Dog::Dog() {
  cout << "\nI am creating an unnamed dog." << endl;
  name="Unnamed";
  age=0;
//  nbrOfdogs++; //note that this is/isn't a global variable - which?
//  mydogNbr = nbrOfdogs;

}

Dog::Dog(string dogsName, int dogsAge, int weight) {
  cout << "\nI am creating a dog called " << dogsName << " at number " << nbrOfDogs << endl;
  Dog::name = dogsName; //notice this; why not the same below
  age = dogsAge;
 DogWeight = weight;
  
  SetDogNumber();
  animalType = "dog";
}

Dog::Dog(string dogsName, int dogsAge, int weight, string breed, string color, string health) {
  cout << "\nI am creating a dog called " << dogsName << " at number " << nbrOfDogs << endl;
  Dog::name = dogsName; //notice this; why not the same below
  age = dogsAge;
  DogWeight = weight;
  DogBreed = breed;
  DogColor = color;
  DogHealth = health;
  
  SetDogNumber();
  animalType = "dog";
}

Dog::~Dog() {
  cout << "Destructing dog number" << GetDogNbr()
  << ", named " << GetDogsName() << endl;
}

//----- define the class accessors (getters) here

int Dog::GetDogsAge() const {return age;}

string Dog::GetDogsName() const {return name;}


//----- define some class setters (mutators) here
//
void Dog::SetDogName(string dogName) {
  name = dogName;
}

void Dog::SetDogNumber() {
    nbrOfDogs++; //note that this is/isn't a global variable - which?
    myDogNbr = nbrOfDogs;
}

void Dog::SetDogWeight(int weight) {
  DogWeight = weight;
}

void Dog::SetDogBreed(string breed) {
   DogBreed = breed;
}

void Dog::SetDogColor(string color) {
   DogColor = color;
}

void Dog::SetDogHealth(string health) {
   DogHealth = health;
}

void Dog::Introduction() const {
  Speak();
  cout << "My name is " << name << endl;
  cout << "I am " << age << " years old" << endl;
  cout << "I am dog number " << myDogNbr << endl;
  cout << "and I am animal number " << myAnimalNumber << endl;
  cout << "I am a(an) " << animalType << endl;
  cout << "I am " << DogWeight << " pounds" << endl;
  cout << "I am a/an " << DogBreed << endl;
  cout << "I am " << DogColor << endl;
  cout << "I am " << DogHealth << endl;
}

int Animal::AnimalNumber=0;
int Dog::nbrOfDogs = 0;

int main() {
 
  Dog dogA("Fiddo",5,7,"Spaniel","spotted","in good health");
  dogA.Introduction();

  Dog dogB("Rex",3,5,"Mutt","brown and white","in good health");
  dogB.Introduction();

  Dog dogC("Sparky",5,14,"Dalmation","spotted","in good health");
  dogC.Introduction();

  Dog dogD("Max",6,4,"UNKNOWN","brown","in good health");
  dogD.Introduction();
  
  Dog dogE("Alex",4,2,"Heinz 57","UNKNOWN","have heart worms");
  dogE.Introduction();
  
  Dog dogF("Old Yeller",5,7,"Labrador","yellow","rabies");
  dogF.Introduction();
  
  Dog dogG("Killer",7,4,"Doberman Pinscher","brown","in good health");
  dogG.Introduction();
  
  


  return 0;
} //main
