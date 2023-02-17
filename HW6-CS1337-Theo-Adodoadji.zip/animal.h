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
