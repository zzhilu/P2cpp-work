#include <iostream>
#include "Complex.h"
using namespace std;

// 根据字符代码执行运算 [cite: 254]
Complex avaluaOperacio(char op, Complex c1, Complex c2) {
    Complex resultat;
    switch(op) {
        case '1': resultat = c1.suma(c2); break;        // 加法 [cite: 254]
        case '2': resultat = c1.resta(c2); break;       // 减法 [cite: 254]
        case '3': resultat = c1.multiplica(c2); break;  // 乘法 [cite: 254]
    }
    return resultat;
}

int main() {
    Complex c1, c2, res;
    c1.set(3, 2);  // 3 + 2i
    c2.set(1, -4); // 1 - 4i

    cout << "C1: "; c1.mostra(); cout << endl;
    cout << "C2: "; c2.mostra(); cout << endl;

    // 测试加法（操作码 '1'）
    res = avaluaOperacio('1', c1, c2);
    cout << "Suma: "; res.mostra(); cout << endl;

    return 0;
}