#include "punt.h"
#include <iostream>
#include <cmath>

using namespace std;

Punt::Punt() : m_dim(0) {}

void Punt::llegeix()
{
    cin >> m_dim;
    m_coord.assign(m_dim, 0.0f);
    for (int i = 0; i < m_dim; i++)
        cin >> m_coord[i];
}

void Punt::mostra()
{
    cout << "(";
    for (int i = 0; i < m_dim; i++)
    {
        cout << m_coord[i];
        if (i != m_dim - 1) cout << ", ";
    }
    cout << ")";
}

float Punt::distancia(Punt& p)
{
    if (m_dim != p.m_dim) return -1.0f;

    float sum = 0.0f;
    for (int i = 0; i < m_dim; i++)
    {
        float d = m_coord[i] - p.m_coord[i];
        sum += d * d;
    }
    return sqrt(sum);
}

Punt Punt::suma(Punt& p)
{
    Punt r;
    if (m_dim != p.m_dim) return r;

    r.m_dim = m_dim;
    r.m_coord.assign(m_dim, 0.0f);
    for (int i = 0; i < m_dim; i++)
        r.m_coord[i] = m_coord[i] + p.m_coord[i];

    return r;
}