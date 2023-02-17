// Homework 6- Animal Shelter
// CS 1337.010
// This code is a small database system for an Animal Shelter. 
// In this program, we will accept animal “donations” to the shelter, but mostly only dogs and cats. 
// We will also add animals to the database and print reports based on the database. 
// April 22nd, 2022

#include <iostream>
#include <string>

using namespace std;

//--- Animal Class ---------------------------//
class Animal {
private:
  static int AnimalNumber;
public:
  string name;
  void Speak() { //default speak function, so no specific sound
    cout << name << " says: (slight breathing sound)" << endl;
  }
  Animal();
//  ~Animal() {cout << "One less animal: " << name << endl;}
  string animalType = "animal";
  int myAnimalNumber;
};

Animal::Animal() {
  cout << "\nCreating a new animal." << endl;
  AnimalNumber++;
  myAnimalNumber = AnimalNumber;
}

//--- Cat Class ---------------------------//
class Cat : public Animal {
private:
  //static int nbrOfCats; //note that this is a static variable
  static int nbrOfCats;
  int myCatNbr;
  int age;
  int CatWeight;
  string CatBreed;
  string CatColor;
  string CatHealth;
  string name;
  void Speak()const {cout << "\nMeow." << endl;}

public:
  Cat(string name, int age);
  Cat(string name, int age, int weight);
  // Cat(string name, int age, int weight, string breed);
  // Cat(string name, int age, int weight, string breed, string color);
  Cat(string name, int age, int weight, string breed, string color, string health);
  Cat();
  ~Cat();
  int GetCatsAge() const; //notice all the const declarations! WHY?
  string GetCatsName() const;
  int GetCatNbr() {return myCatNbr;}
  void Introduction() const;
  void SetCatAge();
  void SetCatName(string name);
  void SetCatNumber();
  void SetCatWeight(int);
  void SetCatBreed(string name);
  void SetCatColor(string name);
  void SetCatHealth(string name);
  static int GetNumberOfCats();
}; // Cat
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



  
 //main

//--- Dog Class ---------------------------//
class Dog : public Animal {
private:
  //static int nbrOfdogs; //note that this is a static variable
  static int nbrOfDogs;
  int myDogNbr;
  int age;
  int DogWeight;
  string DogBreed;
  string DogColor;
  string DogHealth;
  string name;
  void Speak()const {cout << "\nWoof." << endl;}

public:
  Dog(string name, int age);
  Dog(string name, int age, int weight);
  // Dog(string name, int age, int weight, string breed);
  // Dog(string name, int age, int weight, string breed, string color);
  Dog(string name, int age, int weight, string breed, string color, string health);
  Dog();
  ~Dog();
  int GetDogsAge() const; //notice all the const declarations! WHY?
  string GetDogsName() const;
  int GetDogNbr() {return myDogNbr;}
  void Introduction() const;
  void SetDogAge();
  void SetDogName(string name);
  void SetDogNumber();
  void SetDogWeight(int);
  void SetDogBreed(string name);
  void SetDogColor(string name);
  void SetDogHealth(string name);
  static int GetNumberOfDogs();
}; // Dog
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

int Dog::nbrOfDogs = 0;

//--- Pet Class ---------------------------//
class Pet : public Animal {
private:
  //static int nbrOfpets; //note that this is a static variable
  static int nbrOfPets;
  int myPetNbr;
  int age;
  int PetWeight;
  string PetBreed;
  string PetColor;
  string PetHealth;
  string name;
  void Speak()const {cout << "\nSqueek." << endl;}

public:
  Pet(string name, int age);
  Pet(string name, int age, int weight);
  // Pet(string name, int age, int weight, string breed);
  // Pet(string name, int age, int weight, string breed, string color);
  Pet(string name, int age, int weight, string breed, string color, string health);
  Pet();
  ~Pet();
  int GetPetsAge() const; //notice all the const declarations! WHY?
  string GetPetsName() const;
  int GetPetNbr() {return myPetNbr;}
  void Introduction() const;
  void SetPetAge();
  void SetPetName(string name);
  void SetPetNumber();
  void SetPetWeight(int);
  void SetPetBreed(string name);
  void SetPetColor(string name);
  void SetPetHealth(string name);
  static int GetNumberOfPets();
}; // Pet

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

;
int Pet::nbrOfPets = 0;

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
  
  Cat catH("red",2,2,"Manx","black","parvo");
  catH.Introduction();
  
  Cat catI("Cute Stuff",1,2,"Persian","yellow","in good health");
  catI.Introduction();
  
  Cat catJ("Yikes",2,3,"Bengal","Spotted","in fair health");
  catJ.Introduction();

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