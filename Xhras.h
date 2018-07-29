#ifndef XHRAS_H
#define XHRAS_H

#include "Oxhma.h"


class Xhras : public Oxhma
{
      private:
             
              int rodes;
              float vlavh_rodes;
      public:
             Xhras(int ,float ,float ,float ,int, int ,int ,int ,int );
             virtual void random();//tuxaia kinhsh
             virtual void fwtia_stathmos(int, int);//kinhsh gia purosvesh
             virtual void set_epimerous_vlavh(float);
             
};

#endif             
                     
