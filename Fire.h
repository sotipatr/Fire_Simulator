#ifndef FIRE_H
#define FIRE_H
#include "Object.h"
#include "Oxhma.h"

class Oxhma;
class Fire : public Object 
{
      private:
              Oxhma* ptr_ox;
              
      public:
             Fire(int, int, int);
             
             static void setfire(int, int, int);
             Oxhma* epilogh_oxhmatos();//epilegei to oxhma to opoio tha svhsei thn fwtia 
             void svhse_fwtia();  //ekteleitai otan to oxhma ftasei sto shmeio ths fwtias   
             bool operator==(Fire); 
             Oxhma* get_ptrox() const; 
             void set_ptrox(Oxhma*);
             
};

#endif               
