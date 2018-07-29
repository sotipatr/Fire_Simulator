#include <iostream>
#include "Enaeria.h"
#include <vector>
#include <iomanip>

using namespace std;

extern vector <Oxhma*> o;
extern int map[SIZE_M][SIZE_M];


Enaeria::Enaeria(int i,float j,float k, float s, int l,int n,int m,int r,int t)
:Oxhma(i, j, k, s, l,m ,r ,t )
{
                  ftera=n;
                  vlavh_ftera=0;          
}

void Enaeria::random()
{
          bool flag=false;
          int k=getx();
         int l=gety();
          int move,push;
          int ch, j;
          int prospatheies=0;
          
      while (prospatheies<8 && flag==false)
       { 
            
           
                                                    if(k== SIZE_M -1 && l!=0 && l!= SIZE_M -1) //teleutaia grammh
                                                    {
                                                              
                                                              srand(time(0));
                                                              ch=rand()%2;
                                                              move=rand()%3;
                                                              push=rand()%2;
                                                              if(ch==0)
                                                                       {      
                                                                              if(move==0) l++;
                                                                              else if(move==1) k--;
                                                                              else if(move==2) l--;
                                                                       }//if(ch==0)
                                                              else if(ch==1)  //diagwnia kinhsh
                                                                       {
                                                                              if(push==0) 
                                                                              {
                                                                                          k--;
                                                                                          l++;
                                                                                          }
                                                                              else if(push==1)
                                                                              {
                                                                                          k--;
                                                                                          l--;
                                                                                          }
                                                                       }//else if(ch==1)
                                                              
                                                              
                                                    }//if(k==SIZE_M-1 && l!=0)
                                                    else if(k==0 && l!= SIZE_M -1  && l!=0)  //prwth grammh
                                                    {
                                                                   srand(time(0));
                                                                   ch=rand()%2;
                                                                   move=rand()%3;
                                                                   push=rand()%2;
                                                                   srand(time(0));
                                                                   if(ch==0) 
                                                                   {
                                                                             if(move==0) l++;
                                                                             else if(move==1) k++;
                                                                             else if(move==2) l--;
                                                                             
                                                                   }//if(ch==0)
                                                                   else if(ch==1) 
                                                                   {
                                                                        if(push==0) 
                                                                        {
                                                                                   k++;
                                                                                   l++;
                                                                        }
                                                                        else if(push==1) 
                                                                        {
                                                                             k++;
                                                                             l--;
                                                                        }
                                                                   }//  else if(ch==1) 
                                                    }//if(k==0 && l!=SIZE_M-1 && l!=0)
                                                    
                                                     else if(l== SIZE_M -1  && k!= SIZE_M -1 && k!=0)//teleutaia sthlh
                                                    {
                                                                   srand(time(0));
                                                                   ch=rand()%2;
                                                                   move=rand()%3;
                                                                   push=rand()%2;
                                                                   srand(time(0));
                                                                   if(ch==0) 
                                                                   {
                                                                             if(move==0) k--;
                                                                             else if(move==1) l--;
                                                                             else if(move==2) k++;
                                                                             
                                                                   }//if(ch==0)
                                                                   else if(ch==1) 
                                                                   {
                                                                        if(push==0) 
                                                                        {
                                                                                   k--;
                                                                                   l--;
                                                                        }
                                                                        else if(push==1) 
                                                                        {
                                                                             k++;
                                                                             l--;
                                                                        }
                                                                   }//  else if(ch==1) 
                                                    }//if(l==SIZE_M-1 && k!=SIZE_M-1 && k!=0)
                                                    else if(l==0 && k!= SIZE_M -1 && k!=0)  //prwth sthlh
                                                    {
                                                                   srand(time(0));
                                                                   ch=rand()%2;
                                                                   move=rand()%3;
                                                                   push=rand()%2;
                                                                   srand(time(0));
                                                                   if(ch==0) 
                                                                   {
                                                                             if(move==0) k--;
                                                                             else if(move==1) l++;
                                                                             else if(move==2) k++;
                                                                             
                                                                   }//if(ch==0)
                                                                   else if(ch==1) 
                                                                   {
                                                                        if(push==0) 
                                                                        {
                                                                                   k--;
                                                                                   l++;
                                                                        }
                                                                        else if(push==1) 
                                                                        {
                                                                             k++;
                                                                             l++;
                                                                        }
                                                                   }//  else if(ch==1) 
                                                    }//if(l==0 && k!=SIZE_M-1 && k!=0)
                                                    else if(k==0 && l==0) //panw aristera gwnia
                                                    {
                                                         
                                                         srand(time(0));
                                                         move=rand()%3;
                                                         srand(time(0));
                                                         if(move==0) 
                                                         {
                                                                     k=0;
                                                                     l=1;
                                                                     }
                                                         else if (move==1)
                                                         {
                                                              k=1;
                                                              l=1;
                                                              }
                                                         else if(move==2)
                                                         {
                                                              k=1;
                                                              l=0;
                                                              }
                                                    
                                                    }//else if(k==0 && l==0)
                                                         
                                                    else if(k==0 && l== SIZE_M -1)//panw dexia gwnia 
                                                    {
                                                         
                                                         srand(time(0));
                                                         move=rand()%3;
                                                         srand(time(0));
                                                         if(move==0) 
                                                         {
                                                                     k=0;
                                                                     l= SIZE_M -2;
                                                                     }
                                                         else if (move==1)
                                                         {
                                                              k=1;
                                                              l= SIZE_M -2;
                                                              }
                                                         else if (move==2)
                                                         {
                                                              k=1;
                                                              l= SIZE_M -1;
                                                              }
                                                    
                                                    }//else if(k=0 && l=SIZE_M-1)
                                                    else if(k== SIZE_M -1 && l==0) //katw aristera gwnia
                                                    {
                                                        
                                                         srand(time(0));
                                                         move=rand()%3;
                                                         srand(time(0));
                                                         if(move==0) 
                                                         {
                                                                     k= SIZE_M -2;
                                                                     l=0;
                                                                     }
                                                         else if (move==1)
                                                         {
                                                              k= SIZE_M -2;
                                                              l=1;
                                                              }
                                                         else if (move==2)
                                                         {
                                                              k= SIZE_M -1;
                                                              l=1;
                                                              }
                                                    
                                                    }//if(k=SIZE_M-1 && l=0)
                                                      else if(k== SIZE_M -1 && l== SIZE_M -1) //katw dexia gwnia
                                                    {
                                                          
                                                         srand(time(0));
                                                         move=rand()%3;
                                                         srand(time(0));
                                                         if(move==0) 
                                                         {
                                                                     k= SIZE_M -2;
                                                                     l= SIZE_M -1;
                                                                     }
                                                         else if (move==1)
                                                         {
                                                              k= SIZE_M -2;
                                                              l= SIZE_M -2;
                                                              }
                                                         else if (move==2)
                                                         {
                                                              k= SIZE_M -1;
                                                              l= SIZE_M -2;
                                                              }
                                                    
                                                    }//if(k=SIZE_M-1 && l=SIZE_M-1)
               
                                                       else  
                                                       {   
                                                             ch = rand()%2;
                                                             move = rand()%4;
                                                             if(ch==0)//kineitai kanonika
                                                             {
                                                                     
                                                                      if(move==0)k--;
                                                                      else if (move==1)k++;
                                                                      else if (move==2)l--;
                                                                      else if (move==3)l++;
                                                             }
                                                             else if(ch==1)//kineitai diagwnia
                                                             {
                                                                  
                                                                  if(move==0){
                                                                              k--;
                                                                              l--;
                                                                              }
                                                                  else if (move==1){
                                                                                       k++;
                                                                                       l--;
                                                                                   }
                                                                  else if (move==2){
                                                                                      k++;
                                                                                      l++;
                                                                                   }
                                                                  else if (move==3){
                                                                                      k--;
                                                                                      l++;
                                                                                   }
                                                             }//else
           }
          
           if( map[k][l]==0) flag=true;
           else 
                 {
                   
                   prospatheies++;
                   k=getx();
                   l=gety();
                   cout<<endl;
                 }                                                 
       }//while 
           if (prospatheies>=8) {
                                 
                                  setsum(1.0); //h random() xanakaleitai thn epomenh xronikh stigmh
                                  }
           else
           { 
              
               setx(k);
               sety(l);
           }   
         
}                                                         
               

void Enaeria::fwtia_stathmos(int x_f,int y_f)
 {
         
         int k=getx();
         int l=gety();
         bool flag=false;
         int ch, j;
         
         srand(time(0));
         int prospatheies=0; //to oxhma exei 8 prospatheies na metakinhthei se allo keli (exairesh to kentro)
         
 while(prospatheies<8 && flag==false)
 {
          
          ch = rand()%2 ;
          if(ch==1)
         {
                  if (k>x_f) k--;
                  if (k<x_f) k++;
                  if (l<y_f) l++;
                  if (l>y_f) l--;
         }
         else if(ch==0)
         {
                
              if (k>x_f) k--;
              else if (k<x_f) k++;
              else
              {
                  if (l<y_f) l++;
                  else if (l>y_f) l--;
              }
         }
        if( k==0 && l==0 ) 
                           {
                               flag=true; //sto keli tou stathmou mporw na exw polla oxhmata sthn idia thesh
                               prospatheies=8;
                            } 
                               
        if( k!=0 || l!=0 ) //=>to oxhma den ftanei sto stahmo 
          
                 {
                   if ( (getf()!=0 && map[k][l]==getf()->getID() ) || map[k][l]==0 ) flag=true;
                   else {
                  
                   prospatheies++;
                   k=getx();
                   l=gety();
                   cout<<endl;   
                  }           
                     
               } 
                         
         
       
         
                                                                     
                                                             
}//while   
                                                        
          if (prospatheies>=8 && (k!=0 || l!=0) ) setsum(1.0); //h fwtia_stathmos() xanakaleitai thn epomenh xronikh stigmh (exairesh to (0, 0) )
          else
           { 
                                                            
               setx(k);
               sety(l);
           }   
           
            if(k==x_f && l==y_f)
                  { 
                   if( getbusy()==true ) getf()->svhse_fwtia();
                   else stathmos();
                   } 
                               
                  
 }
 
void Enaeria::set_epimerous_vlavh(float i)
{
        vlavh_ftera=i;
}
