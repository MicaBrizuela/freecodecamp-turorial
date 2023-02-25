#include <iostream>
using namespace std;

int main() {
  string characterName = "Tom";
  int characterAge;
  characterAge = 73;
  char grade = 'B';
  float gpa1 = 2.8;
  double gpa2 = 2.3; //use it as much as possible
  bool isMale = false;
  
  cout << "Hi my name is " << characterName << " and I'm " << characterAge << " years old\n"; //new line space without endl
  characterName = "Mike";
  cout << "Hi my name is " << characterName << " and I'm " << characterAge << " years old too" << endl;
  
  return 0; 
}