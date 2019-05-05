#include <string.h>
#include<iostream>
#include<stdlib.h>
#include<windows.h>
#include <conio.h>
#include <stdio.h>
using namespace std;



    struct mhs{
    char nb[20];
    int hb,jb;

    };
    mhs ta[10];
    mhs temp;

    string inp,nam;
string nama[5]{"Bayu","Irvan","Susiati","Diana","Roni"};
string idn[5]={"A001","A002","A003","A007","A008"};
char yt,id[20];
bool status=false;
int a,indeks,jml,re=0;
float dis,ku,disc,hs,tu,tot1,tot2=0;

void tanya(){

cout<<"Apakah Anda Member (Y) (T) : ";cin>>yt;
system("cls");
}
void member(){
if(yt=='Y'||yt=='y'){
        for( a=0;a<5;a++){
    cout<<"\n Daftar No. Identitas member ke- "<<a<<" : "<<idn[a];cout<<endl;

        }
    cout<<endl;
    cout<<"Masukkan No. Identitas : ";cin>>inp;
    cout<<endl;
     system("cls");
for(int i=0;i<=a;i++){
    if(inp==idn[a]){
        status=true;

}
}
system("cls");
}
}

void name(){

if(status=true){
cout<< "\tNO. Identitas : "<<inp<<endl;
if(inp=="A001")
    {cout<<"\tNama : "<<nama[0];}
else if(inp=="A002")
    {cout<<"\tNama : "<<nama[1];}
else if(inp=="A003")
    {cout<<"\tNama : "<<nama[2];}
else if(inp=="\tA007")
    {cout<<"\tNama : "<<nama[3];}
else if(inp=="A008")
    {cout<<"\tNama : "<<nama[4];}
}
cout<<endl;
}


void nonmember(){
 if(yt=='t'||yt=='T')
{system("cls");
    cout<<endl;
    cout<<"Masukkan Nama : ";cin>>nam;
    cout<<"No Identitas  : ";cin>>id;
    cout<<endl;
}
}
void barang(){
cout<<endl;
cout<<"Berapa Jumlah Barang : ";cin>>jml;cout<<endl;
for(int i=0;i<jml;i++){
    cout<<"Barang ke - "<<i+1<<endl;
    cout<<"Masukkan Nama Barang   : ";cin>>ta[i].nb;
    cout<<"Masukkan Jumlah barang : ";cin>>ta[i].jb;
    cout<<"masukkan Harga Barang  : ";cin>>ta[i].hb;
    cout<<endl;
    re=re+ta[i].jb;


tot1=ta[i].jb*ta[i].hb;
tot2=tot2+tot1;
}
}


void sorting(){
    for(int a=0;a<jml;a++){
    for(int j=0;j<(jml-1);j++){
        if(ta[j].hb>ta[j+1].hb)
        {
          temp.hb=ta[j].hb;
          ta[j].hb=ta[j+1].hb;
          ta[j+1].hb=temp.hb;

        strcpy(temp.nb,ta[j].nb);
        strcpy(ta[j].nb,ta[j+1].nb);
        strcpy(ta[j+1].nb,temp.nb);

        temp.jb=ta[j].jb;
        ta[j].jb=ta[j+1].jb;
        ta[j+1].jb=temp.jb;

        }

    }
}

cout<<"Harga Setelah urut\n\n";
for(int i=0;i<jml;i++){
    cout<<"Barang ke - "<<i+1<<endl;
    cout<<"Nama Barang   : "<<ta[i].nb<<endl;
    cout<<"Jumlah Barang : "<<ta[i].jb<<endl;
    cout<<"Harga         : "<<ta[i].hb<<endl<<endl;

}
cout<<"Total Harga : "<<tot2<<endl;
}


void alldata(){
if(yt=='y'||yt=='Y'){

  dis=5/(float)100;
  disc=tot2*dis;
  hs=tot2-disc;
  cout<<endl<<endl;
    name();
    cout<<"\tAnda Adalah Member"<<endl;
    cout<<"\tAnda mendapat diskon sebesar 5%"<<endl;
    cout<<"total Barang Belian      : "<<re<<endl<<endl;
    sorting();
    cout<<endl;
    cout<<"Diskon Anda Adalah       : "<<disc<<endl;
    cout<<"Total Yang Harus Dibayar : "<<hs<<endl;
    cout<<"Masukkan Uang            : ";cin>>ku;
    cout<<"kembalian                : "<<ku-hs;
    cout<<endl;
}

 if(yt=='t'||yt=='T'){
    cout<<"\tAnda bukan member "<<endl;
    cout<<"\tNama          : "<<nam<<endl;
    cout<<"\tNo. Identitas : "<<id<<endl;
    cout<<"total Barang Belian  : "<<re<<endl<<endl;
    sorting();
    cout<<"anda tidak dapat diskon"<<endl;
    cout<<"Masukkan Uang : ";cin>>ku;
    cout<<"kembalian     : "<<ku-tot2;
    cout<<endl;
}

}

main(){

system("color a");
tanya();
member();
name();
nonmember();
barang();
system("cls");
alldata();


}
