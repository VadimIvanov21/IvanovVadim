#include <iostream>
#include "vadim13.h"

using namespace std;

void itc_name(){
cout << "VADIM";
}

void itc_fio(){
itc_name();
cout << " " << "IVANOV"<< " " << "SERGEEVICH";
}

int itc_abs(int num){
if (num > 0){
    return num;
}
else{
    return num * -1;
}
}
double itc_fabs(double num){
if (num > 0){
    return num;
}
else{
    return num * -1;
}
}


int itc_revnbr(int num){
int b, q;
if(num > 0){
while (num > 0){
    b = num % 10;
    num = num / 10;
    q = q * 10 + b;
}
return q;
}
if(num < 0){
   num = num * -1;
   while (num > 0){
    b = num % 10;
    num = num / 10;
    q = q * 10 + b;
}
return q *-1;
}
}
