#include "women.h"
#include <stdio.h>
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

women::women()
{
gender=2;
wshirtp=500.0;
wpantp=1000.0;
wshoep=4000.0;
}


void women::shirt()
{
cout<<"\nChoose your color";
cout<<"\n1.Black\n2.WHite\n3.Blue";
cin>>color;
cout<<"\nEnter Your Size";
cout<<"\n1.Small\n2.Medium\n3.Large";
cin>>size;
price=wshirtp;
}

void women::pant()
{
cout<<"\nChoose your color";
cout<<"\n1.Black\n2.WHite\n3.Blue";
cin>>color;
cout<<"\nEnter Your Size";
cout<<"\n1.Small\n2.Medium\n3.Large";
cin>>size;
price=wpantp;
}

void women::shoe()
{
cout<<"\nChoose your color";
cout<<"\n1.Black\n2.WHite\n3.Blue";
cin>>color;
cout<<"\nEnter Your Size";
cout<<"\n1.Small\n2.Medium\n3.Large";
cin>>size;
price=wshoep;

}

void women::putdata()
{
ofstream outf("REEBOK", ios::binary);
outf.write((char*)&gender, sizeof(gender));
outf.write((char*)&color,sizeof(color));
outf.write((char*)&size,sizeof(size));
outf.write((char*)&price,sizeof(price));
outf.write((char*)&item,sizeof(item));
}

void women :: womenitem()
{
cout<<"\nEnter the Item You want";
cout<<"\n1.Shirt\n2.Pants\n3.Shoe\n";
cin>>item;
switch(item)
{
case 1: shirt();
break;
case 2: pant();
break;
case 3: shoe();
break;
default: cout<<"\nWrong Entry";
}
}

void women::readprint1()
{
char gen[20],itm[20],clr[20],siz[20];
ifstream outf("REEBOK", ios::binary);
outf.read((char*)&gender,sizeof(gender));
if(gender==1)
strcpy_s(gen,"Mens");
else if(gender==2)
strcpy_s(gen,"Womens");
outf.read((char*)item,sizeof(item));
if(item==1)
strcpy_s(itm,"Shirt");
else if(item==2)
strcpy_s(itm,"Pants");
else if(item==3)
strcpy_s(itm,"Shoes");
outf.read((char*)&color,sizeof(color));
if(color==1)
strcpy_s(clr,"Black");
else if(color==2)
strcpy_s(clr,"White");
else if(color==3)
strcpy_s(clr,"Blue");
outf>>size;
if(size==1)
strcpy_s(siz,"Small");
else if(size==2)
strcpy_s(siz,"Medium");
else if(size==3)
strcpy_s(siz,"Large");

cout<<"\nReceipt:";
cout<<"\nYou Bought "<<gen<<"  "<<itm;
cout<<"\nSize: "<<siz<<"\nColor: "<<clr;
cout<<"\nTotal Amout: Rs "<<price;
}

