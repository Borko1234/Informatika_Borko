#include<iostream>
#include<cstring>
#include<iomanip>
using namespace std;
/*struct Book
{
    string name;
    string author;
    double price;
    string ISBN;
};
int main()
{
Book b[50];
int n;
bool check;
string max;
cin>>n;
cin.ignore();
for(int i=0;i<n;i++)
{
    getline(cin,b[i].name);
    getline(cin,b[i].author);
    cin>>b[i].price;
    cin.ignore();
    getline(cin,b[i].ISBN);
}
for(int i=0;i<n;i++)
{
    string max=b[1].name;

}*/
//definiraite struktura car koqto ima poleta: marka model godina moshtnost cena cvqt;
struct car
{
    string marka;
    string model;
    double godina;
    double moshtnost;
    double cena;
    string cvqt;
};
int main()
{
    car c[50];
    int n;
    cin>>n;
    string izbor;
    cin.ignore();
    getline(cin,izbor);
for(int i=0;i<n;i++)
{
    getline(cin,c[i].marka);
    getline(cin,c[i].model);
    cin>>c[i].godina;
    cin>>c[i].moshtnost;
    cin>>c[i].cena;
    cin.ignore();
    getline(cin,c[i].cvqt);
}

for(int i=0;i<n;i++)
{
    if(c[i].marka==izbor)
        cout<<c[i].marka<<" "<<c[i].model<<" "<<c[i].godina<<" "<<c[i].moshtnost<<" "<<c[i].cena<<" "<<c[i].cvqt<<'\n';
}

}
