#include <iostream.h>
#include <string.h>
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int b[4],i=0;
int ip_num_verify(char a[]){
char *p=strtok(a,".");
int count=0;
while(p!=NULL){
b[i]=atoi(p);
if (b[i]>=0&&b[i]<=225){
count++;
p=strtok(NULL,".");
i++;}
else
break;
}
if (count==4){
return(0);
}
else
cout<<"\nnot a valid ip\n ";
    return(1);
}
int arin(char a[]){
   if(b[0]==192 && b[1]==168){
	cout<<"\n Name:  PRIVATE-ADDRESS-CBLK-RFC1918-IANA-RESERVED";
	cout<<"\n  Range:  192.168.0.0-192.168.255.255 ";
    return 1; }
    else
	return 0;
}

void main()
{   int q;
    char a[100];
cout<<"\n\tEnter ip to check its validity:\n";
gets(a);
int c =ip_num_verify(a);
    if(c==0){
      q=arin(a);}
      if(c==0 && q==0){
      cout<<"\nvalid ip\n ";}
getch();}
