#include <iostream>
#include <math.h>
using namespace std;
float f (float y){
    float f;
    f=pow (y,2)*cos(y)+1;
    return f;
}
int main() {
    float a,b,y,err;
    do {
        cout << "inserire estremi" << endl;
        cin >> a >> b;
    } while (f(a)*f(b)>=0.0);
    do {
        y=(a+b)/2;
        if (f(y)==0.0)
            break;
        else{
            if (f(y)*f(b)<0)
                a=y;
            else
                b=y;
            err=abs (b-a)/2;
        }
    }while (err >=1e-6);
    cout << int (y*10000)/10000.0<< endl;
    return 0;
    }
