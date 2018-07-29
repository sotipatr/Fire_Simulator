#include<iostream>
#include "Object.h"

Object::Object(int k, int l, int m)
{
                   x=k;
                   y=l;
                   ID=m;
                   }
void Object::setx(int i)
{
     x=i;
     }
     

int Object::getx() const
{
    return x;
}

void Object::sety(int i)
{
     y=i;
}
          
int Object::gety() const
{
    return y;
}

int Object::getID() const
{
       return ID;
}

void Object::setID(int m)
{
     ID=m;
}
