#include <iostream>

using namespace std;

float a, b;

float tozsamosc(float a, float b);
float sprzeczne(float a, float b);
float normalne(float a, float b);
int main()
{
    cout<<"Program obliczaj¹cy równanie liniowe w postaci Ax+B=0"<<endl;
    cout<<"Podaj wspolczynnik A"<<endl;
    cin>>a;
    cout<<"Podaj wspolczynnik B"<<endl;
    cin>>b;
    if(a==0){
        if(b==0){
            tozsamosc(a,b);
        }else{
        sprzeczne(a,b);
        }
    }
    else{
        cout<<"Rozwiazanie rownania to "<<normalne(a,b)<<endl;
    }


}

float tozsamosc(float a, float b){
    cout<<"Rownanie jest tozsamosciowe"<<endl;
}
float sprzeczne(float a, float b){
    cout<<"Rownanie jest przeczne"<<endl;
}
float normalne(float a, float b){
    float x=-b/a;
    return x;
}
