/*
  Name: Marcos Murillo
  Class: COSC 1437
  Professor: Mr_T


  Website used to learn and implement the problem:
  *https://www.mathsisfun.com/games/towerofhanoi.html
  *https://en.wikipedia.org/wiki/Tower_of_Hanoi
  *https://www.geeksforgeeks.org/c-program-for-tower-of-  
  *https://computersciencewiki.org/index.php/Towers_of_Hanoi
  *https://mathworld.wolfram.com/TowerofHanoi.html
*/

#include <iostream>
#include "Input_Validation_Extended.h"

//Function prototype
int factorialR(int);
void towerProblem(int diskAmount, std::string first, std::string second, std::string third);

int main() 
{

  int userInput;
  std::cout << "________________________" << std::endl;
  std::cout << "\tFactorial Center" << std::endl;
  std::cout << "Enter number: ";
  userInput = validateInt(userInput);
  
  while(userInput <= 0 || userInput > 16)
  {
    std::cout << "Number must be greater than 0 and less than 16, try again: ";
    userInput = validateInt(userInput);
  }

  std::cout << "Factorial of " << userInput << " is: " <<  factorialR(userInput) << std::endl;

  std::cout << "____________________________" << std::endl;
  std::cout << "\tTower of Hanoi Center" << std::endl;
  std::cout << "Enter number of disks: ";
  userInput = validateInt(userInput);

  while(userInput <= 0 )
  {
    std::cout << "Number of disks must be greater than 0, try again: ";
    userInput = validateInt(userInput);
  }
  towerProblem(userInput, "First", "Second", "Third");
}

//Function implementation
int factorialR(int x)
{
  if(x > 1)
  {
    return x * factorialR(x-1);
  }
  else
  {
    return 1;
  }
} 

void towerProblem(int diskAmount, std::string first, std::string second, std::string third)
{
  if(diskAmount == 1)
  {
    std::cout << "Moving first disk from " << first << " rod to " << second << " rod" << std::endl;
    std::cout << "Done..." << std::endl;
    return;
  }
  towerProblem(diskAmount - 1, first, third, second);
  std::cout << "Moving disk: " << diskAmount << " from " << first << " rod to " << second << std::endl; 
  towerProblem(diskAmount -1 , third, second, first);

}

