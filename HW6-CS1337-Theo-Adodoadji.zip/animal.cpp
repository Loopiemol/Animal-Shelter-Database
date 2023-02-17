#include "Animal.h"
#include <string>
#include <iostream>


Pet::Pet() {
  cout << "\nI am creating an unnamed pet." << endl;
  name="Unnamed";
  age=0;
//  nbrOfpets++; //note that this is/isn't a global variable - which?
//  mypetNbr = nbrOfpets;

}

Pet::Pet(string petsName, int petsAge, int weight) {
  cout << "\nI am creating a pet called " << petsName << " at number " << nbrOfPets << endl;
  Pet::name = petsName; //notice this; why not the same below
  age = petsAge;
 PetWeight = weight;
  
  SetPetNumber();
  animalType = "pet";
}

Pet::Pet(string petsName, int petsAge, int weight, string breed, string color, string health) {
  cout << "\nI am creating a pet called " << petsName << " at number " << nbrOfPets << endl;
  Pet::name = petsName; //notice this; why not the same below
  age = petsAge;
  PetWeight = weight;
  PetBreed = breed;
  PetColor = color;
  PetHealth = health;
  
  SetPetNumber();
  animalType = "pet";
}

Pet::~Pet() {
  cout << "Destructing pet number" << GetPetNbr()
  << ", named " << GetPetsName() << endl;
}

//----- define the class accessors (getters) here

int Pet::GetPetsAge() const {return age;}

string Pet::GetPetsName() const {return name;}


//----- define some class setters (mutators) here
//
void Pet::SetPetName(string petName) {
  name = petName;
}

void Pet::SetPetNumber() {
    nbrOfPets++; //note that this is/isn't a global variable - which?
    myPetNbr = nbrOfPets;
}

void Pet::SetPetWeight(int weight) {
  PetWeight = weight;
}

void Pet::SetPetBreed(string breed) {
   PetBreed = breed;
}

void Pet::SetPetColor(string color) {
   PetColor = color;
}

void Pet::SetPetHealth(string health) {
   PetHealth = health;
}

void Pet::Introduction() const {
  Speak();
  cout << "My name is " << name << endl;
  cout << "I am " << age << " years old" << endl;
  cout << "I am pet number " << myPetNbr << endl;
  cout << "and I am animal number " << myAnimalNumber << endl;
  cout << "I am a(an) " << animalType << endl;
  cout << "I am " << PetWeight << " pounds" << endl;
  cout << "I am a/an " << PetBreed << endl;
  cout << "I am " << PetColor << endl;
  cout << "I am " << PetHealth << endl;
}

int Animal::AnimalNumber=0;
int Pet::nbrOfPets = 0;

int main() {
 
  Pet petA("Mickey",1,2,"a mouse and a Cartoon breed","grey","in good health");
  petA.Introduction();

  Pet petB("Tweety",1,0,"a bird and a Canary breed","yellow","in good health");
  petB.Introduction();

  Pet petC("Chippy",2,1,"a chipmunk and UNKNOWN breed","White and gold","in good health");
  petC.Introduction();
  
  Pet petD("Peter",1,3,"a rabbit and cotton-tail breed","White","expecting");
  petD.Introduction();


  return 0;
} //main
