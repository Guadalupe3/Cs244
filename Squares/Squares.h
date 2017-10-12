#ifndef SQUARES_H
#define SQUARES_H

#include <iostream>
#include <sstream>
#include <string>
namespace shapes
{
class Square1
{
  public:
    int side;
    Square1(); side(1)
    {
      std:: cout << "Square1: Objects has been created by overloading constructor\n";
    }

    Square1(int side)
    {
      this->side=new int;
    }
    {
      side = 1;
      std::cout << "Square1: Objects has been with default construction \n";
    }
    /* destructor is the class method that handles garbage */
    ~Square1()
    {
      std:: cout<<"Square1: Objects has been destoryed\n";
    }
};
class Square2
{
public:
  int* side;
  Square2()
  {
    side = new int;
    *side =1;
    std::cout<< "Sqaure2: Object has been created by overloading construction\n";
  }
  Square2 (int side)

  {
    this->side= new int;
    *(this->side) = side;
    *side=1;
    std::cout<< "Square2: Object has been with default construction \n";
  }
  ~Square2()
  {
    delete side;
    std:: cout << "Sqaure2: Object has been destoryed\n";
  }
};
}
#endif
