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

