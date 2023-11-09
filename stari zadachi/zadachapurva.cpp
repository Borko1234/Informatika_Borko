#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
    /*int age;
    cout<<"Enter your age:\n";
    cin >>age;
    if (age>=18) cout<<"da\n";
    else cout <<"ne\n";
    return 0;*/
    /*int a;
    cout<<"Enter a:\n";
    cin >>a;
    cout<<a/10000+a/1000%10+a/100%10+100/10+a/100%10<<\n;
    cout<<"Sumata e:\n";
     cout<<setw(2)<<5.12378;
    return 0;*/
/*int a;
cout<<"Enter a:\n";
cin>>a;
if (a>99||a<1000)
{
if (a/100%10>0||a%100/10>0)
{
    if (a/100/a/100+a/10%10/a/100+a%10/a/100+a/100/10%10+a/10%10/a/10%10+a%10/10%10+a/100/a%10+a/10%10/a%10+a%10/a%10)
    {
    {
        cout<<"yes/n";
    }
    }
}
else
{
    cout<<"ima 0 v chisloto/n";
}

}
}

int n, n1, n2,n3;
cin>>n;
n1=n%10;
n2=(n/10)%10;
n3=(n/100)%10;
if(n%n1==0&&n%n2==0&&n%n3==0)
{
cout<<"yes ";
cout<<"Sborut na cifrite e: "<<n1+n2+n3;
}
else
    {
        cout<<"no ";
        cout<<"Proizvedenieto na cifrite e: "<<n1*n2*n3;
    }
    int a;
    int sum=a/100+a/10%10+a%10;
    cin>>a;
    int b;
    cin>>b;
    if (a>99&&a<1000)
    {
    cout<<a<<" "<<b;
    if  (sum%b>0)cout<<"\nno "<<sum*b;
    else cout<<"\nyes "<<a%10<<a/10%10<<a/100;
    }
    else{}
    int a;
    cin>>a;
    int sum=a/100+a/10%10+a%10;
    if (a>99&&a<1000)
    {
    if  (sum>9&&sum<100)cout<<"yes "<<sum;
    else cout<<"no "<<(a%10)*(a/10%10)*(a/100);
    }
    else{}/
        int n;
        cin>>0;
        int sum=1;
        for(int i=1;i<=n;i++)
        {
        sum=sum+i;

        }
        cout<<"Sum="<<sum;/
        int n;
        cin>>n;
        int pr=1;
        for(int i=1;i<=n;i++)
        {
        pr=pr*i;

        }
        cout<<"Pr="<<pr;
        /int k;
        int i;
        cin>>k;
        for(i=99;i<=999;i++)
        {
        if(i/100+i/10%10+i%100==k){cout<<i<<" ";}
        }
        /int m;
        int n;
        cin>>m;
        cin>>n;
        for(int i=m;i<n;i++)
        {
        if(i%5==0)
        {
            cout<<i<<" ";
        }
        }
        int i1,i2,i3;
        for(int i=100;i<=999;i++)
        {
        i1=i/100;
        i2=i/10%10;
        i3=i%10;
        if(i1!=0&&i2!=0&&i3!=0)
        {

        if(i%i1==0&&i%i2==0&&i%i3==0) {cout<<i<<"\n";}
        }

        }
        zadacha 16
        int k,n,len=0,ct=0;
        cin>>k>>n;
        int a;
        for(int i =0;i<n;++i)
        {
            cin>>a;
            while(a!=0)
            {
                a/=10;
                ++len;
            }
            if(len==k)
            {
                ++ct;
            }

            len=0;
        }
        cout<<ct<<'\n';
        return 0;
    int max,min;
    int a;
    max=0;
    do
        {
        cin>>a;
        if(a%2!=0)
        {
           if(max<a) max=a;

        }
        }while(a!=0);
        if(max=0)
        {
            cout<<"nqma nechetni chisla";
        }
        else
        {
                cout<<max<<'\n';
        }
    return 0;

        int a;
        cin>>a;
        int min=a;
        int max=a;
        double sr=a;
        for(int i=0;i<11;i++)
        {
            cin>>a;
            if(min>a) min = a;
            if(max<a) max = a;
            sr+=a;
        }
        cout<<"min= "<<min<<'\n';
        cout<<"max= "<<max<<'\n';
        cout<<"srednata prodajba e: "<<sr/12;
        int a [20];
        a[0]=5;
        a[1]=7;
        a[2]=3;
        a[3]=-3;
        a[4]=1;
        a[5]=53;
        //deklariraite masiv ot drobni chisla i chislo n koeto e bro na elementite na tozi masiv

    double a[20];
    int n;
    cin>>n;
    for (int i=0;i<n;i++)
    cin>>a[i];
    for(int i=0;i<n;i++)
    cout<<setw(3)<<a[i];
    cout<<endl;
    int n;cin>>n;
    if (n>1&&n<36)
    {
    int m [n];
    int x;
    for(int i=0;i<n;i++)
    {
        cin>>m[i];

    }
    cin>>x;
     for(int i=0;i<n;i++)
    {
       if (m[i]==x)
        {
        cout<<i+1<<"";
       return 0;
        }

    }
    cout<<"No\n";
    }
    //zad 1 DSNP koqto da vuvejda estestveno chislo n i
    //n na broi drobni chisla progratama da izvejda sredno aretmitichnoto na elementite na masiva
    //zad 2 DSNP koqto da vuvejda estestveno chislo n i n na broi estestveni cisla i
    int n;cin>>n;
    double m[n];
    double sr=0;
    for(int i=0;i<n;i++)
    {
        cin>>m[i];
        sr=sr+m[i];
    }
    cout<<sr/n;
    //zadacha 21
    int n;cin>>n;
    double m[n];
    if(2<=n&&n<=30)
    {
    int sum=0,br=0,sr=0;
    for(int i=0;i<n;i++)
    {
        cin>>m[i];
        sum=sum+m[i];
    }
    sr = sum/n;
    for(int i=0;i<n;i++)
    {
        if(m[i]>sr)
        {
        br++;
        }
    }
    cout<<br;

    }//zadacha22
    int n,br=0,sum=0;
    bool check = false;
    cin>>n;
    int masiv[n];
    for(int i=0;i<n;i++)
    {
        cin>>masiv[i];
    }
    for(int i=0;i<n;i++)
    {
                do
        {
            sum = sum + masiv[i] % 10;
            masiv[i] = masiv[i] / 10;
            if(sum>9 && sum<100)
            {
                br++;
                check=true;
            }
        }
        while(masiv[i]==0);
    }
    if(check)cout<<br;
    if(check==false) cout<<"No";
        //zadacha 23
    int a,n;
    bool check = false;
    cin>>n;
    int masiv[n];
    for(int i=0;i<n;i++)
    {
        cin>>masiv[i];
        a=masiv[i]/10;
        if(a!=0)
        {

        while(a==0&&masiv[i]/a==0)
            {
            a=masiv[i]/10;
            }
        }
    }
    if(check==false) cout<<"No";

    int n,sum=0;
    cin>>n;
    int masiv[n];
        for(int i=0;i<n;i++)
        {
            cin>>masiv[i];
            if(masiv[i]/1<0){masiv[i]=masiv[i]*-1;}
            sum=sum+masiv[i];
        }

    cout<<sum/n;
 int n,broi=0;
 cin>>n;
 int massiv [n];
 for(int i=0;i<n;i++)
 {
 cin>>massiv[i];
 if(massiv[i]<1000)
 {
    broi++;
 }

 }
 cout<<broi;
}
 int n,broi=0;
 cin>>n;
 int massiv [n];
 for(int i=0;i<n;i++)
 {
 cin>>massiv[i];
 if(massiv[i]<1000)
 {
    broi++;
 }

 }
 cout<<broi;
}*/
 int n,sum=0,f;
 cin>>n;
 int massiv[50];
 for(int i=0;i<n;i++){
 cin>>massiv[i];
 sum+=massiv[i];
 }
}

