//Giovanni Ibarra
//5/2/2020
//Dr.T @ TCCD
//COSC- 1437 Programming Fundamentals II
//Program:  Factorial
#include "Input_Validation_Extended.h"
using namespace std;


double factorialIR(double num);
double factorialIR(double num)
  {
    if (num == 0)
      return 1;
    else
      return num * factorialIR(num - 1);
  }

int main() 
{
  double input = 0.0;

  cout << "Finding a Factorial\n";

  cout << "\nEnter a number:";
  validateDouble(input);
  cout << "The factorial is: ";
  cout << factorialIR(input);


  return 0;
}

