/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <string.h>
int main()
{   char s[100],asciil;
    int i,fl0,maxtimes,j,fl02,same_count;
    fgets(s,100,stdin);
    s[strcspn(s,"\n")]='\0';
    i=0;
    fl0=0;
    maxtimes=-5;
    asciil= 'a';
    while (i<=100 && fl0==0){
        if (s[i]=='\0'){
            fl0=1;
        }
        j=0;
        fl02=0;
        same_count=0;
        while (j<=100 && fl02==0){
            if (s[j]=='\0'){
                fl02=1;
            }
            if (s[i]==s[j]){
                same_count+=1;
            }
            j++;
                     }
        if (same_count>maxtimes){
            maxtimes=same_count;
            asciil=s[i];
        }
        else if (same_count==maxtimes){
            if (s[i]<asciil){
                asciil=s[i];
            }
        }
        i++;
    }
    printf("%c",asciil);
    

    return 0;
}
