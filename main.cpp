#include <iostream>
#include <vector>
#include "Object.h"
#include "Oxhma.h"
#include "Fire.h"
#include "Constants.h"
#include "Xhras.h"
#include "Enaeria.h"
#include <windows.h>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <conio.h>


using namespace std;

void print_info(Oxhma *);
vector <Fire> f; 
vector <Oxhma*> o;
int map[SIZE_M][SIZE_M];



int j,x,y;
int main ()
{
    map[0][0]=-1; //sto (0,0) einai to kentro
    char choice;
    bool pause=false;
    bool found=false;
    bool flag;
    bool key=false;
    int id=1;
    bool full_fwties=false;
    int T=0; //genikos metritis
    srand(time(0));
    int age;
    float speed;
    int wings,m,n;
    int wheels;
    for (int j=0; j<5; j++)  //vazw sto xarth 5 oxhmata
    {
  
        Oxhma *v;
        if(j%2==0) v=new Enaeria(rand()%10, 0.5, RYTHMOS_KAT_NEROU_E, RYTHMOS_KAT_KAYSIMOU_E, XWR_NEROY_E, rand()%3+2 , rand()% SIZE_M,rand()% SIZE_M, ID_E );
        else v=new Xhras(rand()%10, 0.2 ,RYTHMOS_KAT_NEROU_X, RYTHMOS_KAT_KAYSIMOU_X, XWR_NEROY_X, rand()%3+4, rand()% SIZE_M, rand()% SIZE_M, ID_X);       
        o.push_back(v);
        map[v->getx()][ v->gety()]=v->getID();
        map[0][0]=-1; //sto (0,0) einai to kentro
    }
        
   for(int v; ; v++)
    
    {
        if(pause==false)
           
           while( kbhit()==0)
             {        
               
             if(f.empty()==false )//exaplwsh fwtiwn
               {                             
                                             int k=f.size();
                                             srand(time(0));
                                            for(int i=0;i<k;i++)  
                                             {      
                                                    
                                                    int x_f;
                                                    int y_f;
                                                    int move;
                                                    int push;
                                                    int ch;
                                                 srand(time(0));
                                                 flag=false;   
                                                //while( flag==false )
                                                //{  
                                                    x_f=f[i].getx();
                                                    y_f=f[i].gety();   
                                                    
                                                    if(x_f== SIZE_M -1 && y_f!=0 && y_f!= SIZE_M -1) 
                                                    {
                                                              srand(time(0));
                                                              ch=rand()%2;
                                                              move=rand()%3;
                                                              push=rand()%2;
                                                              if(ch==0)
                                                                       {      
                                                                              if(move==0) y_f++;
                                                                              else if(move==1) x_f--;
                                                                              else if(move==2) y_f--;
                                                                       }
                                                              else if(ch==1)
                                                                       {
                                                                              if(push==0) 
                                                                              {
                                                                                          x_f--;
                                                                                          y_f++;
                                                                                          }
                                                                              else if(push==1)
                                                                              {
                                                                                          x_f--;
                                                                                          y_f--;
                                                                                          }
                                                                       }
                                                              
                                                              
                                                    }
                                                    else if(x_f==0 && y_f!= SIZE_M -1  && y_f!=0)
                                                    {
                                                                   srand(time(0));
                                                                   ch=rand()%2;
                                                                   move=rand()%3;
                                                                   push=rand()%2;
                                                                   srand(time(0));
                                                                   if(ch==0) 
                                                                   {
                                                                             if(move==0) y_f++;
                                                                             else if(move==1) x_f++;
                                                                             else if(move==2) y_f--;
                                                                             
                                                                   }
                                                                   else if(ch==1) 
                                                                   {
                                                                        if(push==0) 
                                                                        {
                                                                                   x_f++;
                                                                                   y_f++;
                                                                        }
                                                                        else if(push==1) 
                                                                        {
                                                                             x_f++;
                                                                             y_f--;
                                                                        }
                                                                   } 
                                                    }
                                                    
                                                     else if(y_f== SIZE_M -1  && x_f!= SIZE_M -1 && x_f!=0)
                                                    {
                                                                   srand(time(0));
                                                                   ch=rand()%2;
                                                                   move=rand()%3;
                                                                   push=rand()%2;
                                                                   srand(time(0));
                                                                   if(ch==0) 
                                                                   {
                                                                             if(move==0) x_f--;
                                                                             else if(move==1) y_f--;
                                                                             else if(move==2) x_f++;
                                                                             
                                                                   }
                                                                   else if(ch==1) 
                                                                   {
                                                                        if(push==0) 
                                                                        {
                                                                                   x_f--;
                                                                                   y_f--;
                                                                        }
                                                                        else if(push==1) 
                                                                        {
                                                                             x_f++;
                                                                             y_f--;
                                                                        }
                                                                   } 
                                                    }
                                                    else if(y_f==0 && x_f!= SIZE_M -1 && x_f!=0)
                                                    {
                                                                   srand(time(0));
                                                                   ch=rand()%2;
                                                                   move=rand()%3;
                                                                   push=rand()%2;
                                                                   srand(time(0));
                                                                   if(ch==0) 
                                                                   {
                                                                             if(move==0) x_f--;
                                                                             else if(move==1) y_f++;
                                                                             else if(move==2) x_f++;
                                                                             
                                                                   }//if(ch==0)
                                                                   else if(ch==1) 
                                                                   {
                                                                        if(push==0) 
                                                                        {
                                                                                   x_f--;
                                                                                   y_f++;
                                                                        }
                                                                        else if(push==1) 
                                                                        {
                                                                             x_f++;
                                                                             y_f++;
                                                                        }
                                                                   }//  else if(ch==1) 
                                                    }//if(y_f==0 && x_f!=SIZE_M-1 && x_f!=0)
                                                    else if(x_f==0 && y_f==0) 
                                                    {
                                                         srand(time(0));
                                                         move=rand()%3;
                                                         srand(time(0));
                                                         if(move==0) 
                                                         {
                                                                     x_f=0;
                                                                     y_f=1;
                                                                     }
                                                         else if (move==1)
                                                         {
                                                              x_f=1;
                                                              y_f=1;
                                                              }
                                                         else if(move==2)
                                                         {
                                                              x_f=1;
                                                              y_f=0;
                                                              }
                                                    
                                                    }//else if(x_f==0 && y_f==0)
                                                         
                                                    else if(x_f==0 && y_f== SIZE_M -1) 
                                                    {
                                                         srand(time(0));
                                                         move=rand()%3;
                                                         srand(time(0));
                                                         if(move==0) 
                                                         {
                                                                     x_f=0;
                                                                     y_f= SIZE_M -2;
                                                                     }
                                                         else if (move==1)
                                                         {
                                                              x_f=1;
                                                              y_f= SIZE_M -2;
                                                              }
                                                         else if (move==2)
                                                         {
                                                              x_f=1;
                                                              y_f= SIZE_M -1;
                                                              }
                                                    
                                                    }//else if(x_f==0 && y_f==SIZE_M-1)
                                                    else if(x_f== SIZE_M -1 && y_f==0) 
                                                    {
                                                         srand(time(0));
                                                         move=rand()%3;
                                                         srand(time(0));
                                                         if(move==0) 
                                                         {
                                                                     x_f= SIZE_M -2;
                                                                     y_f=0;
                                                                     }
                                                         else if (move==1)
                                                         {
                                                              x_f= SIZE_M -2;
                                                              y_f=1;
                                                              }
                                                         else if (move==2)
                                                         {
                                                              x_f= SIZE_M -1;
                                                              y_f=1;
                                                              }
                                                    
                                                    }//if(x_f==SIZE_M-1 && y_f==0)
                                                      else if(x_f== SIZE_M -1 && y_f== SIZE_M -1) 
                                                    {
                                                         srand(time(0));
                                                         move=rand()%3;
                                                         srand(time(0));
                                                         if(move==0) 
                                                         {
                                                                     x_f= SIZE_M -2;
                                                                     y_f= SIZE_M -1;
                                                                     }
                                                         else if (move==1)
                                                         {
                                                              x_f= SIZE_M -2;
                                                              y_f= SIZE_M -2;
                                                              }
                                                         else if (move==2)
                                                         {
                                                              x_f= SIZE_M -1;
                                                              y_f= SIZE_M -2;
                                                              }
                                                    
                                                    }//if(x_f==SIZE_M-1 && y_f==SIZE_M-1)
               
                                                                                                                  
                                                    else  
                                                    {   srand(time(0));
                                                        ch = rand()%2;
                                                        move = rand()%4;
                                                         srand(time(0));
                                                        if(ch==0)
                                                        {
                                                                 if(move==0)x_f--;
                                                                 else if (move==1)x_f++;
                                                                 else if (move==2)y_f--;
                                                                 else if (move==3)y_f++;
                                                        }
                                                        else if(ch==1)
                                                        {
                                                                      if(move==0)
                                                                      {
                                                                                 x_f--;
                                                                                 y_f--;
                                                                      }
                                                                      else if (move==1)
                                                                      {
                                                                           x_f++;
                                                                           y_f--;
                                                                      }
                                                                      else if (move==2)
                                                                      {
                                                                           x_f++;
                                                                           y_f++;
                                                                      }
                                                                      else if (move==3)
                                                                      {
                                                                           x_f--;
                                                                           y_f++;
                                                                      }
                                                        }
                                                       
                                                        
                                                    }
                                                        
                                                       if(map[x_f][y_f]==0 || map[x_f][y_f]==60 || map[x_f][y_f]==80 || map[x_f][y_f]==-1)
                                                       {
                                                                           
                                                                            Fire::setfire(x_f,y_f,id);
                                                                            id++; 
                                                                           if(id==60 || id==80) id++;//id fwtias !=id oxhmatos
                                                                          
                                                                            }
                                                        
                                                        
                                                    
                                             }//for
               }//if( f.empty()==false )//exaplwsh fwtiwn
               
               
            for(int i=0;i<f.size();i++) //epilegw oxhma gia oses fwties den exoun!
            if( f[i].get_ptrox()==0 ) f[i].set_ptrox( f[i].epilogh_oxhmatos() );
               
               if(T%20==0) //ana 20 stigmes dhmiourgountai 3 tuxaies fwties
               {
                           srand(time(0));
                           for(int i=0; i<3; i++) 
                           { 
                                   
                                   int x_f=rand()% SIZE_M ;
                                   srand(time(0));
                                   int y_f=rand()% SIZE_M ;
                                   
                                   srand(time(0));
                                   while (map[x_f][y_f]!=0)  //vazw tuxaia fwtia se keno keli
                                   {
                                         x_f=rand()% SIZE_M ;
                                         y_f=rand()% SIZE_M ;
                                         
                                   }      
                                  
                                   Fire::setfire(x_f, y_f, id);
                                   id++;
                                   if(id==60 || id==80) id++;
                                   
                                   
                           } 
               }
               
        
       
       if (T==0)
       {        
      cout<<"---------------------------------------" <<endl;
                      
     for(int k=0; k<SIZE_M; k++) 
     { 
              cout<<"|"<<setw(7);
              for(int l=0; l<SIZE_M; l++) 
              { 
                      
                      cout<<map[k][l]<<setw(7);
                      
              } 
              cout<<setw(7)<<"|";
              cout<<endl;
     } 
     cout<<"----------------------------------------" <<endl;  
     }
     
     
              
      
      vector <Oxhma*>::iterator iter=o.begin();  //kinhsh oxhmatwn     
      for(int j=0;j<o.size();j++ ) 
      {
            
             (*(*iter)).kinhsh();
              
             iter++;
             
      }
     
      cout<<"-----------------------------------------------" <<endl;
                      
     for(int k=0; k<SIZE_M; k++) 
     { 
              cout<<"|"<<setw(7);
              for(int l=0; l< SIZE_M ; l++) 
              { 
                      
                      cout<<map[k][l]<<setw(7);
                      
              } 
              cout<<setw(7)<<"|";
              cout<<endl;
     } 
     cout<<"------------------------------------------------" <<endl; 
     
  
    

                                                       
      T++; 
      Sleep(2000);             
     if( f.size()>=SIZE_M*SIZE_M) break;
              
      
                                
}//while-kbhit()
if( f.size()>=SIZE_M*SIZE_M) break;
pause=true;
	cout<<endl<<"SIMULATION PAUSED"<<endl;
	cout<<"Please select: "<<endl;
	cout<<"a. Resume simulation"<<endl;
	cout<<"b. Information for the vehicle"<<endl;
	cout<<"c. Exit simulation"<<endl;
	cout<<"d. View Map"<<endl;
	cout<<"e. Insert vehicle"<<endl;
	cout<<"f. Insert fire"<<endl;
	cout<<"g. Information for a position in the map"<<endl;
	cin>>choice;
	switch(choice)
		{
		case 'a':
		     cout<<"Resuming Simulation..."<<endl;
		     pause=false;//Aplws to paused ginetai false..
		break;
		case 'b':
             cout<<"Please insert x (0 - 19)"<<endl;
		           cin>>x;
		           cout<<"Please insert y (0 - 19)"<<endl;
		           cin>>y;
		           for(int i=0;i<o.size();i++)
		           {
                                          if(x==o[i]->getx()&& y==o[i]->gety()) {
                                                                                     print_info(o[i]);
                                                                                     key=true;
                                                                                 }     
                                          }
                   if (key==false) cout<<"Nothing found!"<<endl;
                                           
                                          
       break;
       case 'c':	//H exit ektupwnei to munhma Bye bye!!.. kai meta apo 1 deuterolepto kleinei to 
		     cout<<"Bye bye!!.."<<endl;	//programma.
		     Sleep(1000);
		     exit(0);
	   break;
	   case 'd':
             for(int k=0; k<SIZE_M; k++) 
     { 
              cout<<"|"<<setw(7);
              for(int l=0; l<SIZE_M; l++) 
              { 
                      
                      cout<<map[k][l]<<setw(7);
                      
              } 
              cout<<setw(7)<<"|";
              cout<<endl;
     } 
     cout<<"----------------------------------------" <<endl;  
     Sleep(1000); 
     break;
      case 'e':
          cout<<"Epelekse eidos oxhmatos:"<<endl;
          cout<<"a. Enaeria"<<endl;  
          cout<<"b. xhras"<<endl;
          cin>>choice;
          cout<<"Epelekse kenh thesh gia thn topothethsh tou oxhmatos."<<endl;
          Oxhma * s;
          switch(choice){
                         case 'a': 
                              //ta dinei o xrhsths!
                              cout<<"Dwse hlikia(apo 1 mexri 10):"<<endl;
                              cin>>age;
                              cout<<"Dwse taxuthta megaluterh 0.5:"<<endl;//////////////////////////////
                              cin>>speed;/////////////////
                              cout<<"Dwse arithmo fterwn:"<<endl;
                              cin>>wings;
                              cout<<"Dwse tetmhmenh(apo 1 mexri "<<SIZE_M<<"):"<<endl;
                              cin>>n;
                              cout<<"Dwse tetagmenh(apo 1 mexri "<<SIZE_M<<"):"<<endl;
                              cin>>m;
                              s=new Enaeria(age,speed, RYTHMOS_KAT_NEROU_E, RYTHMOS_KAT_KAYSIMOU_E, XWR_NEROY_E, wings, n, m,   ID_E );   
                               o.push_back(s);
                               map[s->getx()][ s->gety()]=s->getID();
                         break;
                         case 'b':
                              
                              cout<<"Dwse hlikia(apo 1 mexri 10):"<<endl;
                              cin>>age;
                              cout<<"Dwse taxuthta mikroterh apo 0.5:"<<endl;//////////////////////////////
                              cin>>speed;/////////////////
                              cout<<"Dwse arithmo rodwn:"<<endl;
                              cin>>wheels;
                              cout<<"Dwse tetmhmenh(apo 1 mexri "<<SIZE_M<<"):"<<endl;
                              cin>>m;
                              cout<<"Dwse tetagmenh(apo 1 mexri "<<SIZE_M<<"):"<<endl;
                              cin>>n;
                                s=new Xhras(age, speed ,RYTHMOS_KAT_NEROU_X, RYTHMOS_KAT_KAYSIMOU_X, XWR_NEROY_X, wheels, n, m, ID_X);       
                                o.push_back(s);
                                map[s->getx()][ s->gety()]=s->getID();
                         break;
                         default:                
                      cout<<choice<<" is not a possible choice.. Please try again"<<endl;
                      break;
                     }//switch2
                   break;  
	   case 'f':
                   cout<<"Epelekse kenh thesh gia thn topothethsh ths fwtias"<<endl;
                   cout<<"Dwse tetmhmenh(apo 0 mexri "<<SIZE_M-1<<"):"<<endl;
		           cin>>x;
		          cout<<"Dwse tetagmenh(apo 0 mexri "<<SIZE_M-1<<"):"<<endl;
		           cin>>y;    
                   Fire::setfire(x,y,id++); 
       break;
       case 'g':
                   cout<<"Please insert x (apo 0 mexri "<<SIZE_M-1<<"):"<<endl;
		           cin>>x;
		           cout<<"Dwse tetagmenh(apo 1 mexri "<<SIZE_M<<"):"<<endl;
		           cin>>y; 
		           
		           if (x==0 && y==0 && map[0][0]==-1) cout<<"Purosvestiko Kentro"<<endl;
		           else
		               {
            		           for(int i=0;i<o.size();i++)
            		           {
                                                      if(x==o[i]->getx()&& y==o[i]->gety()) 
                                                                           {
                                                                           print_info(o[i]);
                                                                           found=true;
                                                                           }                   
                                                      }
                               for(int i=0;i<f.size();i++)
            		           {
                                                      if(x==f[i].getx()&& y==f[i].gety()) {
                                                                       cout<<"To oxhma pou tha thn svhsei ";
                                                                       
                                                                       Oxhma * m;
                                                                       m=f[i].get_ptrox();
                                                                       
                                                                       if (m!=0)  cout<<"exei suntetagmenes:"<<m->getx()<<" "<<m->gety()<<endl;
                                                                       else cout<<"-oups!Den exei epilegei oxhma gia auth th fwtia!"<<endl;
                                                                      
                                                                       cout<<"To id ths fwtias:"<<f[i].getID()<<endl;
                                                                       found=true;
                                                                       }
                                                      }
                                if (found==false) cout<<"Nothing found!"<<endl;     
                         }//else                         
                                          
       break;
        default:                
		cout<<choice<<" is not a possible choice.. Please try again"<<endl;
		break;
		
		           
                                                                                          
  
		           
   }//switch1

   
  }//while
  
cout<<"Fwties pantou!"<<endl;
system("pause");
    return 0;
}

void print_info(Oxhma *v )
{
     cout<<"Hlikia: "<<v->gethlikia()<<endl;
     cout<<"Taxuthta: "<<v->get_taxuthta()<<endl;
     cout<<"Ruthmos katanalwshs nerou: "<<v->get_ruthmos_kat_nerou()<<endl;
     cout<<"Ruthmos katanalwshs kausimwn: "<<v->get_ruthmos_kat_kaus()<<endl;
     cout<<"Xwrithkothta nerou: "<<v->get_xwrhtikot_nerou() <<endl;
     cout<<"Kausima: "<<v->get_kausima()<<endl;
     cout<<"Blavh: "<<v->get_vlavh()<<endl;
     cout<<"Leitourgia: ";
     if(v->get_energo()==true) cout<<"Energo"<<endl;
     else cout<<"Brisketai sto kentro"<<endl;
     cout<<"Blavh kinhthra: "<<v->get_vlavh_kinhthra()<<endl;
}
