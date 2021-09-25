 /*  CLACULATE NO OF WORD IN STRING THROUGH COMMAND LINE  */

#include<iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

int main(int argc,char* argv[])
{
    char str[100];
    int i, len;
    int freq[100];

    //getting string from user through command line 
    if(argc==2)
    {
         strcpy(str,argv[1]);
        
    }
    else if(argc>2)
    {
        for(int k=3;k<argc;k++)
        {
            strcat(str,argv[k]);
        }
    }
    else
    {
         //taking input when no string is passed through command line
        cout<<"Enter the string: ";
        gets(str);
     }

    len = strlen(str);
    cout<<"\nThe string is: "<<str<<"\n";
    
    for(i=0; i<100; i++)
    {
        freq[i] = 0;
    }
 //Find total frequency of each Lowercase and Uppercase character 
    for(i=0; i<len; i++)
    {
        if(str[i]>='a' && str[i]<='z')
        {
            freq[(int)str[i] - 71]++;
        }
        else if(str[i]>='A' && str[i]<='Z')
        {
            freq[(int)str[i] - 65]++;
        }
    }

    cout<<"\nFrequency of characters in the given string: \n";
    for(i=0; i<100; i++)
    {
        if(freq[i] != 0)
        {
           if(i<26)
            {
                cout<<(char)(i+65)<<" = "<<freq[i]<<"\n";
            }
            else
            {
                cout<<(char)(i+71)<<" = "<<freq[i]<<"\n";
             }
        }
    }

    return 0;
}
