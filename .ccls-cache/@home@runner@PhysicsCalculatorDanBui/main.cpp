#include <iostream>
#include<stdlib.h>
#include "functions.h"
using namespace std;

int main()
{
  char userOption;
  
  do
  {
      showMenu();
      cout << "Please select an option: ";
      userOption = validateChar(userOption);

      switch (userOption)
      {
        case '1':
        calculateVelocity();
        break;

        case '2':
        calculateAcceleration();
        break;

        case '3':
        calculateMotion();
        break;

        case '4':
        calculateNewton2Law();
        break;

        case '5':
        calculateWeight();
        break;

        case '6':
        calculateMomentum();
        break;

        case 'X':
        system("clear");
        break;

        case 'x':
        system("clear");
        break;

        case 'E':
        break;

        case 'e':
        break;

        default:
        cout << "Please enter a valid option" << endl;
        break;
      }
  }
  while (userOption != 'E' && userOption != 'e');
}