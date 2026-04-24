#include <iostream>
#include <cmath>

using namespace std;
int main(){

double a;
int b;
int prtIntreaga[16];
int prtFractionara[16];
double intreaga;
double fractionara;



cout<<"Introdu un numar zecimal: ";
cin>>a;

cout<<"Introdu baza sistemului de enumaratie mai mic ca 10 exclusiv: ";
cin>>b;

fractionara = modf(a, &intreaga);

for (int i = 0; i < 16; i++) {
    prtIntreaga[i] = 0;
}

for (int i = 0; intreaga > 0 && i < 16; i++) {
    prtIntreaga[i] = (int) intreaga % b;
    intreaga /= (int) b;
}

for (int i = 0; i < 16; i++) {
    prtFractionara[i] = 0;
}

for (int i = 0; i < 16; i++) {
    double intreaga_temp;
    fractionara = modf(fractionara * b, &intreaga_temp);
    prtFractionara[i] = (int)intreaga_temp;
}

cout<<"Numarul "<<a<<" in baza "<<b<<" este: "<<endl;

for (int i = 15; i >= 0; i--) {
    cout<<prtIntreaga[i];
}

cout<<",";

for (int i = 0; i <= 15; i++) {
    cout<<prtFractionara[i];
}

cout<<endl;

return 0;
}