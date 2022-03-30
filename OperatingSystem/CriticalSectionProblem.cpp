
#include<iostream>
#include <cstdlib>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <ctype.h>
# include <termios.h>
using namespace std;
/* get a single char from stdin    */
int getch(void)
{
   struct termios oldattr, newattr;
   int ch;
   tcgetattr(0, &oldattr);
   newattr=oldattr;
   newattr.c_lflag &= ~( ICANON | ECHO );
   tcsetattr( 0, TCSANOW, &newattr);
   ch=getchar();
   tcsetattr(0, TCSANOW, &oldattr);
   return(ch);
}


int SetLock=0;
void P1CriticalSection();
void P2CriticalSection();
int main()
{
P1CriticalSection();
P2CriticalSection();
P1CriticalSection();
getch();

}
// Start of function for critical Section of Process1
void P1CriticalSection()
{
while (SetLock!=0)
{
cout<<"Process1 is waiting"<<endl;
getch();
}

// exit(0);
SetLock=1;
cout<<"in critical Section of Process1"<<endl;
P2CriticalSection();
// cout<<"in critical Section of Process1"<<endl;
// getch();


}
// End of function for critical Section of Process1

// Start of function for critical Section of Process2
void P2CriticalSection()
{
while(SetLock!=0)
{
cout<<"Process2 is waiting"<<endl;
getch();
}

// exit(0);
SetLock=1;
{
cout<<"In Critical Section of Process2"<<endl;
getch();
}
}

// End of function for critical Section of Process2