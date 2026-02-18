int main() {
    Punt p1; 
    p1.m_x = 3.0; p1.m_y = 4.0; // 示例初始化
    
    Punt p2;
    p2.llegeix(); // 读取第二个点 [cite: 219]

    // 计算距离
    float dist = p1.distancia(p2); 
    // 计算两个点的和 (调用新方法)
    Punt pSuma = p1.suma(p2); 

    // 显示结果
    cout << "Primer punt: "; p1.mostra(); cout << endl;
    cout << "Segon punt: "; p2.mostra(); cout << endl;
    
    cout << "Distancia: " << dist << endl;
    
    cout << "Suma dels dos punts: "; 
    pSuma.mostra(); // 显示相加后的结果 
    cout << endl;

    return 0;
}