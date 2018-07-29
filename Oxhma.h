#ifndef OXHMA_H
#define OXHMA_H

#include "Object.h"
#include "Fire.h"
#include "Constants.h"

class Fire; 
class Oxhma : public Object
{
      private:
             static int oxhmata;   //metra to sunoliko plhthos oxhmatwn 
             float kausima;
             int nero;
             int hlikia;
             float taxuthta;
             int vlavh;
             bool energo;  //paei gia efodiasmo h oxi
             bool busy;    //tou exei anatethei purosvesh h oxi
             int metrhths2;//metraei to sunoliko aritho twn keliwn pou tha svhsei to oxhma 
             int suxnothta;
             float ruthmos_kat_nerou;
             float ruthmos_kat_kaus;
             int xwrhtikot_nerou;
             Fire  *f; //deikths sthn fwtia th opoia tha svhesei to oxhma       
             float vlavh_kinhthra; 
             
             float sum;//athroisma taxuthtwn gia kinhsh 
             
       public:
              Oxhma(int ,float ,float ,float ,int ,int ,int ,int );
              void kinhsh();//epilegei pote tha kinhthei to oxhma kai to poia  kinhsh tha kanei
              void genikh_kinhsh();
              virtual void random();//tuxaia kinhsh
              virtual void fwtia_stathmos(int, int);//kinhsh gia purosvesh h anefodiasmo
              void stathmos();
              bool operator==(Oxhma *); 
              
              virtual void set_epimerous_vlavh(float) ;
              void set_vlavh_kinhthra(float);
              void setbusy(bool);
              void setnero(int);
              void setf(Fire* );
              void setsum(float); 
              
              bool getbusy() const;
              int getnero() const;
              int gethlikia() const;
              
              float get_taxuthta() const;
              float get_ruthmos_kat_nerou() const;
              float get_ruthmos_kat_kaus() const;
              int get_xwrhtikot_nerou() const;
              float get_kausima() const;
              int get_vlavh() const;
              bool get_energo() const;
              bool get_vlavh_kinhthra() const;
              
              
              Fire* getf() const;            
}; 

#endif                
             
              
