#include<iostream>
#include<conio.h>
using namespace std;
char a[3][3]={ {'1','2','3'} ,{'4','5','6'} ,{'7','8','9'} };
int i=0,row=0,coloumn=0,x;
void display()
{
cout<<"\t____ welcome to xo game ___"<<endl;
cout<<endl;
cout<<"\t--------------------"<<endl;
cout<<"\t-      |     |     -"<<endl;
cout<<"\t-   "<<a[0][0]<<"  |  "<<a[0][1]<<"  |  "<<a[0][2]<<"  -"<<endl;
cout<<"\t-      |     |     -"<<endl;
cout<<"\t--------------------"<<endl;
cout<<"\t-      |     |     -"<<endl;
cout<<"\t-   "<<a[1][0]<<"  |  "<<a[1][1]<<"  |  "<<a[1][2]<<"  -"<<endl;
cout<<"\t-      |     |     -"<<endl;
cout<<"\t--------------------"<<endl;
cout<<"\t-      |     |     -"<<endl;
cout<<"\t-   "<<a[2][0]<<"  |  "<<a[2][1]<<"  |  "<<a[2][2]<<"  -"<<endl;
cout<<"\t-      |     |     -"<<endl;
cout<<"\t--------------------"<<endl;

}
void playerturn()
{
if(i%2==0)
{
cout<<endl;
cout<<"enter position (x_player)"<<endl;
cout<<endl;
cin>>x;
}
else
{
cout<<endl;
cout<<"enter position (y_player)"<<endl;
cout<<endl;
cin>>x;
}
switch(x)
{
case 1:row=0;coloumn=0;break;
case 2:row=0;coloumn=1;break;
case 3:row=0;coloumn=2;break;
case 4:row=1;coloumn=0;break;
case 5:row=1;coloumn=1;break;
case 6:row=1;coloumn=2;break;
case 7:row=2;coloumn=0;break;
case 8:row=2;coloumn=1;break;
case 9:row=2;coloumn=2;break;
}
if(i%2==0)
{
if(a[row][coloumn]!='x'&&a[row][coloumn]!='o')
{
a[row][coloumn]='x';
}
else
{
cout<<endl;
cout<<"no,the position that you entered is already filled enter another position"<<endl;
sleep(1);
i--;
}
}
else
{
if(a[row][coloumn]!='x'&&a[row][coloumn]!='o')
{
a[row][coloumn]='o';
}
else
{
cout<<endl;
cout<<"no,the position that you entered is already filled enter another position"<<endl;
sleep(1);
i--;
}
}
i++;
}
int point()
{
if((a[0][0]=='x'&&a[0][1]=='x'&&a[0][2]=='x')||(a[0][0]=='o'&&a[0][1]=='o'&&a[0][2]=='o'))
{
clrscr();
display();
cout<<endl;
cout<<"\tthe player "<<a[0][0]<<" wins"<<endl;
return 1;
}
if((a[1][0]=='x'&&a[1][1]=='x'&&a[1][2]=='x')||(a[1][0]=='o'&&a[1][1]=='o'&&a[1][2]=='o'))
{
clrscr();
display();
cout<<endl;
cout<<"\tthe player "<<a[1][0]<<" wins"<<endl;
return 2;
}
if((a[2][0]=='x'&&a[2][1]=='x'&&a[2][2]=='x')||(a[2][0]=='o'&&a[2][1]=='o'&&a[2][2]=='o'))
{
clrscr();
display();
cout<<endl;
cout<<"\tthe player "<<a[2][0]<<" wins"<<endl;
return 3;
}
if((a[0][0]=='x'&&a[1][0]=='x'&&a[2][0]=='x')||(a[0][0]=='o'&&a[1][0]=='o'&&a[2][0]=='o'))
{
clrscr();
display();
cout<<endl;
cout<<"\tthe player "<<a[0][0]<<" wins"<<endl;
return 4;
}
if((a[0][1]=='x'&&a[1][1]=='x'&&a[2][1]=='x')||(a[0][1]=='o'&&a[1][1]=='o'&&a[2][1]=='o'))
{
clrscr();
display();
cout<<endl;
cout<<"\tthe player "<<a[0][1]<<" wins"<<endl;
return 5;
}
if((a[0][2]=='x'&&a[1][2]=='x'&&a[2][2]=='x')||(a[0][2]=='o'&&a[1][2]=='o'&&a[2][2]=='o'))
{
clrscr();
display();
cout<<endl;
cout<<"\tthe player "<<a[0][2]<<" wins"<<endl;
return 6;
}
if((a[0][0]=='x'&&a[1][1]=='x'&&a[2][2]=='x')||(a[0][0]=='o'&&a[1][1]=='o'&&a[2][2]=='o'))
{
clrscr();
display();
cout<<endl;
cout<<"\tthe player "<<a[0][0]<<" wins"<<endl;
return 7;
}
if((a[0][2]=='x'&&a[1][1]=='x'&&a[2][0]=='x')||(a[0][2]=='o'&&a[1][1]=='o'&&a[2][0]=='o'))
{
clrscr();
display();
cout<<endl;
cout<<"\tthe player "<<a[0][2]<<" wins"<<endl;
return 8;
}
for(int i=0;i<3;i++)
{
for(int j=0;j<3;j++)
{
if(a[i][j]!='x'&&a[i][j]!='o')
{
return 0;
}
}
}
clrscr();
display();
cout<<endl;
cout<<"\tgame_draw"<<endl;
return 99;
}
int main()
{
int temp;
while(true)
{
clrscr();
display();
playerturn();
temp=point();
if(temp<=0)
{
sleep(1);
}
else
{

break;
}
}
return 0;
}