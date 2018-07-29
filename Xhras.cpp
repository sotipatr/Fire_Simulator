#include <iostream>
#include "Xhras.h"
#include <vector>
#include <iomanip>

using namespace std;

extern vector <Oxhma*> o;
extern int map[ SIZE_M ][ SIZE_M ];

Xhras::Xhras(int i,float j,float k,float s,int l,int n,int m,int r,int t)
:Oxhma( i, j, k, s ,l,m ,r ,t )
{
                  rodes=n;
                  vlavh_rodes=0;          
}

void Xhras::random()
{
          int k=getx();
          int l=gety(); 
          int move,i,x,y;
          int ch;
          bool flag=false;
          int prospatheies=0;
           
        while (prospatheies<4 && flag==false)
        { 
             
          
                                                if(k== SIZE_M -1 && l!=0 && l!= SIZE_M -1) 
                                                    {
                                                    
                                                              srand(time(0));
                                                              move=rand()%3;
                                                              srand(time(0));
                                                              
                                                                            
                                                                              if(move==0) l++;
                                                                              else if(move==1) k--;
                                                                              else if(move==2) l--;
                                                                    
                                                              
                                                              
                                                              
                                                    }//if(k==SIZE_M-1 && l!=0)
                                                else if(k==0 && l!= SIZE_M -1  && l!=0)
                                                    {
                                                        
                                                                   srand(time(0));
                                                                   move=rand()%3;
                                                                   srand(time(0));
                                                                  
                                                                             if(move==0) l++;
                                                                             else if(move==1) k++;
                                                                             else if(move==2) l--;
                                                                             
                                                                   
                                                    }//if(k==0 && l!=SIZE_M-1 && l!=0)
                                                    
                                                    else if(l== SIZE_M -1  && k!= SIZE_M -1 && k!=0)
                                                    {
                                                        
                                                                   srand(time(0));
                                                                   move=rand()%3;
                                                                   srand(time(0));
                                                                   
                                                                             if(move==0) k--;
                                                                             else if(move==1) l--;
                                                                             else if(move==2) k++;
                                                                             
                                                                  
                                                                  
                                                    }//if(l==SIZE_M-1 && k!=SIZE_M-1 && k!=0)
                                                  else  if(l==0 && k!= SIZE_M -1 && k!=0)
                                                    {
                                                                 
                                                                   srand(time(0));
                                                                   move=rand()%3;
                                                                   srand(time(0));
                                                                  
                                                                             if(move==0) k--;
                                                                             else if(move==1) l++;
                                                                             else if(move==2) k++;
                                                                             
                                                                  
                                                    }//if(l==0 && k!=SIZE_M-1 && k!=0)
                                                 else  if(k==0 && l==0) 
                                                    {
                                                        
                                                         srand(time(0));
                                                         move=rand()%2;
                                                         srand(time(0));
                                                         if(move==0) 
                                                         {
                                                                     k=0;
                                                                     l=1;
                                                                     }
                                                         
                                                         else if(move==1)
                                                         {
                                                              k=1;
                                                              l=0;
                                                              }
                                                    
                                                    }//else if(k==0 && l==0)
                                                         
                                                   else  if(k==0 && l== SIZE_M -1) 
                                                    {
                                                        
                                                         
                                                         srand(time(0));
                                                         move=rand()%2;
                                                         srand(time(0));
                                                         if(move==0) 
                                                         {
                                                                     k=0;
                                                                     l=SIZE_M-2;
                                                                     }
                                                        
                                                         else if (move==1)
                                                         {
                                                              k=1;
                                                              l= SIZE_M -1;
                                                              }
                                                    
                                                    }//else if(k=0 && l=SIZE_M-1)
                                                    else if(k== SIZE_M -1 && l==0) 
                                                    {
                                                        
                                                         srand(time(0));
                                                         move=rand()%2;
                                                         srand(time(0));
                                                         if(move==0) 
                                                         {
                                                                     k= SIZE_M -2;
                                                                     l=0;
                                                                     }
                                                         
                                                         else if (move==1)
                                                         {
                                                              k= SIZE_M -1;
                                                              l=1;
                                                              }
                                                    
                                                    }//if(k=SIZE_M-1 && l=0)
                                                     else if(k== SIZE_M -1 && l== SIZE_M -1) 
                                                    {
                                                        
                                                         srand(time(0));
                                                         move=rand()%2;
                                                         srand(time(0));
                                                         if(move==0) 
                                                         {
                                                                     k= SIZE_M -2;
                                                                     l= SIZE_M -1;
                                                                     }
                                                         
                                                         else if (move==1)
                                                         {
                                                              k= SIZE_M -1;
                                                              l= SIZE_M -2;
                                                              }
                                                    
                                                    }//if(k=SIZE_M-1 && l=SIZE_M-1)
               
                                                       else 
                                                       {   
                                                           
                                                             srand(time(0));
                                                             move = rand()%4;
                                                            
                                                            
                                                                      if(move==0)k++;
                                                                      else if (move==1)l++;
                                                                      else if (move==2)k--;
                                                                      else if (move==3)l--;
                                                             
                                                       }///else
                                                                 
                                                   
                                                                   
           
                                                            
         
          if( map[k][l]==0) flag=true; 
          else {
                   
                   prospatheies++;
                   k=getx();
                   l=gety();
                   cout<<endl;   
               } 
                        
         }//while
                                                           
         if (prospatheies>=4) {//to oxhma paramenei sthn idia thesh
                                 
                                  
                                  setsum(1.0); //h random() xanakaleitai thn epomenh xronikh stigmh
                              }
           else
           {
                                                                 
               
               setx(k);
               sety(l);
           }    
          
           
           
}

void Xhras::fwtia_stathmos(int x_f,int y_f)
 {
         int k=getx();
         int l=gety();
         int ch,i;
         bool flag=false;
         int prospatheies=0;
          
     while(prospatheies<4 && flag==false)
     {    
          
         if (k>x_f ) k--;
           else if (k<x_f) k++;
           else
           {
               if (l<y_f) l++;
               else if(l>y_f) l--;
               }
             
               
       if(k!=0 || l!=0)
       {  
         
             if ( (getf()!=0 && map[k][l]==getf()->getID() ) || map[k][l]==0 ) flag=true;
              else 
              {
                 
                   prospatheies++;
                   k=getx();
                   l=gety();
                   cout<<endl;   
               }         
       }//if     
                                                            
        if( k==0 && l==0 ) {
                               flag=true; //sto keli tou stathmou mporw na exw 2 oxhmata sthn idia thesh
                               prospatheies=4;
                            }    
                                                                                 
      
      
              
}//while    
                                                      
        if (prospatheies>=4 && (k!=0 || l!=0) ) 
                               {
                                  setsum(1.0); //h random() xanakaleitai thn epomenh xronikh stigmh
                               }
           else
           {   
                                                              
               setx(k);
               sety(l);
           }    
           
         if(k==x_f && l==y_f)
         { 
                   if(getbusy()==true) getf()->svhse_fwtia();
                   else stathmos();
                   }
                  
 }

void Xhras:: set_epimerous_vlavh(float i)
{
        vlavh_rodes=i;
}
