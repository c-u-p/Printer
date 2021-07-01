//============================================================================
// Name        : realphabet.cpp
// Author      : CUP
// Version     : 1.0.0
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
#include <vector>

using namespace std;

void realphabet(vector<char>, int, int);

int flag = 0;
int sj;
int ej;
int fsj = 0;
int i = 1;
int j = 0;

int main()
{
    string inp;
    vector<char> v;

    int k;
    int stv;
    int sv;

    while(getline(cin, inp))
    {
        if (inp.empty())
        {
            break;
        }
        k = 0;
        while(inp[k] != '\0')
        {
            v.push_back(inp[k]);
            k++;
        }
        v.push_back('\n');
    }
    stv = 0;
    sv = v.size();
    realphabet(v,stv,sv);

    return 0;
}

void realphabet(vector<char> ip, int st, int trav)
{
    for(; i <= 10; i++)
    {
        j = st;
        while(j < trav)
        {
            if(ip[j] == 'a')
            {
                switch(i)
                {
                    case 1:
                    cout<<"       ";
                    break;

                    case 2:
                    cout<<"       ";
                    break;

                    case 3:
                    cout<<"       ";
                    break;

                    case 4:
                    cout<<" a a a ";
                    break;

                    case 5:
                    cout<<"a    a ";
                    break;

                    case 6:
                    cout<<"a    a ";
                    break;

                    case 7:
                    cout<<" a a  a";
                    break;

                    case 8:
                    cout<<"       ";
                    break;

                    case 9:
                    cout<<"       ";
                    break;

                    case 10:
                    cout<<"       ";
                    break;
                }
            }
            else if(ip[j] == 'b')
            {
                switch(i)
                {
                    case 1:
                    cout<<"b      ";
                    break;

                    case 2:
                    cout<<"b      ";
                    break;

                    case 3:
                    cout<<"b      ";
                    break;

                    case 4:
                    cout<<"b  b   ";
                    break;

                    case 5:
                    cout<<"b    b ";
                    break;

                    case 6:
                    cout<<"b    b ";
                    break;

                    case 7:
                    cout<<" b b   ";
                    break;

                    case 8:
                    cout<<"       ";
                    break;

                    case 9:
                    cout<<"       ";
                    break;

                    case 10:
                    cout<<"       ";
                    break;
                }

            }
            else if(ip[j] == 'c')
            {
                switch(i)
                {
                    case 1:
                    cout<<"       ";
                    break;

                    case 2:
                    cout<<"       ";
                    break;

                    case 3:
                    cout<<"       ";
                    break;

                    case 4:
                    cout<<"ccccc  ";
                    break;

                    case 5:
                    cout<<"c      ";
                    break;

                    case 6:
                    cout<<"c      ";
                    break;

                    case 7:
                    cout<<"ccccc  ";
                    break;

                    case 8:
                    cout<<"       ";
                    break;

                    case 9:
                    cout<<"       ";
                    break;

                    case 10:
                    cout<<"       ";
                    break;
                }

            }
            else if(ip[j] == 'd')
            {
                switch(i)
                {
                    case 1:
                    cout<<"     d ";
                    break;

                    case 2:
                    cout<<"     d ";
                    break;

                    case 3:
                    cout<<"     d ";
                    break;

                    case 4:
                    cout<<"  d  d ";
                    break;

                    case 5:
                    cout<<"d    d ";
                    break;

                    case 6:
                    cout<<"d    d ";
                    break;

                    case 7:
                    cout<<" d d d ";
                    break;

                    case 8:
                    cout<<"       ";
                    break;

                    case 9:
                    cout<<"       ";
                    break;

                    case 10:
                    cout<<"       ";
                    break;
                }

            }
            else if(ip[j] == 'e')
            {
                switch(i)
                {
                    case 1:
                    cout<<"       ";
                    break;

                    case 2:
                    cout<<"       ";
                    break;

                    case 3:
                    cout<<"  e e  ";
                    break;

                    case 4:
                    cout<<"e     e";
                    break;

                    case 5:
                    cout<<"e e e e";
                    break;

                    case 6:
                    cout<<"e      ";
                    break;

                    case 7:
                    cout<<" e e e ";
                    break;

                    case 8:
                    cout<<"       ";
                    break;

                    case 9:
                    cout<<"       ";
                    break;

                    case 10:
                    cout<<"       ";
                    break;
                }

            }
            else if(ip[j] == 'f')
            {
                switch(i)
                {
                    case 1:
                    cout<<"   fff ";
                    break;

                    case 2:
                    cout<<"  f    ";
                    break;

                    case 3:
                    cout<<"  f    ";
                    break;

                    case 4:
                    cout<<"fffff  ";
                    break;

                    case 5:
                    cout<<"  f    ";
                    break;

                    case 6:
                    cout<<"  f    ";
                    break;

                    case 7:
                    cout<<"  f    ";
                    break;

                    case 8:
                    cout<<"       ";
                    break;

                    case 9:
                    cout<<"       ";
                    break;

                    case 10:
                    cout<<"       ";
                    break;
                }
            }
            else if(ip[j] == 'g')
            {
                switch(i)
                {
                    case 1:
                    cout<<" g g g ";
                    break;

                    case 2:
                    cout<<"g   g  ";
                    break;

                    case 3:
                    cout<<" g g   ";
                    break;

                    case 4:
                    cout<<" g     ";
                    break;

                    case 5:
                    cout<<" g g g ";
                    break;

                    case 6:
                    cout<<"g     g";
                    break;

                    case 7:
                    cout<<" g g g ";
                    break;

                    case 8:
                    cout<<"       ";
                    break;

                    case 9:
                    cout<<"       ";
                    break;

                    case 10:
                    cout<<"       ";
                    break;
                }
            }
            else if(ip[j] == 'h')
            {
                switch(i)
                {
                    case 1:
                    cout<<"h      ";
                    break;

                    case 2:
                    cout<<"h      ";
                    break;

                    case 3:
                    cout<<"h      ";
                    break;

                    case 4:
                    cout<<"h      ";
                    break;

                    case 5:
                    cout<<"h h  h ";
                    break;

                    case 6:
                    cout<<"h     h";
                    break;

                    case 7:
                    cout<<"h     h";
                    break;

                    case 8:
                    cout<<"       ";
                    break;

                    case 9:
                    cout<<"       ";
                    break;

                    case 10:
                    cout<<"       ";
                    break;
                }
            }
            else if(ip[j] == 'i')
            {
                switch(i)
                {
                    case 1:
                    cout<<"   i   ";
                    break;

                    case 2:
                    cout<<"       ";
                    break;

                    case 3:
                    cout<<"   i   ";
                    break;

                    case 4:
                    cout<<"   i   ";
                    break;

                    case 5:
                    cout<<"   i   ";
                    break;

                    case 6:
                    cout<<"   i   ";
                    break;

                    case 7:
                    cout<<"       ";
                    break;

                    case 8:
                    cout<<"       ";
                    break;

                    case 9:
                    cout<<"       ";
                    break;

                    case 10:
                    cout<<"       ";
                    break;
                }
            }
            else if(ip[j] == 'j')
            {
                switch(i)
                {
                    case 1:
                    cout<<"   j   ";
                    break;

                    case 2:
                    cout<<"       ";
                    break;

                    case 3:
                    cout<<"   j   ";
                    break;

                    case 4:
                    cout<<"   j   ";
                    break;

                    case 5:
                    cout<<"   j   ";
                    break;

                    case 6:
                    cout<<"j  j   ";
                    break;

                    case 7:
                    cout<<" jj    ";
                    break;

                    case 8:
                    cout<<"       ";
                    break;

                    case 9:
                    cout<<"       ";
                    break;

                    case 10:
                    cout<<"       ";
                    break;
                }
            }
            else if(ip[j] == 'k')
            {
                switch(i)
                {
                    case 1:
                    cout<<"k      ";
                    break;

                    case 2:
                    cout<<"k      ";
                    break;

                    case 3:
                    cout<<"k      ";
                    break;

                    case 4:
                    cout<<"k   k  ";
                    break;

                    case 5:
                    cout<<"k k    ";
                    break;

                    case 6:
                    cout<<"k k    ";
                    break;

                    case 7:
                    cout<<"k   k  ";
                    break;

                    case 8:
                    cout<<"       ";
                    break;

                    case 9:
                    cout<<"       ";
                    break;

                    case 10:
                    cout<<"       ";
                    break;
                }
            }
            else if(ip[j] == 'l')
            {
                switch(i)
                {
                    case 1:
                    cout<<"   l   ";
                    break;

                    case 2:
                    cout<<"   l   ";
                    break;

                    case 3:
                    cout<<"   l   ";
                    break;

                    case 4:
                    cout<<"   l   ";
                    break;

                    case 5:
                    cout<<"   l   ";
                    break;

                    case 6:
                    cout<<"   l   ";
                    break;

                    case 7:
                    cout<<"   l   ";
                    break;

                    case 8:
                    cout<<"       ";
                    break;

                    case 9:
                    cout<<"       ";
                    break;

                    case 10:
                    cout<<"       ";
                    break;
                }
            }
            else if(ip[j] == 'm')
            {
                switch(i)
                {
                    case 1:
                    cout<<"       ";
                    break;

                    case 2:
                    cout<<"       ";
                    break;

                    case 3:
                    cout<<"       ";
                    break;

                    case 4:
                    cout<<" mm mm ";
                    break;

                    case 5:
                    cout<<"m  m  m";
                    break;

                    case 6:
                    cout<<"m     m";
                    break;

                    case 7:
                    cout<<"m     m";
                    break;

                    case 8:
                    cout<<"       ";
                    break;

                    case 9:
                    cout<<"       ";
                    break;

                    case 10:
                    cout<<"       ";
                    break;
                }
            }
            else if(ip[j] == 'n')
            {
                switch(i)
                {
                    case 1:
                    cout<<"       ";
                    break;

                    case 2:
                    cout<<"       ";
                    break;

                    case 3:
                    cout<<"       ";
                    break;

                    case 4:
                    cout<<"nn n n ";
                    break;

                    case 5:
                    cout<<"n     n";
                    break;

                    case 6:
                    cout<<"n     n";
                    break;

                    case 7:
                    cout<<"n     n";
                    break;

                    case 8:
                    cout<<"       ";
                    break;

                    case 9:
                    cout<<"       ";
                    break;

                    case 10:
                    cout<<"       ";
                    break;
                }
            }
            else if(ip[j] == 'o')
            {
                switch(i)
                {
                    case 1:
                    cout<<"       ";
                    break;

                    case 2:
                    cout<<"       ";
                    break;

                    case 3:
                    cout<<"       ";
                    break;

                    case 4:
                    cout<<"  o o  ";
                    break;

                    case 5:
                    cout<<"o     o";
                    break;

                    case 6:
                    cout<<"o     o";
                    break;

                    case 7:
                    cout<<"  o o  ";
                    break;

                    case 8:
                    cout<<"       ";
                    break;

                    case 9:
                    cout<<"       ";
                    break;

                    case 10:
                    cout<<"       ";
                    break;
                }
            }
            else if(ip[j] == 'p')
            {
                switch(i)
                {
                    case 1:
                    cout<<"       ";
                    break;

                    case 2:
                    cout<<"       ";
                    break;

                    case 3:
                    cout<<"       ";
                    break;

                    case 4:
                    cout<<"p p p  ";
                    break;

                    case 5:
                    cout<<"p     p";
                    break;

                    case 6:
                    cout<<"p     p";
                    break;

                    case 7:
                    cout<<"p p p  ";
                    break;

                    case 8:
                    cout<<"p      ";
                    break;

                    case 9:
                    cout<<"p      ";
                    break;

                    case 10:
                    cout<<"p      ";
                    break;
                }
            }
            else if(ip[j] == 'q')
            {
                switch(i)
                {
                    case 1:
                    cout<<"       ";
                    break;

                    case 2:
                    cout<<"       ";
                    break;

                    case 3:
                    cout<<"       ";
                    break;

                    case 4:
                    cout<<"  q q q";
                    break;

                    case 5:
                    cout<<"q     q";
                    break;

                    case 6:
                    cout<<"q     q";
                    break;

                    case 7:
                    cout<<"  q q q";
                    break;

                    case 8:
                    cout<<"      q";
                    break;

                    case 9:
                    cout<<"      q";
                    break;

                    case 10:
                    cout<<"      q";
                    break;
                }
            }
            else if(ip[j] == 'r')
            {
                switch(i)
                {
                    case 1:
                    cout<<"       ";
                    break;

                    case 2:
                    cout<<"       ";
                    break;

                    case 3:
                    cout<<"       ";
                    break;

                    case 4:
                    cout<<"r rrr  ";
                    break;

                    case 5:
                    cout<<"r    r ";
                    break;

                    case 6:
                    cout<<"r      ";
                    break;

                    case 7:
                    cout<<"r      ";
                    break;

                    case 8:
                    cout<<"       ";
                    break;

                    case 9:
                    cout<<"       ";
                    break;

                    case 10:
                    cout<<"       ";
                    break;
                }
            }
            else if(ip[j] == 's')
            {
                switch(i)
                {
                    case 1:
                    cout<<"       ";
                    break;

                    case 2:
                    cout<<"       ";
                    break;

                    case 3:
                    cout<<"  s s s";
                    break;

                    case 4:
                    cout<<"s      ";
                    break;

                    case 5:
                    cout<<"  s s  ";
                    break;

                    case 6:
                    cout<<"      s";
                    break;

                    case 7:
                    cout<<"s s s  ";
                    break;

                    case 8:
                    cout<<"       ";
                    break;

                    case 9:
                    cout<<"       ";
                    break;

                    case 10:
                    cout<<"       ";
                    break;
                }
            }
            else if(ip[j] == 't')
            {
                switch(i)
                {
                    case 1:
                    cout<<"  t    ";
                    break;

                    case 2:
                    cout<<"  t    ";
                    break;

                    case 3:
                    cout<<"t t t t";
                    break;

                    case 4:
                    cout<<"  t    ";
                    break;

                    case 5:
                    cout<<"  t    ";
                    break;

                    case 6:
                    cout<<"  t   t";
                    break;

                    case 7:
                    cout<<"  t t  ";
                    break;

                    case 8:
                    cout<<"       ";
                    break;

                    case 9:
                    cout<<"       ";
                    break;

                    case 10:
                    cout<<"       ";
                    break;
                }
            }
            else if(ip[j] == 'u')
            {
                switch(i)
                {
                    case 1:
                    cout<<"       ";
                    break;

                    case 2:
                    cout<<"       ";
                    break;

                    case 3:
                    cout<<"       ";
                    break;

                    case 4:
                    cout<<"u    u ";
                    break;

                    case 5:
                    cout<<"u    u ";
                    break;

                    case 6:
                    cout<<"u    u ";
                    break;

                    case 7:
                    cout<<" u u  u";
                    break;

                    case 8:
                    cout<<"       ";
                    break;

                    case 9:
                    cout<<"       ";
                    break;

                    case 10:
                    cout<<"       ";
                    break;
                }
            }
            else if(ip[j] == 'v')
            {
                switch(i)
                {
                    case 1:
                    cout<<"       ";
                    break;

                    case 2:
                    cout<<"       ";
                    break;

                    case 3:
                    cout<<"       ";
                    break;

                    case 4:
                    cout<<"v     v";
                    break;

                    case 5:
                    cout<<"v     v";
                    break;

                    case 6:
                    cout<<" v   v ";
                    break;

                    case 7:
                    cout<<"   v   ";
                    break;

                    case 8:
                    cout<<"       ";
                    break;

                    case 9:
                    cout<<"       ";
                    break;

                    case 10:
                    cout<<"       ";
                    break;
                }
            }
            else if(ip[j] == 'w')
            {
                switch(i)
                {
                    case 1:
                    cout<<"       ";
                    break;

                    case 2:
                    cout<<"       ";
                    break;

                    case 3:
                    cout<<"       ";
                    break;

                    case 4:
                    cout<<"w     w";
                    break;

                    case 5:
                    cout<<"w  w  w";
                    break;

                    case 6:
                    cout<<"w w w w";
                    break;

                    case 7:
                    cout<<" w   w ";
                    break;

                    case 8:
                    cout<<"       ";
                    break;

                    case 9:
                    cout<<"       ";
                    break;

                    case 10:
                    cout<<"       ";
                    break;
                }
            }
            else if(ip[j] == 'x')
            {
                switch(i)
                {
                    case 1:
                    cout<<"       ";
                    break;

                    case 2:
                    cout<<"       ";
                    break;

                    case 3:
                    cout<<"       ";
                    break;

                    case 4:
                    cout<<"x     x";
                    break;

                    case 5:
                    cout<<"  x x  ";
                    break;

                    case 6:
                    cout<<"  x x  ";
                    break;

                    case 7:
                    cout<<"x     x";
                    break;

                    case 8:
                    cout<<"       ";
                    break;

                    case 9:
                    cout<<"       ";
                    break;

                    case 10:
                    cout<<"       ";
                    break;
                }
            }
            else if(ip[j] == 'y')
            {
                switch(i)
                {
                    case 1:
                    cout<<"       ";
                    break;

                    case 2:
                    cout<<"       ";
                    break;

                    case 3:
                    cout<<"       ";
                    break;

                    case 4:
                    cout<<"       ";
                    break;

                    case 5:
                    cout<<"       ";
                    break;

                    case 6:
                    cout<<"y     y";
                    break;

                    case 7:
                    cout<<" y   y ";
                    break;

                    case 8:
                    cout<<"   y   ";
                    break;

                    case 9:
                    cout<<"  y    ";
                    break;

                    case 10:
                    cout<<"yy     ";
                    break;
                }
            }
            else if(ip[j] == 'z')
            {
                switch(i)
                {
                    case 1:
                    cout<<"       ";
                    break;

                    case 2:
                    cout<<"       ";
                    break;

                    case 3:
                    cout<<"       ";
                    break;

                    case 4:
                    cout<<"z z z z";
                    break;

                    case 5:
                    cout<<"    z  ";
                    break;

                    case 6:
                    cout<<"  z    ";
                    break;

                    case 7:
                    cout<<"z z z z";
                    break;

                    case 8:
                    cout<<"       ";
                    break;

                    case 9:
                    cout<<"       ";
                    break;

                    case 10:
                    cout<<"       ";
                    break;
                }
            }
			if(ip[j] == 'A')
            {
                switch(i)
                {
                    case 1:
                    cout<<"   A   ";
                    break;

                    case 2:
                    cout<<"  A A  ";
                    break;

                    case 3:
                    cout<<"  A A  ";
                    break;

                    case 4:
                    cout<<" A   A ";
                    break;

                    case 5:
                    cout<<" A A A ";
                    break;

                    case 6:
                    cout<<"A     A";
                    break;

                    case 7:
                    cout<<"A     A";
                    break;

                    case 8:
                    cout<<"       ";
                    break;

                    case 9:
                    cout<<"       ";
                    break;

                    case 10:
                    cout<<"       ";
                    break;
                }
            }
            else if(ip[j] == 'B')
            {
                switch(i)
                {
                    case 1:
                    cout<<"B B B  ";
                    break;

                    case 2:
                    cout<<"B     B";
                    break;

                    case 3:
                    cout<<"B B B  ";
                    break;

                    case 4:
                    cout<<"B     B";
                    break;

                    case 5:
                    cout<<"B     B";
                    break;

                    case 6:
                    cout<<"B     B";
                    break;

                    case 7:
                    cout<<"B B B  ";
                    break;

                    case 8:
                    cout<<"       ";
                    break;

                    case 9:
                    cout<<"       ";
                    break;

                    case 10:
                    cout<<"       ";
                    break;
                }

            }
            else if(ip[j] == 'C')
            {
                switch(i)
                {
                    case 1:
                    cout<<"    C C";
                    break;

                    case 2:
                    cout<<"  C    ";
                    break;

                    case 3:
                    cout<<"C      ";
                    break;

                    case 4:
                    cout<<"C      ";
                    break;

                    case 5:
                    cout<<"C      ";
                    break;

                    case 6:
                    cout<<"  C    ";
                    break;

                    case 7:
                    cout<<"    C C";
                    break;

                    case 8:
                    cout<<"       ";
                    break;

                    case 9:
                    cout<<"       ";
                    break;

                    case 10:
                    cout<<"       ";
                    break;
                }

            }
            else if(ip[j] == 'D')
            {
                switch(i)
                {
                    case 1:
                    cout<<"D D D  ";
                    break;

                    case 2:
                    cout<<"D    D ";
                    break;

                    case 3:
                    cout<<"D     D";
                    break;

                    case 4:
                    cout<<"D     D";
                    break;

                    case 5:
                    cout<<"D     D";
                    break;

                    case 6:
                    cout<<"D    D ";
                    break;

                    case 7:
                    cout<<"D D D  ";
                    break;

                    case 8:
                    cout<<"       ";
                    break;

                    case 9:
                    cout<<"       ";
                    break;

                    case 10:
                    cout<<"       ";
                    break;
                }

            }
            else if(ip[j] == 'E')
            {
                switch(i)
                {
                    case 1:
                    cout<<"E E E E";
                    break;

                    case 2:
                    cout<<"E      ";
                    break;

                    case 3:
                    cout<<"E      ";
                    break;

                    case 4:
                    cout<<"E E E  ";
                    break;

                    case 5:
                    cout<<"E      ";
                    break;

                    case 6:
                    cout<<"E      ";
                    break;

                    case 7:
                    cout<<"E E E E";
                    break;

                    case 8:
                    cout<<"       ";
                    break;

                    case 9:
                    cout<<"       ";
                    break;

                    case 10:
                    cout<<"       ";
                    break;
                }

            }
            else if(ip[j] == 'F')
            {
                switch(i)
                {
                    case 1:
                    cout<<"F F F F";
                    break;

                    case 2:
                    cout<<"F      ";
                    break;

                    case 3:
                    cout<<"F      ";
                    break;

                    case 4:
                    cout<<"F F F  ";
                    break;

                    case 5:
                    cout<<"F      ";
                    break;

                    case 6:
                    cout<<"F      ";
                    break;

                    case 7:
                    cout<<"F      ";
                    break;

                    case 8:
                    cout<<"       ";
                    break;

                    case 9:
                    cout<<"       ";
                    break;

                    case 10:
                    cout<<"       ";
                    break;
                }
            }
            else if(ip[j] == 'G')
            {
                switch(i)
                {
                    case 1:
                    cout<<"    G G";
                    break;

                    case 2:
                    cout<<"  G    ";
                    break;

                    case 3:
                    cout<<"G      ";
                    break;

                    case 4:
                    cout<<"G   G G";
                    break;

                    case 5:
                    cout<<"G     G";
                    break;

                    case 6:
                    cout<<" G   G ";
                    break;

                    case 7:
                    cout<<"  G G  ";
                    break;

                    case 8:
                    cout<<"       ";
                    break;

                    case 9:
                    cout<<"       ";
                    break;

                    case 10:
                    cout<<"       ";
                    break;
                }
            }
            else if(ip[j] == 'H')
            {
                switch(i)
                {
                    case 1:
                    cout<<"H     H";
                    break;

                    case 2:
                    cout<<"H     H";
                    break;

                    case 3:
                    cout<<"H     H";
                    break;

                    case 4:
                    cout<<"H H H H";
                    break;

                    case 5:
                    cout<<"H     H";
                    break;

                    case 6:
                    cout<<"H     H";
                    break;

                    case 7:
                    cout<<"H     H";
                    break;

                    case 8:
                    cout<<"       ";
                    break;

                    case 9:
                    cout<<"       ";
                    break;

                    case 10:
                    cout<<"       ";
                    break;
                }
            }
            else if(ip[j] == 'I')
            {
                switch(i)
                {
                    case 1:
                    cout<<"I I I I";
                    break;

                    case 2:
                    cout<<"   I   ";
                    break;

                    case 3:
                    cout<<"   I   ";
                    break;

                    case 4:
                    cout<<"   I   ";
                    break;

                    case 5:
                    cout<<"   I   ";
                    break;

                    case 6:
                    cout<<"   I   ";
                    break;

                    case 7:
                    cout<<"I I I I";
                    break;

                    case 8:
                    cout<<"       ";
                    break;

                    case 9:
                    cout<<"       ";
                    break;

                    case 10:
                    cout<<"       ";
                    break;
                }
            }
            else if(ip[j] == 'J')
            {
                switch(i)
                {
                    case 1:
                    cout<<"J J J J";
                    break;

                    case 2:
                    cout<<"   J   ";
                    break;

                    case 3:
                    cout<<"   J   ";
                    break;

                    case 4:
                    cout<<"   J   ";
                    break;

                    case 5:
                    cout<<"   J   ";
                    break;

                    case 6:
                    cout<<"J  J   ";
                    break;

                    case 7:
                    cout<<" JJ    ";
                    break;

                    case 8:
                    cout<<"       ";
                    break;

                    case 9:
                    cout<<"       ";
                    break;

                    case 10:
                    cout<<"       ";
                    break;
                }
            }
            else if(ip[j] == 'K')
            {
                switch(i)
                {
                    case 1:
                    cout<<"K     K";
                    break;

                    case 2:
                    cout<<"K   K  ";
                    break;

                    case 3:
                    cout<<"K K    ";
                    break;

                    case 4:
                    cout<<"K      ";
                    break;

                    case 5:
                    cout<<"K K    ";
                    break;

                    case 6:
                    cout<<"K   K  ";
                    break;

                    case 7:
                    cout<<"K     K";
                    break;

                    case 8:
                    cout<<"       ";
                    break;

                    case 9:
                    cout<<"       ";
                    break;

                    case 10:
                    cout<<"       ";
                    break;
                }
            }
            else if(ip[j] == 'L')
            {
                switch(i)
                {
                    case 1:
                    cout<<"L      ";
                    break;

                    case 2:
                    cout<<"L      ";
                    break;

                    case 3:
                    cout<<"L      ";
                    break;

                    case 4:
                    cout<<"L      ";
                    break;

                    case 5:
                    cout<<"L      ";
                    break;

                    case 6:
                    cout<<"L      ";
                    break;

                    case 7:
                    cout<<"L L L L";
                    break;

                    case 8:
                    cout<<"       ";
                    break;

                    case 9:
                    cout<<"       ";
                    break;

                    case 10:
                    cout<<"       ";
                    break;
                }
            }
            else if(ip[j] == 'M')
            {
                switch(i)
                {
                    case 1:
                    cout<<"M     M";
                    break;

                    case 2:
                    cout<<"MM   MM";
                    break;

                    case 3:
                    cout<<"M M M M";
                    break;

                    case 4:
                    cout<<"M  M  M";
                    break;

                    case 5:
                    cout<<"M     M";
                    break;

                    case 6:
                    cout<<"M     M";
                    break;

                    case 7:
                    cout<<"M     M";
                    break;

                    case 8:
                    cout<<"       ";
                    break;

                    case 9:
                    cout<<"       ";
                    break;

                    case 10:
                    cout<<"       ";
                    break;
                }
            }
            else if(ip[j] == 'N')
            {
                switch(i)
                {
                    case 1:
                    cout<<"N     N";
                    break;

                    case 2:
                    cout<<"NN    N";
                    break;

                    case 3:
                    cout<<"N N   N";
                    break;

                    case 4:
                    cout<<"N  N  N";
                    break;

                    case 5:
                    cout<<"N   N N";
                    break;

                    case 6:
                    cout<<"N    NN";
                    break;

                    case 7:
                    cout<<"N     N";
                    break;

                    case 8:
                    cout<<"       ";
                    break;

                    case 9:
                    cout<<"       ";
                    break;

                    case 10:
                    cout<<"       ";
                    break;
                }
            }
            else if(ip[j] == 'O')
            {
                switch(i)
                {
                    case 1:
                    cout<<"  O O  ";
                    break;

                    case 2:
                    cout<<" O   O ";
                    break;

                    case 3:
                    cout<<"O     O";
                    break;

                    case 4:
                    cout<<"O     O";
                    break;

                    case 5:
                    cout<<"O     O";
                    break;

                    case 6:
                    cout<<" O   O ";
                    break;

                    case 7:
                    cout<<"  O O  ";
                    break;

                    case 8:
                    cout<<"       ";
                    break;

                    case 9:
                    cout<<"       ";
                    break;

                    case 10:
                    cout<<"       ";
                    break;
                }
            }
            else if(ip[j] == 'P')
            {
                switch(i)
                {
                    case 1:
                    cout<<"P P P  ";
                    break;

                    case 2:
                    cout<<"P     P";
                    break;

                    case 3:
                    cout<<"P     P";
                    break;

                    case 4:
                    cout<<"P P P  ";
                    break;

                    case 5:
                    cout<<"P      ";
                    break;

                    case 6:
                    cout<<"P      ";
                    break;

                    case 7:
                    cout<<"P      ";
                    break;

                    case 8:
                    cout<<"       ";
                    break;

                    case 9:
                    cout<<"       ";
                    break;

                    case 10:
                    cout<<"       ";
                    break;
                }
            }
            else if(ip[j] == 'Q')
            {
                switch(i)
                {
                    case 1:
                    cout<<"  QQQ  ";
                    break;

                    case 2:
                    cout<<"Q     Q";
                    break;

                    case 3:
                    cout<<"Q     Q";
                    break;

                    case 4:
                    cout<<"Q     Q";
                    break;

                    case 5:
                    cout<<" Q   Q ";
                    break;

                    case 6:
                    cout<<"  QQQ  ";
                    break;

                    case 7:
                    cout<<" Q    Q";
                    break;

                    case 8:
                    cout<<"       ";
                    break;

                    case 9:
                    cout<<"       ";
                    break;

                    case 10:
                    cout<<"       ";
                    break;
                }
            }
            else if(ip[j] == 'R')
            {
                switch(i)
                {
                    case 1:
                    cout<<"R R R  ";
                    break;

                    case 2:
                    cout<<"R     R";
                    break;

                    case 3:
                    cout<<"R R R  ";
                    break;

                    case 4:
                    cout<<"R  R   ";
                    break;

                    case 5:
                    cout<<"R   R  ";
                    break;

                    case 6:
                    cout<<"R    R ";
                    break;

                    case 7:
                    cout<<"R     R";
                    break;

                    case 8:
                    cout<<"       ";
                    break;

                    case 9:
                    cout<<"       ";
                    break;

                    case 10:
                    cout<<"       ";
                    break;
                }
            }
            else if(ip[j] == 'S')
            {
                switch(i)
                {
                    case 1:
                    cout<<"  S S S";
                    break;

                    case 2:
                    cout<<"S      ";
                    break;

                    case 3:
                    cout<<"  S    ";
                    break;

                    case 4:
                    cout<<"   S   ";
                    break;

                    case 5:
                    cout<<"    S  ";
                    break;

                    case 6:
                    cout<<"      S";
                    break;

                    case 7:
                    cout<<"S S S  ";
                    break;

                    case 8:
                    cout<<"       ";
                    break;

                    case 9:
                    cout<<"       ";
                    break;

                    case 10:
                    cout<<"       ";
                    break;
                }
            }
            else if(ip[j] == 'T')
            {
                switch(i)
                {
                    case 1:
                    cout<<"T T T T";
                    break;

                    case 2:
                    cout<<"   T   ";
                    break;

                    case 3:
                    cout<<"   T   ";
                    break;

                    case 4:
                    cout<<"   T   ";
                    break;

                    case 5:
                    cout<<"   T   ";
                    break;

                    case 6:
                    cout<<"   T   ";
                    break;

                    case 7:
                    cout<<"   T   ";
                    break;

                    case 8:
                    cout<<"       ";
                    break;

                    case 9:
                    cout<<"       ";
                    break;

                    case 10:
                    cout<<"       ";
                    break;
                }
            }
            else if(ip[j] == 'U')
            {
                switch(i)
                {
                    case 1:
                    cout<<"U     U";
                    break;

                    case 2:
                    cout<<"U     U";
                    break;

                    case 3:
                    cout<<"U     U";
                    break;

                    case 4:
                    cout<<"U     U";
                    break;

                    case 5:
                    cout<<"U     U";
                    break;

                    case 6:
                    cout<<" U   U ";
                    break;

                    case 7:
                    cout<<"  U U  ";
                    break;

                    case 8:
                    cout<<"       ";
                    break;

                    case 9:
                    cout<<"       ";
                    break;

                    case 10:
                    cout<<"       ";
                    break;
                }
            }
            else if(ip[j] == 'V')
            {
                switch(i)
                {
                    case 1:
                    cout<<"V     V";
                    break;

                    case 2:
                    cout<<"V     V";
                    break;

                    case 3:
                    cout<<" V   V ";
                    break;

                    case 4:
                    cout<<" V   V ";
                    break;

                    case 5:
                    cout<<"  V V  ";
                    break;

                    case 6:
                    cout<<"  V V  ";
                    break;

                    case 7:
                    cout<<"   V   ";
                    break;

                    case 8:
                    cout<<"       ";
                    break;

                    case 9:
                    cout<<"       ";
                    break;

                    case 10:
                    cout<<"       ";
                    break;
                }
            }
            else if(ip[j] == 'W')
            {
                switch(i)
                {
                    case 1:
                    cout<<"W     W";
                    break;

                    case 2:
                    cout<<"W     W";
                    break;

                    case 3:
                    cout<<"W     W";
                    break;

                    case 4:
                    cout<<"W  W  W";
                    break;

                    case 5:
                    cout<<"W W W W";
                    break;

                    case 6:
                    cout<<"W W W W";
                    break;

                    case 7:
                    cout<<" W   W ";
                    break;

                    case 8:
                    cout<<"       ";
                    break;

                    case 9:
                    cout<<"       ";
                    break;

                    case 10:
                    cout<<"       ";
                    break;
                }
            }
            else if(ip[j] == 'X')
            {
                switch(i)
                {
                    case 1:
                    cout<<"X     X";
                    break;

                    case 2:
                    cout<<" X   X ";
                    break;

                    case 3:
                    cout<<"  X X  ";
                    break;

                    case 4:
                    cout<<"   X   ";
                    break;

                    case 5:
                    cout<<"  X X  ";
                    break;

                    case 6:
                    cout<<" X   X ";
                    break;

                    case 7:
                    cout<<"X     X";
                    break;

                    case 8:
                    cout<<"       ";
                    break;

                    case 9:
                    cout<<"       ";
                    break;

                    case 10:
                    cout<<"       ";
                    break;
                }
            }
            else if(ip[j] == 'Y')
            {
                switch(i)
                {
                    case 1:
                    cout<<"Y     Y";
                    break;

                    case 2:
                    cout<<"Y     Y";
                    break;

                    case 3:
                    cout<<" Y   Y ";
                    break;

                    case 4:
                    cout<<"  Y Y  ";
                    break;

                    case 5:
                    cout<<"   Y   ";
                    break;

                    case 6:
                    cout<<"   Y   ";
                    break;

                    case 7:
                    cout<<"   Y   ";
                    break;

                    case 8:
                    cout<<"       ";
                    break;

                    case 9:
                    cout<<"       ";
                    break;

                    case 10:
                    cout<<"       ";
                    break;
                }
            }
            else if(ip[j] == 'Z')
            {
                switch(i)
                {
                    case 1:
                    cout<<"Z Z Z Z";
                    break;

                    case 2:
                    cout<<"     Z ";
                    break;

                    case 3:
                    cout<<"    Z  ";
                    break;

                    case 4:
                    cout<<"   Z   ";
                    break;

                    case 5:
                    cout<<"  Z    ";
                    break;

                    case 6:
                    cout<<" Z     ";
                    break;

                    case 7:
                    cout<<"Z Z Z Z";
                    break;

                    case 8:
                    cout<<"       ";
                    break;

                    case 9:
                    cout<<"       ";
                    break;

                    case 10:
                    cout<<"       ";
                    break;
                }
            }
            else if(ip[j] == ' ')
            {
                switch(i)
                {
                    case 1:
                    cout<<"       ";
                    break;

                    case 2:
                    cout<<"       ";
                    break;

                    case 3:
                    cout<<"       ";
                    break;

                    case 4:
                    cout<<"       ";
                    break;

                    case 5:
                    cout<<"       ";
                    break;

                    case 6:
                    cout<<"       ";
                    break;

                    case 7:
                    cout<<"       ";
                    break;

                    case 8:
                    cout<<"       ";
                    break;

                    case 9:
                    cout<<"       ";
                    break;

                    case 10:
                    cout<<"       ";
                    break;
                }
            }
            else if(ip[j] == '.')
            {
                switch(i)
                {
                    case 1:
                    cout<<" ";
                    break;

                    case 2:
                    cout<<" ";
                    break;

                    case 3:
                    cout<<" ";
                    break;

                    case 4:
                    cout<<" ";
                    break;

                    case 5:
                    cout<<" ";
                    break;

                    case 6:
                    cout<<".";
                    break;

                    case 7:
                    cout<<" ";
                    break;

                    case 8:
                    cout<<" ";
                    break;

                    case 9:
                    cout<<" ";
                    break;

                    case 10:
                    cout<<" ";
                    break;
                }
            }
            else if(ip[j] == '0')
            {
                switch(i)
                {
                    case 1:
                    cout<<"  0 0  ";
                    break;

                    case 2:
                    cout<<" 0   0 ";
                    break;

                    case 3:
                    cout<<"0   0 0";
                    break;

                    case 4:
                    cout<<"0  0  0";
                    break;

                    case 5:
                    cout<<"0 0   0";
                    break;

                    case 6:
                    cout<<" 0   0 ";
                    break;

                    case 7:
                    cout<<"  0 0  ";
                    break;

                    case 8:
                    cout<<"       ";
                    break;

                    case 9:
                    cout<<"       ";
                    break;

                    case 10:
                    cout<<"       ";
                    break;
                }
            }
            else if(ip[j] == '1')
            {
                switch(i)
                {
                    case 1:
                    cout<<"   1   ";
                    break;

                    case 2:
                    cout<<"11 1   ";
                    break;

                    case 3:
                    cout<<"   1   ";
                    break;

                    case 4:
                    cout<<"   1   ";
                    break;

                    case 5:
                    cout<<"   1   ";
                    break;

                    case 6:
                    cout<<"   1   ";
                    break;

                    case 7:
                    cout<<"1 1 1 1";
                    break;

                    case 8:
                    cout<<"       ";
                    break;

                    case 9:
                    cout<<"       ";
                    break;

                    case 10:
                    cout<<"       ";
                    break;
                }
            }
            else if(ip[j] == '2')
            {
                switch(i)
                {
                    case 1:
                    cout<<"  2 2  ";
                    break;

                    case 2:
                    cout<<"2     2";
                    break;

                    case 3:
                    cout<<"    2  ";
                    break;

                    case 4:
                    cout<<"   2   ";
                    break;

                    case 5:
                    cout<<"  2    ";
                    break;

                    case 6:
                    cout<<" 2     ";
                    break;

                    case 7:
                    cout<<"2 2 2 2";
                    break;

                    case 8:
                    cout<<"       ";
                    break;

                    case 9:
                    cout<<"       ";
                    break;

                    case 10:
                    cout<<"       ";
                    break;
                }
            }
            else if(ip[j] == '3')
            {
                switch(i)
                {
                    case 1:
                    cout<<"3 3 3  ";
                    break;

                    case 2:
                    cout<<"      3";
                    break;

                    case 3:
                    cout<<"      3";
                    break;

                    case 4:
                    cout<<"  3 3  ";
                    break;

                    case 5:
                    cout<<"      3";
                    break;

                    case 6:
                    cout<<"      3";
                    break;

                    case 7:
                    cout<<"3 3 3  ";
                    break;

                    case 8:
                    cout<<"       ";
                    break;

                    case 9:
                    cout<<"       ";
                    break;

                    case 10:
                    cout<<"       ";
                    break;
                }
            }
            else if(ip[j] == '4')
            {
                switch(i)
                {
                    case 1:
                    cout<<"    4  ";
                    break;

                    case 2:
                    cout<<"   44  ";
                    break;

                    case 3:
                    cout<<"  4 4  ";
                    break;

                    case 4:
                    cout<<" 4  4  ";
                    break;

                    case 5:
                    cout<<"4   4  ";
                    break;

                    case 6:
                    cout<<"4 4 4 4";
                    break;

                    case 7:
                    cout<<"    4  ";
                    break;

                    case 8:
                    cout<<"       ";
                    break;

                    case 9:
                    cout<<"       ";
                    break;

                    case 10:
                    cout<<"       ";
                    break;
                }
            }
            else if(ip[j] == '5')
            {
                switch(i)
                {
                    case 1:
                    cout<<"5 5 5 5";
                    break;

                    case 2:
                    cout<<"5      ";
                    break;

                    case 3:
                    cout<<"5      ";
                    break;

                    case 4:
                    cout<<"5 5 5  ";
                    break;

                    case 5:
                    cout<<"      5";
                    break;

                    case 6:
                    cout<<"      5";
                    break;

                    case 7:
                    cout<<"5 5 5  ";
                    break;

                    case 8:
                    cout<<"       ";
                    break;

                    case 9:
                    cout<<"       ";
                    break;

                    case 10:
                    cout<<"       ";
                    break;
                }
            }
            else if(ip[j] == '6')
            {
                switch(i)
                {
                    case 1:
                    cout<<"    6 6";
                    break;

                    case 2:
                    cout<<"  6    ";
                    break;

                    case 3:
                    cout<<"6      ";
                    break;

                    case 4:
                    cout<<"6 6 6  ";
                    break;

                    case 5:
                    cout<<"6     6";
                    break;

                    case 6:
                    cout<<"6     6";
                    break;

                    case 7:
                    cout<<"  6 6  ";
                    break;

                    case 8:
                    cout<<"       ";
                    break;

                    case 9:
                    cout<<"       ";
                    break;

                    case 10:
                    cout<<"       ";
                    break;
                }
            }
            else if(ip[j] == '7')
            {
                switch(i)
                {
                    case 1:
                    cout<<"7 7 7 7";
                    break;

                    case 2:
                    cout<<"     7 ";
                    break;

                    case 3:
                    cout<<"    7  ";
                    break;

                    case 4:
                    cout<<"   7   ";
                    break;

                    case 5:
                    cout<<"  7    ";
                    break;

                    case 6:
                    cout<<" 7     ";
                    break;

                    case 7:
                    cout<<"7      ";
                    break;

                    case 8:
                    cout<<"       ";
                    break;

                    case 9:
                    cout<<"       ";
                    break;

                    case 10:
                    cout<<"       ";
                    break;
                }
            }
            else if(ip[j] == '8')
            {
                switch(i)
                {
                    case 1:
                    cout<<"  8 8  ";
                    break;

                    case 2:
                    cout<<"8     8";
                    break;

                    case 3:
                    cout<<"8     8";
                    break;

                    case 4:
                    cout<<"  8 8  ";
                    break;

                    case 5:
                    cout<<"8     8";
                    break;

                    case 6:
                    cout<<"8     8";
                    break;

                    case 7:
                    cout<<"  8 8  ";
                    break;

                    case 8:
                    cout<<"       ";
                    break;

                    case 9:
                    cout<<"       ";
                    break;

                    case 10:
                    cout<<"       ";
                    break;
                }
            }
            else if(ip[j] == '9')
            {
                switch(i)
                {
                    case 1:
                    cout<<"  9 9  ";
                    break;

                    case 2:
                    cout<<"9     9";
                    break;

                    case 3:
                    cout<<"9     9";
                    break;

                    case 4:
                    cout<<"  9 9 9";
                    break;

                    case 5:
                    cout<<"      9";
                    break;

                    case 6:
                    cout<<"      9";
                    break;

                    case 7:
                    cout<<"9 9 9  ";
                    break;

                    case 8:
                    cout<<"       ";
                    break;

                    case 9:
                    cout<<"       ";
                    break;

                    case 10:
                    cout<<"       ";
                    break;
                }
            }
            else if(ip[j] == '`')
            {
                switch(i)
                {
                    case 1:
                    cout<<" ``    ";
                    break;

                    case 2:
                    cout<<"  ``   ";
                    break;

                    case 3:
                    cout<<"       ";
                    break;

                    case 4:
                    cout<<"       ";
                    break;

                    case 5:
                    cout<<"       ";
                    break;

                    case 6:
                    cout<<"       ";
                    break;

                    case 7:
                    cout<<"       ";
                    break;

                    case 8:
                    cout<<"       ";
                    break;

                    case 9:
                    cout<<"       ";
                    break;

                    case 10:
                    cout<<"       ";
                    break;
                }
            }
            else if(ip[j] == '~')
            {
                switch(i)
                {
                    case 1:
                    cout<<"       ";
                    break;

                    case 2:
                    cout<<"       ";
                    break;

                    case 3:
                    cout<<" ~~   ~";
                    break;

                    case 4:
                    cout<<"~  ~  ~";
                    break;

                    case 5:
                    cout<<"~   ~~ ";
                    break;

                    case 6:
                    cout<<"       ";
                    break;

                    case 7:
                    cout<<"       ";
                    break;

                    case 8:
                    cout<<"       ";
                    break;

                    case 9:
                    cout<<"       ";
                    break;

                    case 10:
                    cout<<"       ";
                    break;
                }
            }
            else if(ip[j] == '!')
            {
                switch(i)
                {
                    case 1:
                    cout<<"   !   ";
                    break;

                    case 2:
                    cout<<"   !   ";
                    break;

                    case 3:
                    cout<<"   !   ";
                    break;

                    case 4:
                    cout<<"   !   ";
                    break;

                    case 5:
                    cout<<"   !   ";
                    break;

                    case 6:
                    cout<<"       ";
                    break;

                    case 7:
                    cout<<"   !   ";
                    break;

                    case 8:
                    cout<<"       ";
                    break;

                    case 9:
                    cout<<"       ";
                    break;

                    case 10:
                    cout<<"       ";
                    break;
                }
            }
            else if(ip[j] == '@')
            {
                switch(i)
                {
                    case 1:
                    cout<<"       ";
                    break;

                    case 2:
                    cout<<"  @ @  ";
                    break;

                    case 3:
                    cout<<"@ @ @ @";
                    break;

                    case 4:
                    cout<<"@@  @ @";
                    break;

                    case 5:
                    cout<<"@ @ @@ ";
                    break;

                    case 6:
                    cout<<"@     @";
                    break;

                    case 7:
                    cout<<"  @ @  ";
                    break;

                    case 8:
                    cout<<"       ";
                    break;

                    case 9:
                    cout<<"       ";
                    break;

                    case 10:
                    cout<<"       ";
                    break;
                }
            }
            else if(ip[j] == '#')
            {
                switch(i)
                {
                    case 1:
                    cout<<"       ";
                    break;

                    case 2:
                    cout<<"  # #  ";
                    break;

                    case 3:
                    cout<<"# # # #";
                    break;

                    case 4:
                    cout<<"  # #  ";
                    break;

                    case 5:
                    cout<<"# # # #";
                    break;

                    case 6:
                    cout<<"  # #  ";
                    break;

                    case 7:
                    cout<<"       ";
                    break;

                    case 8:
                    cout<<"       ";
                    break;

                    case 9:
                    cout<<"       ";
                    break;

                    case 10:
                    cout<<"       ";
                    break;
                }
            }
            else if(ip[j] == '$')
            {
                switch(i)
                {
                    case 1:
                    cout<<"   $   ";
                    break;

                    case 2:
                    cout<<"  $$$ $";
                    break;

                    case 3:
                    cout<<"$  $   ";
                    break;

                    case 4:
                    cout<<"  $$   ";
                    break;

                    case 5:
                    cout<<"   $   ";
                    break;

                    case 6:
                    cout<<"   $$  ";
                    break;

                    case 7:
                    cout<<"   $  $";
                    break;

                    case 8:
                    cout<<"$ $$$  ";
                    break;

                    case 9:
                    cout<<"   $   ";
                    break;

                    case 10:
                    cout<<"       ";
                    break;
                }
            }
            else if(ip[j] == '%')
            {
                switch(i)
                {
                    case 1:
                    cout<<" % %  %";
                    break;

                    case 2:
                    cout<<"%   %% ";
                    break;

                    case 3:
                    cout<<" % %%  ";
                    break;

                    case 4:
                    cout<<"   %   ";
                    break;

                    case 5:
                    cout<<"  %% % ";
                    break;

                    case 6:
                    cout<<" %%   %";
                    break;

                    case 7:
                    cout<<"%  % % ";
                    break;

                    case 8:
                    cout<<"       ";
                    break;

                    case 9:
                    cout<<"       ";
                    break;

                    case 10:
                    cout<<"       ";
                    break;
                }
            }
            else if(ip[j] == '^')
            {
                switch(i)
                {
                    case 1:
                    cout<<"   ^   ";
                    break;

                    case 2:
                    cout<<"  ^ ^  ";
                    break;

                    case 3:
                    cout<<" ^   ^ ";
                    break;

                    case 4:
                    cout<<"       ";
                    break;

                    case 5:
                    cout<<"       ";
                    break;

                    case 6:
                    cout<<"       ";
                    break;

                    case 7:
                    cout<<"       ";
                    break;

                    case 8:
                    cout<<"       ";
                    break;

                    case 9:
                    cout<<"       ";
                    break;

                    case 10:
                    cout<<"       ";
                    break;
                }
            }
            else if(ip[j] == '&')
            {
                switch(i)
                {
                    case 1:
                    cout<<" & &   ";
                    break;

                    case 2:
                    cout<<"&   &  ";
                    break;

                    case 3:
                    cout<<" & &   ";
                    break;

                    case 4:
                    cout<<"  &  & ";
                    break;

                    case 5:
                    cout<<"&    & ";
                    break;

                    case 6:
                    cout<<"&   & &";
                    break;

                    case 7:
                    cout<<" & &   ";
                    break;

                    case 8:
                    cout<<"       ";
                    break;

                    case 9:
                    cout<<"       ";
                    break;

                    case 10:
                    cout<<"       ";
                    break;
                }
            }
            else if(ip[j] == '*')
            {
                switch(i)
                {
                    case 1:
                    cout<<"       ";
                    break;

                    case 2:
                    cout<<"   *   ";
                    break;

                    case 3:
                    cout<<"*  *  *";
                    break;

                    case 4:
                    cout<<"  * *  ";
                    break;

                    case 5:
                    cout<<"*  *  *";
                    break;

                    case 6:
                    cout<<"   *   ";
                    break;

                    case 7:
                    cout<<"       ";
                    break;

                    case 8:
                    cout<<"       ";
                    break;

                    case 9:
                    cout<<"       ";
                    break;

                    case 10:
                    cout<<"       ";
                    break;
                }
            }
            else if(ip[j] == '(')
            {
                switch(i)
                {
                    case 1:
                    cout<<"    (  ";
                    break;

                    case 2:
                    cout<<"   (   ";
                    break;

                    case 3:
                    cout<<"  (    ";
                    break;

                    case 4:
                    cout<<" (     ";
                    break;

                    case 5:
                    cout<<"(      ";
                    break;

                    case 6:
                    cout<<"(      ";
                    break;

                    case 7:
                    cout<<" (     ";
                    break;

                    case 8:
                    cout<<"  (    ";
                    break;

                    case 9:
                    cout<<"   (   ";
                    break;

                    case 10:
                    cout<<"    (  ";
                    break;
                }
            }
            else if(ip[j] == ')')
            {
                switch(i)
                {
                    case 1:
                    cout<<"  )    ";
                    break;

                    case 2:
                    cout<<"   )   ";
                    break;

                    case 3:
                    cout<<"    )  ";
                    break;

                    case 4:
                    cout<<"     ) ";
                    break;

                    case 5:
                    cout<<"      )";
                    break;

                    case 6:
                    cout<<"      )";
                    break;

                    case 7:
                    cout<<"     ) ";
                    break;

                    case 8:
                    cout<<"    )  ";
                    break;

                    case 9:
                    cout<<"   )   ";
                    break;

                    case 10:
                    cout<<"  )    ";
                    break;
                }
            }
            else if(ip[j] == '-')
            {
                switch(i)
                {
                    case 1:
                    cout<<"       ";
                    break;

                    case 2:
                    cout<<"       ";
                    break;

                    case 3:
                    cout<<"       ";
                    break;

                    case 4:
                    cout<<"  ---  ";
                    break;

                    case 5:
                    cout<<"       ";
                    break;

                    case 6:
                    cout<<"       ";
                    break;

                    case 7:
                    cout<<"       ";
                    break;

                    case 8:
                    cout<<"       ";
                    break;

                    case 9:
                    cout<<"       ";
                    break;

                    case 10:
                    cout<<"       ";
                    break;
                }
            }
            else if(ip[j] == '_')
            {
                switch(i)
                {
                    case 1:
                    cout<<"       ";
                    break;

                    case 2:
                    cout<<"       ";
                    break;

                    case 3:
                    cout<<"       ";
                    break;

                    case 4:
                    cout<<"       ";
                    break;

                    case 5:
                    cout<<"       ";
                    break;

                    case 6:
                    cout<<"       ";
                    break;

                    case 7:
                    cout<<"       ";
                    break;

                    case 8:
                    cout<<"       ";
                    break;

                    case 9:
                    cout<<"       ";
                    break;

                    case 10:
                    cout<<" _____ ";
                    break;
                }
            }
            else if(ip[j] == '=')
            {
                switch(i)
                {
                    case 1:
                    cout<<"       ";
                    break;

                    case 2:
                    cout<<"       ";
                    break;

                    case 3:
                    cout<<" = = = ";
                    break;

                    case 4:
                    cout<<" = = = ";
                    break;

                    case 5:
                    cout<<"       ";
                    break;

                    case 6:
                    cout<<"       ";
                    break;

                    case 7:
                    cout<<"       ";
                    break;

                    case 8:
                    cout<<"       ";
                    break;

                    case 9:
                    cout<<"       ";
                    break;

                    case 10:
                    cout<<"       ";
                    break;
                }
            }
            else if(ip[j] == '+')
            {
                switch(i)
                {
                    case 1:
                    cout<<"       ";
                    break;

                    case 2:
                    cout<<"       ";
                    break;

                    case 3:
                    cout<<"   +   ";
                    break;

                    case 4:
                    cout<<" + + + ";
                    break;

                    case 5:
                    cout<<"   +   ";
                    break;

                    case 6:
                    cout<<"       ";
                    break;

                    case 7:
                    cout<<"       ";
                    break;

                    case 8:
                    cout<<"       ";
                    break;

                    case 9:
                    cout<<"       ";
                    break;

                    case 10:
                    cout<<"       ";
                    break;
                }
            }
            else if(ip[j] == '{')
            {
                switch(i)
                {
                    case 1:
                    cout<<"    { {";
                    break;

                    case 2:
                    cout<<"  {    ";
                    break;

                    case 3:
                    cout<<"  {    ";
                    break;

                    case 4:
                    cout<<"  {    ";
                    break;

                    case 5:
                    cout<<"{      ";
                    break;

                    case 6:
                    cout<<"  {    ";
                    break;

                    case 7:
                    cout<<"  {    ";
                    break;

                    case 8:
                    cout<<"  {    ";
                    break;

                    case 9:
                    cout<<"   {   ";
                    break;

                    case 10:
                    cout<<"    { {";
                    break;
                }
            }
            else if(ip[j] == '[')
            {
                switch(i)
                {
                    case 1:
                    cout<<"[ [ [ [";
                    break;

                    case 2:
                    cout<<"[      ";
                    break;

                    case 3:
                    cout<<"[      ";
                    break;

                    case 4:
                    cout<<"[      ";
                    break;

                    case 5:
                    cout<<"[      ";
                    break;

                    case 6:
                    cout<<"[      ";
                    break;

                    case 7:
                    cout<<"[      ";
                    break;

                    case 8:
                    cout<<"[      ";
                    break;

                    case 9:
                    cout<<"[      ";
                    break;

                    case 10:
                    cout<<"[ [ [ [";
                    break;
                }
            }
            else if(ip[j] == '}')
            {
                switch(i)
                {
                    case 1:
                    cout<<"} }    ";
                    break;

                    case 2:
                    cout<<"    }  ";
                    break;

                    case 3:
                    cout<<"    }  ";
                    break;

                    case 4:
                    cout<<"    }  ";
                    break;

                    case 5:
                    cout<<"      }";
                    break;

                    case 6:
                    cout<<"    }  ";
                    break;

                    case 7:
                    cout<<"    }  ";
                    break;

                    case 8:
                    cout<<"    }  ";
                    break;

                    case 9:
                    cout<<"   }   ";
                    break;

                    case 10:
                    cout<<"} }    ";
                    break;
                }
            }
            else if(ip[j] == ']')
            {
                switch(i)
                {
                    case 1:
                    cout<<"] ] ] ]";
                    break;

                    case 2:
                    cout<<"      ]";
                    break;

                    case 3:
                    cout<<"      ]";
                    break;

                    case 4:
                    cout<<"      ]";
                    break;

                    case 5:
                    cout<<"      ]";
                    break;

                    case 6:
                    cout<<"      ]";
                    break;

                    case 7:
                    cout<<"      ]";
                    break;

                    case 8:
                    cout<<"      ]";
                    break;

                    case 9:
                    cout<<"      ]";
                    break;

                    case 10:
                    cout<<"] ] ] ]";
                    break;
                }
            }
            else if(ip[j] == '\\')
            {
                switch(i)
                {
                    case 1:
                    cout<<"\\      ";
                    break;

                    case 2:
                    cout<<" \\     ";
                    break;

                    case 3:
                    cout<<"  \\    ";
                    break;

                    case 4:
                    cout<<"   \\   ";
                    break;

                    case 5:
                    cout<<"    \\  ";
                    break;

                    case 6:
                    cout<<"     \\ ";
                    break;

                    case 7:
                    cout<<"      \\";
                    break;

                    case 8:
                    cout<<"       ";
                    break;

                    case 9:
                    cout<<"       ";
                    break;

                    case 10:
                    cout<<"       ";
                    break;
                }
            }
            else if(ip[j] == '|')
            {
                switch(i)
                {
                    case 1:
                    cout<<"   |   ";
                    break;

                    case 2:
                    cout<<"   |   ";
                    break;

                    case 3:
                    cout<<"   |   ";
                    break;

                    case 4:
                    cout<<"   |   ";
                    break;

                    case 5:
                    cout<<"   |   ";
                    break;

                    case 6:
                    cout<<"   |   ";
                    break;

                    case 7:
                    cout<<"   |   ";
                    break;

                    case 8:
                    cout<<"   |   ";
                    break;

                    case 9:
                    cout<<"   |   ";
                    break;

                    case 10:
                    cout<<"   |   ";
                    break;
                }
            }
            else if(ip[j] == ';')
            {
                switch(i)
                {
                    case 1:
                    cout<<"       ";
                    break;

                    case 2:
                    cout<<"       ";
                    break;

                    case 3:
                    cout<<"       ";
                    break;

                    case 4:
                    cout<<"  ;;   ";
                    break;

                    case 5:
                    cout<<"       ";
                    break;

                    case 6:
                    cout<<"  ;;   ";
                    break;

                    case 7:
                    cout<<"  ;    ";
                    break;

                    case 8:
                    cout<<" ;     ";
                    break;

                    case 9:
                    cout<<";      ";
                    break;

                    case 10:
                    cout<<"       ";
                    break;
                }
            }
            else if(ip[j] == ':')
            {
                switch(i)
                {
                    case 1:
                    cout<<"       ";
                    break;

                    case 2:
                    cout<<"       ";
                    break;

                    case 3:
                    cout<<"       ";
                    break;

                    case 4:
                    cout<<"   :   ";
                    break;

                    case 5:
                    cout<<"       ";
                    break;

                    case 6:
                    cout<<"   :   ";
                    break;

                    case 7:
                    cout<<"       ";
                    break;

                    case 8:
                    cout<<"       ";
                    break;

                    case 9:
                    cout<<"       ";
                    break;

                    case 10:
                    cout<<"       ";
                    break;
                }
            }
            else if(ip[j] == '\'')
            {
                switch(i)
                {
                    case 1:
                    cout<<"   '   ";
                    break;

                    case 2:
                    cout<<"   '   ";
                    break;

                    case 3:
                    cout<<"   '   ";
                    break;

                    case 4:
                    cout<<"       ";
                    break;

                    case 5:
                    cout<<"       ";
                    break;

                    case 6:
                    cout<<"       ";
                    break;

                    case 7:
                    cout<<"       ";
                    break;

                    case 8:
                    cout<<"       ";
                    break;

                    case 9:
                    cout<<"       ";
                    break;

                    case 10:
                    cout<<"       ";
                    break;
                }
            }
            else if(ip[j] == '"')
            {
                switch(i)
                {
                    case 1:
                    cout<<"  " "  ";
                    break;

                    case 2:
                    cout<<"  " "  ";
                    break;

                    case 3:
                    cout<<"  " "  ";
                    break;

                    case 4:
                    cout<<"       ";
                    break;

                    case 5:
                    cout<<"       ";
                    break;

                    case 6:
                    cout<<"       ";
                    break;

                    case 7:
                    cout<<"       ";
                    break;

                    case 8:
                    cout<<"       ";
                    break;

                    case 9:
                    cout<<"       ";
                    break;

                    case 10:
                    cout<<"       ";
                    break;
                }
            }
            else if(ip[j] == '<')
            {
                switch(i)
                {
                    case 1:
                    cout<<"       ";
                    break;

                    case 2:
                    cout<<"       ";
                    break;

                    case 3:
                    cout<<"    <  ";
                    break;

                    case 4:
                    cout<<"  <    ";
                    break;

                    case 5:
                    cout<<"<      ";
                    break;

                    case 6:
                    cout<<"  <    ";
                    break;

                    case 7:
                    cout<<"    <  ";
                    break;

                    case 8:
                    cout<<"       ";
                    break;

                    case 9:
                    cout<<"       ";
                    break;

                    case 10:
                    cout<<"       ";
                    break;
                }
            }
            else if(ip[j] == ',')
            {
                switch(i)
                {
                    case 1:
                    cout<<"       ";
                    break;

                    case 2:
                    cout<<"       ";
                    break;

                    case 3:
                    cout<<"       ";
                    break;

                    case 4:
                    cout<<"       ";
                    break;

                    case 5:
                    cout<<"       ";
                    break;

                    case 6:
                    cout<<"  ,,   ";
                    break;

                    case 7:
                    cout<<"  ,    ";
                    break;

                    case 8:
                    cout<<" ,     ";
                    break;

                    case 9:
                    cout<<",      ";
                    break;

                    case 10:
                    cout<<"       ";
                    break;
                }
            }
            else if(ip[j] == '>')
            {
                switch(i)
                {
                    case 1:
                    cout<<"       ";
                    break;

                    case 2:
                    cout<<"       ";
                    break;

                    case 3:
                    cout<<"  >    ";
                    break;

                    case 4:
                    cout<<"    >  ";
                    break;

                    case 5:
                    cout<<"      >";
                    break;

                    case 6:
                    cout<<"    >  ";
                    break;

                    case 7:
                    cout<<"  >    ";
                    break;

                    case 8:
                    cout<<"       ";
                    break;

                    case 9:
                    cout<<"       ";
                    break;

                    case 10:
                    cout<<"       ";
                    break;
                }
            }
            else if(ip[j] == '/')
            {
                switch(i)
                {
                    case 1:
                    cout<<"      /";
                    break;

                    case 2:
                    cout<<"     / ";
                    break;

                    case 3:
                    cout<<"    /  ";
                    break;

                    case 4:
                    cout<<"   /   ";
                    break;

                    case 5:
                    cout<<"  /    ";
                    break;

                    case 6:
                    cout<<" /     ";
                    break;

                    case 7:
                    cout<<"/      ";
                    break;

                    case 8:
                    cout<<"       ";
                    break;

                    case 9:
                    cout<<"       ";
                    break;

                    case 10:
                    cout<<"       ";
                    break;
                }
            }
            else if(ip[j] == '?')
            {
                switch(i)
                {
                    case 1:
                    cout<<"? ? ?  ";
                    break;

                    case 2:
                    cout<<"      ?";
                    break;

                    case 3:
                    cout<<"      ?";
                    break;

                    case 4:
                    cout<<"   ?   ";
                    break;

                    case 5:
                    cout<<"   ?   ";
                    break;

                    case 6:
                    cout<<"       ";
                    break;

                    case 7:
                    cout<<"   ?   ";
                    break;

                    case 8:
                    cout<<"       ";
                    break;

                    case 9:
                    cout<<"       ";
                    break;

                    case 10:
                    cout<<"       ";
                    break;
                }
            }
            else if(ip[j] == '\n')
            {
                if(flag == 0)
                {
                    sj = 0;
                    flag++;
                }
                else
                {
                    sj = fsj;
                }
                ej = j;
                i = 2;
                cout<<"\n";
                realphabet(ip,sj,ej);
                fsj = ej + 1;
                st = fsj;
                i = 0;
                break;
            }
            switch(i)
            {
                case 1:
                cout<<" ";
                break;

                case 2:
                cout<<" ";
                break;

                case 3:
                cout<<" ";
                break;

                case 4:
                cout<<" ";
                break;

                case 5:
                cout<<" ";
                break;

                case 6:
                cout<<" ";
                break;

                case 7:
                cout<<" ";
                break;

                case 8:
                cout<<" ";
                break;

                case 9:
                cout<<" ";
                break;

                case 10:
                cout<<" ";
                break;
            }
            j++;
        }
        cout<<endl;
    }
}
