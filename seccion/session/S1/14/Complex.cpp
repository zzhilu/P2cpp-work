#include <iostream>
#include "Complex.h"
using namespace std;

void Complex::set(float real, float imag) {
    m_real = real;
    m_imag = imag;
}

void Complex::mostra() {
    // 根据虚部符号决定显示格式 a+bi 或 a-bi 
    if (m_imag >= 0)
        cout << m_real << " + " << m_imag << "i";
    else
        cout << m_real << " - " << -m_imag << "i";
}

Complex Complex::suma(Complex c) {
    Complex res;
    res.set(m_real + c.m_real, m_imag + c.m_imag); // 实部加实部，虚部加虚部 [cite: 246]
    return res;
}

Complex Complex::resta(Complex c) {
    Complex res;
    res.set(m_real - c.m_real, m_imag - c.m_imag); // 实部减实部，虚部减虚部 [cite: 247]
    return res;
}

Complex Complex::multiplica(Complex c) {
    Complex res;
    // 复数乘法公式：(a+bi)(c+di) = (ac-bd) + (ad+bc)i [cite: 248]
    float r = (m_real * c.m_real) - (m_imag * c.m_imag);
    float i = (m_real * c.m_imag) + (m_imag * c.m_real);
    res.set(r, i);
    return res;
}

bool Complex::esIgual(Complex c) {
    // 只有实部和虚部都相等时才相等 [cite: 249]
    return (m_real == c.m_real && m_imag == c.m_imag);
}