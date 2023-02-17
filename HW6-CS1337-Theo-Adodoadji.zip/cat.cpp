#include "Cat.h"
#include <string>
#include <iostream>

Cat::Cat() {
  cout << "\nI am creating an unnamed cat." << endl;
  name="Unnamed";
  age=0;
//  nbrOfCats++; //note that this is/isn't a global variable - which?
//  myCatNbr = nbrOfCats;

}

Cat::Cat(string catsName, int catsAge, int weight) {
  cout << "\nI am creating a cat called " << catsName << " at number " << nbrOfCats << endl;
  Cat::name = catsName; //notice this; why not the same below
  age = catsAge;
 CatWeight = weight;
  
  SetCatNumber();
  animalType = "cat";
}

Cat::Cat(string catsName, int catsAge, int weight, string breed, string color, string health) {
  cout << "\nI am creating a cat called " << catsName << " at number " << nbrOfCats << endl;
  Cat::name = catsName; //notice this; why not the same below
  age = catsAge;
  CatWeight = weight;
  CatBreed = breed;
  CatColor = color;
  CatHealth = health; 
  
  SetCatNumber();
  animalType = "cat";
}

Cat::~Cat() {
  cout << "Destructing cat number" << GetCatNbr()
  << ", named " << GetCatsName() << endl;
}

//----- define the class accessors (getters) here

int Cat::GetCatsAge() const {return age;}

string Cat::GetCatsName() const {return name;}


//----- define some class setters (mutators) here
//
void Cat::SetCatName(string catName) {
  name = catName;
}

void Cat::SetCatNumber() {
    nbrOfCats++; //note that this is/isn't a global variable - which?
    myCatNbr = nbrOfCats;
}

void Cat::SetCatWeight(int weight) {
  CatWeight = weight;
}

void Cat::SetCatBreed(string breed) {
   CatBreed = breed;
}

void Cat::SetCatColor(string color) {
   CatColor = color;
}

void Cat::SetCatHealth(string health) {
   CatHealth = health;
}

void Cat::Introduction() const {
  Speak();
  cout << "My name is " << name << endl;
  cout << "I am " << age << " years old" << endl;
  cout << "I am cat number " << myCatNbr << endl;
  cout << "and I am animal number " << myAnimalNumber << endl;
  cout << "I am a(an) " << animalType << endl;
  cout << "I am " << CatWeight << " pounds" << endl;
  cout << "I am a/an " << CatBreed << endl;
  cout << "I am " << CatColor << endl;
  cout << "I am " << CatHealth << endl;
}

int Animal::AnimalNumber=0;
int Cat::nbrOfCats = 0;

int main() {
 
  Cat catA("Morris",1,2,"mixed","yellow","in good health");
  catA.Introduction();

  Cat catB("Mittens",2,3,"Calico","brown and white","in good health");
  catB.Introduction();

  Cat catC("Junior",1,2,"Cartoon","grey","in good health");
  catC.Introduction();

  Cat catD("Priss",2,3,"Heinz","white","in good health");
  catD.Introduction();
  
  Cat catE("Charcoal",1,2,"Siamese","white and yellow","expecting");
  catE.Introduction();
  
  Cat catF("Bitsy",4,6,"Manx","grey","in good health");
  catF.Introduction();
  
  Cat catG("Charmin",2,3,"Ragdoll","white","in good health");
  catG.Introduction();
  
  Cat catH("Red",2,2,"Manx","black","parvo");
  catH.Introduction();
  
  Cat catI("Cute Stuff",1,2,"Persian","yellow","in good health");
  catI.Introduction();
  
  Cat catJ("Yikes",2,3,"Bengal","Spotted","in fair health");
  catJ.Introduction();
  


  return 0;
} //main