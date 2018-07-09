#include<iostream.h>
#include<conio.h>
void ip_num_verify(char a[]){
char *p=strtok(a,".");
int count=0;
while(p!=NULL){
int b=stoi(p);
if (b>=0&&b<=225){
count++;
p=strtok(NULL,".")}
else 
break;
}
if (count==4){
cout<<"\nValid ip "<<a;
}
else
cout<<"\nnot a valid ip\n "
}
void main(){
char a[100];
cout<<"\n\tEnter ip to check its validity:\n"
gets(a);
ip_num_verify(a);
}

