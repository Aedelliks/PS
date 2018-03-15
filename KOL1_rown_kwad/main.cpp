#include <iostream>
#include <math.h>

using namespace std;
//funkcje
double liniowe(double b, double c);
double kwad_dwa(double a, double b, double c);
double kwad_jeden(double a, double b);


//zmienne
double a, b, c, d, dt, x1, x2;

int main()
{


    cout<<"Program obliczajacy rownanie kwadratowe Ax^2+By+C=0"<<endl;
    cout<<"Wprowadz a"<<endl;
    cin>>a;
    cout<<"Wprowadz b"<<endl;
    cin>>b;
    cout<<"Wprowadz c"<<endl;
    cin>>c;
    d=(b*b)-(4*a*c);
    if(a==0){
        cout<<"Rownanie jest pierwszego stopnia"<<endl;
        if(b==0){
            if(c==0){
                cout<<"Rownanie tozsamosciowe"<<endl;
            }else{
                cout<<"Rownanie sprzeczne"<<endl;
            }
        }else{
        liniowe(b,c);
        }
    }
    else if(d<0){
        cout<<"Brak pierwiastkow"<<endl;
    }
    else if(d>0){
        kwad_dwa(a,b,c);
    }
    else{
        kwad_jeden(a,b);
    }

}
double liniowe(double b, double c){
    double x=(-b/c);
    cout<<"Rozwiazanie rownania ma postac: "<<x<<endl;
}
double kwad_dwa(double a, double b, double c){
    dt=sqrt(d);
    x1=((-b+d)/(2*a));
    x2=((-b-d)/(2*a));
    cout<<"Rownanie jest kwadratowe z 2 pierwiastkami"<<endl;
    cout<<"Rozwiazania rownania to x1="<<x1<<", x2="<<x2<<endl;
}
double kwad_jeden(double a, double b){
    double x=(-b/(2*a));
    cout<<"Rownanie jest kwadratowe z 1 pieriwastkiem podwojnym"<<endl;
    cout<<"Rozwiazanie rownania to x="<<x;
}
