#include <stdio.h>
#include <iostream>
#include <string>
#include <fstream>
#include "men.h"
#include "women.h"

using namespace std;

void main()
{

men obj;
women wobj;
int ch;
char ans;
do
{


cout<<"\t\nITEMS";
cout<<"\n1.MEN";
cout<<"\n2.Women\n";
cin>>ch;
switch(ch)
{
case 1:obj.menitem();
obj.readprint();
break;
case 2:wobj.womenitem();
wobj.readprint1();
break;
default: cout<<"\nWrong Choice";
	break;
}
cout<<"\nDo You Want to Continue Shopping: ";
cin>>ans;

}while(ans=='Y'||ans=='y');

}
