class Punt {
public:
    // 成员方法 (Mètodes)
    void llegeix();               // 读取坐标 [cite: 146]
    void mostra();                // 显示坐标 [cite: 147]
    float distancia(Punt &p);     // 计算与另一个点的距离 [cite: 148]

    // 成员属性 (Atributs)
    float m_x, m_y;               // 数据成员 [cite: 149]
};