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
