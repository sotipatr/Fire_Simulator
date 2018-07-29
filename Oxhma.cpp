#include<iostream>
#include "Oxhma.h"
#include <vector>

using namespace std;

extern vector <Oxhma*> o;
extern int map[SIZE_M][SIZE_M];

Oxhma::Oxhma(int i,float j,float k,float s,int l,int m,int n,int t)
:Object(m ,n ,t )
{
                 hlikia=i;
                 taxuthta=j;
                 ruthmos_kat_nerou=k;
                 ruthmos_kat_kaus=s;
                 xwrhtikot_nerou=l;
                 if(hlikia<=4 && hlikia>=0) suxnothta=4;
                 if(hlikia<=9 && hlikia>=5) suxnothta=3;
                 if(hlikia<=14 && hlikia>=10) suxnothta=2;
                 kausima=FULLK;
                 nero=xwrhtikot_nerou;
                 vlavh=3;
                 energo=true;  
                 busy=false;  
                 metrhths2=0;
                 f=0;
                 vlavh_kinhthra=0;
                 sum=0;
}

void Oxhma:: kinhsh()
{
     if(nero==0 || kausima<=2 || vlavh==5) {
                                              energo=false;
                                              
                                              }
     
     
     if ( (int)sum<1) sum=sum+taxuthta;
     
     if( (int)sum==1 )
     {
        if(getx()!=0 || gety()!=0) map[getx()][gety()]=0;  //to oxhma den htan sto kentro
        
        sum=0;
         if (energo==true)
         {
                      
                      if (busy==false) 
                      {                
                                        random();
                                        
                                        
                                        }
                      else 
                      {
                           
                           this->fwtia_stathmos(f->getx(), f->gety()); 
                       }           //kinhsh pros th fwtia
         }
         else
    
              {        
                       
                       if (busy==false) {
                                        
                                  
                        fwtia_stathmos(0, 0);      //kinhsh pros to stathmo purosbesh swthrias
                        
                        }
                      else {
                           //allagh poreias apo th fwtia sto stathmo
                           fwtia_stathmos(0, 0);
                         
                           }
              }//else              
                           genikh_kinhsh();
    } //if
}                              
                                             
void Oxhma::stathmos()
{
    
     this->nero=xwrhtikot_nerou;
     this->kausima=FULLK;
     this->vlavh=0;
     this->busy=false;
     this->energo=true;
     
     }
void Oxhma::genikh_kinhsh()
{
       kausima-=FULLK*ruthmos_kat_kaus; 
       
       if (getx()!=0 || gety()!=0) map[getx()][ gety()]=getID(); 
       
         int i,j;
         float k;
      
      if( metrhths2%5==0 && metrhths2!=0){
                              
                              hlikia++;
                              if(hlikia<=4 && hlikia>=0) suxnothta=4;
                              if(hlikia<=9 && hlikia>=5) suxnothta=3;
                              if(hlikia<=14 && hlikia>=10) suxnothta=2;
                              if(hlikia%5==0) metrhths2=0;
                          }
       if(metrhths2%suxnothta==0 && metrhths2!=0)
                      {
                             vlavh++;
                             k=(float)(rand()%9)/100;
                             set_vlavh_kinhthra(k);
                             set_epimerous_vlavh(1-k);
                             
                      }
                             
                             metrhths2++;                              

}
                             
void Oxhma::setbusy(bool B)
{
     
     busy=B;
   
     } 
     
void Oxhma::setnero(int n)    
{
     nero=n;
     }              
     
bool Oxhma::getbusy() const
{
 return busy;
}

int Oxhma::getnero() const
{
 return nero;
}        
        
void Oxhma::set_vlavh_kinhthra(float v)
{
     vlavh_kinhthra=v;
     }                      

void Oxhma::setf(Fire* fwtia)
{
     
     f=fwtia;
     
     }                      

Fire* Oxhma::getf() const
{
     
     return f;
     }   
     
 int Oxhma::gethlikia() const
{
    return hlikia;
}  
float Oxhma::get_taxuthta() const
{
    return  taxuthta;   
}
float Oxhma::get_ruthmos_kat_nerou() const
{
      return ruthmos_kat_nerou;
}
float Oxhma::get_ruthmos_kat_kaus() const
{
      return ruthmos_kat_kaus;
}
int Oxhma::get_xwrhtikot_nerou() const
{
      return xwrhtikot_nerou;
}
float Oxhma::get_kausima() const
{
    return kausima;
}

int Oxhma::get_vlavh() const
{
    return vlavh;
}
bool Oxhma::get_energo() const
{
     return energo;
}
bool Oxhma::get_vlavh_kinhthra() const
{
     return vlavh_kinhthra;
}

     
void Oxhma::random(){}//virtual
void Oxhma::fwtia_stathmos(int, int){ }//virtual
void Oxhma::set_epimerous_vlavh(float){} //virtual

bool Oxhma::operator==(Oxhma* v)
{
                         if( this->getx()==(*v).getx() && this->gety()==(*v).gety() )   return true;
                         else return false;
}                                                                      
     
 

void Oxhma::setsum(float s)
{
     sum=s;
}    
