#ifndef OBJECT_H
#define OBJECT_H
using namespace std;

class Object
{
   
   public:
           Object(int ,int ,int );
           void setx(int);
           int getx() const;
           void sety(int);
           int gety() const;
           int  getID() const;
           void setID(int);
   private :  
         int x;
         int y;
         int ID;
};                
      
#endif
