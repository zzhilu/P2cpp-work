#ifndef PUNT_H
#define PUNT_H

#include <vector>

class Punt
{
public:
    Punt();

    void llegeix();
    void mostra();

    float distancia(Punt& p);
    Punt  suma(Punt& p);

private:
    int m_dim;
    std::vector<float> m_coord;
};

#endif