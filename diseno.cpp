#include "func_Decord.h"
#include <iostream>
#include <conio.h>
using namespace std;
class diseno{
    private:
    int x;
    int y;
    int x1;
    int y1;
    public:
        diseno(int,int,int,int);
        void recta(int);
        void Portada();
};
diseno::diseno(int _x,int _y,int _x1,int _y1)
{
    x=_x;
    y=_y;
    x1=_x1;
    y1=_y1;
}
void diseno::Portada()
{
    cout<<"UNJBG";
    SetColor(5);
    //S
    for(int i=0;i<12;i++)
    {
      for(int j=0;j<21;j++)
      {
          //-
            if(i<2)
            {
                gotoxy(x+j,y+i);cout<<char (219);
            }
            //|
            if(i<5&&j<5)
            {
               gotoxy(x+j,y+i);cout<<char (219);
            }
            //-
            if(i>4&&i<7)
            {
               gotoxy(x+j,y+i);cout<<char (219);
            }
            //|
            if(i>6&&j>15)
            {
                gotoxy(x+j,y+i);cout<<char (219);
            }
            //-
            if(i>9)
            {
                gotoxy(x+j,y+i);cout<<char (219);
            }
      }
    }
    x+=21+8;
    //T
    for(int i=0;i<12;i++)
    {
      for(int j=0;j<21;j++)
      {
          if(i<2)
          {
                gotoxy(x+j,y+i);cout<<char (219);
          }
          if(j<13&&7<j)
          {
                gotoxy(x+j,y+i);cout<<char (219);
          }
      }
    }
    x+=21+8;
    //O
    for(int i=0;i<12;i++)
    {
      for(int j=0;j<21;j++)
      {
          if((i<2)||(i>9&&i<12))
          {
              gotoxy(x+j,y+i);cout<<char (219);
          }
          if((j<4)||(j>16&&j<21))
          {
              gotoxy(x+j,y+i);cout<<char (219);
          }
      }
    }
    x+=21+8;
    int d=1,r=0,l=0;
    //R
    for(int i=0;i<12;i++)
    {
        for(int j=0;j<21;j++)
        {
            if(i<2&&(j<21-d))
            {
                gotoxy(x+j,y+i);cout<<char (219);
            }
            if(j<4)
            {
                gotoxy(x+j,y+i);cout<<char (219);
            }
            if((1<i&&i<3)&&(j<21&&16<j))
            {
                gotoxy(x+j,y+i);cout<<char (219);
            }
            if((i>2&&i<7)&&(j-r<21-r&&j-r>15-r))
            {
                gotoxy(x+j-r*2,y+i);cout<<char (219);
            }
            if((i>4&&i<7)&&(j<14))
            {
                gotoxy(x+j,y+i);cout<<char (219);
            }
            if((i>6)&&(j>12+l&&j<17+l))
            {
                 gotoxy(x+j,y+i);cout<<char (219);
            }
        }
        d--;
        if(i>2&&i<7)
        {
            r++;
        }
        if(i>6)
        {
            l++;
        }
    }
    x+=21+8;
    //E
    for(int i=0;i<12;i++)
    {
        for(int j=0;j<21;j++)
        {
            if(i<2)
            {
                gotoxy(x+j,y+i);cout<<char (219);
            }
            if(i>4&&i<7)
            {
                gotoxy(x+j,y+i);cout<<char (219);
            }
            if(i>9)
            {
                gotoxy(x+j,y+i);cout<<char (219);
            }
            if(4>j)
            {
                gotoxy(x+j,y+i);cout<<char (219);
            }
        }
    }
    //T
    for(int i=0;i<12;i++)
    {
      for(int j=0;j<21;j++)
      {
          if(i<2)
          {
                gotoxy(x1+j,y1+i);cout<<char (219);
          }
          if(j<13&&7<j)
          {
                gotoxy(x1+j,y1+i);cout<<char (219);
          }
      }
    }
    //.
    for(int i=0;i<2;i++)
    {
      for(int j=0;j<4;j++)
      {
          gotoxy(x1+17+j,y1+10+i);cout<<char (219);
      }
    }
    x1+=21+8;
    //A
    for(int i=0;i<12;i++)
    {
      for(int j=0;j<21;j++)
      {
            if(i<2)
            {
                gotoxy(x1+j,y1+i);cout<<char (219);
            }
            if(j<4||j>16)
            {
                gotoxy(x1+j,y1+i);cout<<char (219);
            }
            if(i<7&&i>4)
            {
                gotoxy(x1+j,y1+i);cout<<char (219);
            }
      }
    }
    for(int i=0;i<2;i++)
    {
      for(int j=0;j<4;j++)
      {
          gotoxy(x1+22+j,y1+10+i);cout<<char (219);
      }
    }
    x1+=21+8;
    //E
    for(int i=0;i<12;i++)
    {
        for(int j=0;j<21;j++)
        {
            if(i<2)
            {
                gotoxy(x1+j,y1+i);cout<<char (219);
            }
            if(i>4&&i<7)
            {
                gotoxy(x1+j,y1+i);cout<<char (219);
            }
            if(i>9)
            {
                gotoxy(x1+j,y1+i);cout<<char (219);
            }
            if(4>j)
            {
                gotoxy(x1+j,y1+i);cout<<char (219);
            }
        }
    }
    for(int i=0;i<2;i++)
    {
      for(int j=0;j<4;j++)
      {
          gotoxy(x1+22+j,y1+10+i);cout<<char (219);
      }
    }
    //D
    x1+=21+8;
    int f=0,m=0,p=0;

    for(int i=0;i<12;i++)
    {
        for(int j=0;j<21;j++)
        {
            if(j<4)
            {
                gotoxy(x1+j,y1+i);cout<<char (219);
            }
            if((i>2&&i<10)&&(j>12&&j<18))
            {
                gotoxy(x1+j,y1+i);cout<<char (219);
            }
            if((j>1+f&&j<11+f)&&(i<4))
            {
                gotoxy(x1+j+f,y1+i);cout<<char (219);
            }
            if((j>10-p&&j<17-p)&&(i>6))
            {
                gotoxy(x1+j-p,y1+i);cout<<char (219);
            }
            if(i>10&&(j<8&&j>1))
            {
                gotoxy(x1+j,y1+i);cout<<char (219);
            }
        }
        f++;
        if(i>8)
        {
            p++;
        }
    }
    x1+=46;
    recta(x1);
    SetColor(2);
    int dir=x+35;
    gotoxy(dir,y+11);cout<<"Usuario:";
    gotoxy(dir,y1);cout<<"Contrase"<<char (164)<<"a:";
    gotoxy(dir+15,y1+3);cout<<"Enter";
}
void diseno::recta(int _X)
{
    SetColor(4);
    for (int i=0;i<2;i++)
    {
        for(int j=0;j<52;j++)
        {
            gotoxy(i+_X,j);cout<<char (219);
        }
    }
}
void indicador(int x,int y)
{
    SetColor(1);
    gotoxy(x,y);cout<<"O";
}
void vacio(int x,int y)
{
    gotoxy(x,y);cout<<" ";
}
int main()
{
	getch();
	diseno A(13,5,20,22);
	A.Portada();
}
