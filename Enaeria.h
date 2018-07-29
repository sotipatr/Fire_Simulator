#ifndef ENAERIA_H
#define ENAERIA_H

#include "Oxhma.h"

class Enaeria : public Oxhma
{
      private:
              
              int ftera;
              float vlavh_ftera;
      public:
             Enaeria(int ,float ,float , float, int, int ,int ,int ,int );
             virtual void random();//tuxaia kinhsh
             virtual void fwtia_stathmos(int, int); //kinhsh gia purosvesh  
             virtual void set_epimerous_vlavh(float);   
      
};
#endif
