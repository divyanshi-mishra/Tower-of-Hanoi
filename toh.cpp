#include <iostream>
#include <conio.h>
using namespace std;
void tower(int a,char source,char aux,char des){
    int step=0;
    if(a==1){
       cout<<"Move disc 1 from "<<source<<" to "<<des<<"\n";
       return;
    }
    else{
       tower(a-1,source,des,aux);
       cout<<"Move disc "<<a<<" from "<<source<<" to "<<des<<"\n";
       tower(a-1,aux,source,des);
       }
}
int main(){
     int n,step;
     cout<<"\nTower of Hanoi\n";
     cout<<"Enter number of discs : ";
     cin>>n;
     cout<<"\n\n";
     tower(n,'A','B','C');
     cout<<"total number of steps:"<<step;
     getch();
     return 0;
}
