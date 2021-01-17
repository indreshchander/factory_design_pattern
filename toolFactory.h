#ifndef TOOLFACTORY_HEADER_FILE
#define TOOLFACTORY_HEADER_FILE

#include <iostream>
#include "tools.h"

class ToolFactory{
  public:
    Tool* getTool(string toolName){
      if(toolName == "pencil"){
         return new Pencil();
      }
      else if(toolName == "paintbucket"){
         return new PaintBucket();
      }
      else{
         return new PaintBrush();
      }

      
    }
};

#endif
