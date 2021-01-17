#include <iostream>

using namespace std;
#include "toolFactory.h"

int main()
{
  ToolFactory toolFactory;

  std::cout << "\n>> Selecting pencil" << std::endl; 
  Tool *tool = toolFactory.getTool("pencil");
  tool->draw();

  std::cout << "\n>> Selecting paint brush" << std::endl; 
  tool = toolFactory.getTool("paintbrush");
  tool->draw();

  std::cout << "\n>> Selecting paint bucket to fill color" << std::endl; 
  tool = toolFactory.getTool("paintbucket");
  tool->draw();

  return 1;
}
