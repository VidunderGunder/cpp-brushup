#include <iostream>
#include <string>

using namespace std;

class Human {
  float dna;

 public:
  Human(string name = "Unnamed") {
    this->name = name;
    cout << "Human " << this->name << " created" << endl;
  }
  ~Human() { cout << "Human " << this->name << " destroyed" << endl; }

  string name;
  string face;
  void walk() { cout << "Walking..." << endl; }
  void talk();
};

void Human::talk() { cout << "Talking..." << endl; }

int main() {
  Human adam = Human("Adam");
  adam.face = "neutral";
  adam.walk();
  adam.talk();

  Human eve = Human("Eve");
  adam.face = "smile";

  Human* abelPointer = new Human("Abel");
  Human* cainPointer = new Human("Cain");

  delete abelPointer;

  unique_ptr<Human> abelSmartPointer(new Human("Abel"));
  abelSmartPointer->face = "sad";
  cout << abelSmartPointer->name << endl;

  return 0;
}
