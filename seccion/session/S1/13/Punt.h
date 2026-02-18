class Punt {
public:
    void llegeix();
    void mostra();
    float distancia(Punt &p);
    
    // 新增方法：接收一个 Punt 对象，返回两个点相加后的新 Punt 对象
    Punt suma(Punt &p); 

    float m_x, m_y;
};