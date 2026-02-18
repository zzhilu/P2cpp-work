#include <iostream>
#include "Punt.h"
using namespace std;

int main() {
    Punt p1; 
    p1.m_x = 0.0; p1.m_y = 0.0; 
    
    Punt p2;

    p2.llegeix(); 

    float d = p1.distancia(p2);

    cout << "Primer punt: ";
    p1.mostra(); 
    cout << endl;

    cout << "Segon punt: ";
    p2.mostra(); 
    cout << endl;

    cout << "Distancia: " << d << endl; 

    return 0;
}