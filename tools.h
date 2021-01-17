#ifndef TOOLS_HEADER_FILE
#define TOOLS_HEADER_FILE

#include <iostream>

class Tool{
  public:
    virtual void draw() = 0;

    virtual ~Tool(){}
};

class PaintBrush:public Tool
{
  public:
    void draw(){
      std::cout << "Draw like a 'paint brush'" << std::endl;
    } 
};

class Pencil:public Tool
{
  public:
    void draw(){
      std::cout << "Draw like a 'pencil'" << std::endl;
    }
};

class PaintBucket:public Tool
{
  public:
    void draw(){
      std::cout << "Fill color in shape like 'paint bucket'" << std::endl;
    }
};

#endif
