#include <iostream>
#include <cmath>
#include "Punt.h"
using namespace std;

void Punt::llegeix() {
    cout << "Introdueix coordenades x i y del punt: ";
    cin >> m_x >> m_y; // 直接访问属性 m_x, m_y [cite: 158]
}

void Punt::mostra() {
    cout << "(" << m_x << ", " << m_y << ")"; // 格式化输出 [cite: 163, 166]
}

float Punt::distancia(Punt &p) {
    float dx = m_x - p.m_x; // 当前对象的 m_x 减去参数对象的 m_x [cite: 174]
    float dy = m_y - p.m_y;
    return sqrt(dx * dx + dy * dy); // 返回两点间距离 [cite: 179]
}
    
    // 执行坐标相加
Punt Punt::suma(Punt &p) {
    Punt resultat; // 创建一个临时对象存放结果 
    
    // 执行坐标相加
    resultat.m_x = m_x + p.m_x; [cite: 237]
    resultat.m_y = m_y + p.m_y; [cite: 237]
    
    return resultat; // 返回计算后的点