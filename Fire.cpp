#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iomanip>
#include <windows.h>

using namespace std;
 
#include "Fire.h"


extern vector <Fire> f;
extern vector <Oxhma*> o;
extern int map[SIZE_M][SIZE_M];


Fire::Fire(int x, int y, int id)
:Object(x, y, id)
{
           ptr_ox=0;
          
}
  

 
             
void Fire::setfire( int xf, int yf ,int id)
{
   
   Fire *fwtia= new Fire (xf, yf, id);
   if ( map[xf][yf]==60 || map[xf][yf]==80 || map[xf][yf]==-1) 
   {
                                               //fwtia panw se oxhma 
                                               map[xf][yf]=fwtia->getID(); //menei mono h fwtia
                                               for(int k=0; k<o.size(); k++)
                                               {
                                                       if( xf==o[k]->getx() && yf==o[k]->gety() )
                                                           {
                                                            
                                                              for(int i=0; i<f.size(); i++)
                                                               {
                                                                      if(f[i].ptr_ox==o[k])  f[i].ptr_ox=0; 
                                                                }   
                                                                                      
                                                             o.erase(   remove(o.begin(),o.end(), o[k] ),  o.end()  );
                                                           }  
                                                             
                                               }//for
                                               
    }//if                                            
   else   map[xf][yf]=fwtia->getID();  
  
            
    fwtia->ptr_ox=fwtia->epilogh_oxhmatos( );  //epilegw oxhma gia to svhshmo ths fwtias pou dhmiourghsa akrivws apo panw
     
    f.push_back( *fwtia );
}



Oxhma* Fire::epilogh_oxhmatos( )
{
       char choice;
       Oxhma *ptr=0;  //epilegmeno oxhma
       float min=100;
       float d=0, s=0;
       int i=0;
      
       vector <Oxhma*>::iterator iter=o.begin();
       while (i<o.size())
       {      
              
             
             if ( (*(*iter)).getbusy()==false )
             {
                    
                    s=pow(getx()- (*(*iter)).getx(), 2.0) + pow(gety()- (*(*iter)).gety(), 2.0);
                  
                    d=sqrt(s);  //upologismos apostashs fwtias-trexontos oxhmatos
                 
                    if (d<min) 
                          {
                               min=d;
                               
                               ptr=*iter;
                              
                               }
             iter++;
             i++;                 
            }
                              
            
             else 
             {
                 iter++;
                 i++;
                 continue;
                 }
             
            
             }
             //if (ptr==0) den epilegetai oxhma
             if (ptr!=0) 
             {
                    
                    ptr->setbusy(true);
                    ptr->setf(this);
                    } 
        return ptr;
}



void Fire::svhse_fwtia( )//purosvesh ths fwtias this
{
     
     ptr_ox->setnero(ptr_ox->getnero()-2);
     
     vector <Fire>::iterator iter;
     f.erase(   remove(f.begin(),f.end(),*this ),  f.end()  );//diagrafetai h fwtia apo to vector
    
     
     ptr_ox->setbusy(false);
     ptr_ox->setf(0);
    
     setID(0);  //h fwtia svhsthke
     if (getx()==0 && gety()==0) map[getx()][gety()]=-1;  
     else map[getx()][gety()]=0;
     delete this;
    
     
}    
                       

bool Fire::operator==(Fire fwtia) 
{
    
     if( this->getID()==fwtia.getID() )  return true;
     else return false;
}               
     
    

     
void Fire::set_ptrox( Oxhma* x)
{
  
     ptr_ox=x;
}                                                                  

Oxhma * Fire::get_ptrox() const
{
      return ptr_ox;
      }
