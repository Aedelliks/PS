#include <iostream>

using namespace std;

float a, b, c;

void max_a(float a);
void max_b(float b);
void max_c(float c);
void max_a_c(float a, float c);
void max_a_b(float a, float b);
void max_b_c(float b, float c);
void max_a_b_c(float a, float b, float c);
int main()
{
    cout<<"Program wskazuje najwieksza z 3 liczb"<<endl;
    cout<<"Podaj pierwsza liczbe a"<<endl;
    cin>>a;
    cout<<"Podaj druga liczbe b"<<endl;
    cin>>b;
    cout<<"Podaj trzecia liczbe c"<<endl;
    cin>>c;
    if(a>b && a>c){
        max_a(a);
    }
    else if(b>a && b>c){
        max_b(b);
    }
    else if(c>a && c>b){
        max_c(c);
    }
    else if(a>b && a==c){
        max_a_c(a,c);
    }
    else if(a>c && a==b){
        max_a_b(a,b);
    }
    else if(b>a && b==c){
        max_b_c(b,c);
    }
    else if(a==b && a==c && b==c){
        max_a_b_c(a,b,c);
    }
}
void max_a(float a){
    cout<<"Najwieksza liczba to a="<<a;
}
void max_b(float b){
    cout<<"Najwieksza liczba to b="<<b;
}
void max_c(float c){
    cout<<"Najwieksza liczba to c="<<c;
}
void max_a_c(float a, float c){
    cout<<"Najwieksze liczby to a="<<a<<" oraz c="<<c;
}
void max_a_b(float a, float b){
    cout<<"Najwieksze liczby to a="<<a<<" oraz b="<<b;
}
void max_b_c(float b, float c){
    cout<<"Najwieksze liczby to b="<<b<<" oraz c="<<c;
}
void max_a_b_c(float a, float b, float c){
    cout<<"Wszystkie liczby sa rowne";
}
