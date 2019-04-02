#include <iostream>
#include <random>
#include <stdlib.h>
#include <cmath>

int main(){
  int i;
  float x=0;
  float y=0;
  float r;
  
  srand48(2);

  for (i=0;i<1000;i++){  
    float delta_x=(2*drand48())-1;
    float delta_y=(2*drand48())-1;
    float h=sqrt(delta_x**2, delta_y**2);
    
    delta_x=delta_x/h
    delta_y/h
    
    x=x+delta_x
    y=y+delta_y
    
    std::cout << x << " " <<y << std::endl;
    
    }
  }
  
  return 0;
}
