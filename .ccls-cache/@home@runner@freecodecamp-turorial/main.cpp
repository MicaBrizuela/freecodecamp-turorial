#include <iostream>
using namespace std;

int main() {
  cout << 8 + 2 << "\n";
  cout << 8 - 2 << "\n";
  cout << 8 * 2 << "\n";
  cout << 8 / 2 << "\n";
  cout << 8 % 3 << endl; //returns the remainder of the division
  //order : PEMDAS
  //potencia exponente multiplicacion division suma resta
  int numero = 2;
  numero++; // numero + 1
  numero--; // numero - 1
  numero += 80; // numero + 80
  //tambien se puede con -=, *=, /= investigar porque no entendi:
  // se refiere a esto como una abreviacion de la otra forma
  // numero *= 5 = numero = numero * 5
  // numero /= 2 = numero = numero / 5
  
  return 0;
}