class Complex {
public:
    // 初始化和获取数据 [cite: 244]
    void set(float real, float imag);
    float getReal();
    float getImag();

    // 显示：处理虚部为正或负的情况 [cite: 244, 245]
    void mostra();

    // 运算方法 [cite: 246, 247, 248, 249]
    Complex suma(Complex c);
    Complex resta(Complex c);
    Complex multiplica(Complex c);
    bool esIgual(Complex c);

private:
    float m_real; // 实部 [cite: 243]
    float m_imag; // 虚部 [cite: 243]
};