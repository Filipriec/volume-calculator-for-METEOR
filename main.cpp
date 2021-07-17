#include <bits/stdc++.h>
using namespace std;

int main(){

    float r,A,n,h,cd,ac,hcd;
    cout<<"napis sem objem v litroch: "<<endl;
    cin>>n; //pozadovany objem
    cout<<"zadal si objem: "<<n<<" [l], co je rovne mm^3: "<<n*1000000.0<<endl;
    cout<<"Grain core diameter: [mm]"<<endl;
    cin>>cd;
    cout<<"Vypis je v mm: \n"<< endl;
    n=n*1000000.0; //teraz su litre v mm^3
    h=100.0;//h=100mm
    while (h<=400){//h<=400mm
    //objem = n
    //n=A*h-ac*h
        hcd=cd/2;
        ac=hcd*hcd*3.14159265358979;
        A=(n+ac*h)/h;
        r=sqrt(A/3.14159265358979);
        //vypise sa vsetko v mm
        cout<<"h = "<<h<<", d = "<<r*2<<endl;
        h+=10;
    }
    cout<<"Grain core diameter: "<<cd<<" [mm]"<<endl;

    return 0;
}
