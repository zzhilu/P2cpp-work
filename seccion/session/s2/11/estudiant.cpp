#include "estudiant.h"
using namespace std;

void Estudiant::inicialitza(string nom, string niu)
{
    m_nom = nom;
    m_niu = niu;
    m_nNotes = 0;
    for (int i = 0; i < MAX_NOTES; i++)
        m_notes[i] = 0.0f;
}

bool Estudiant::afegeixNota(float nota)
{
    if (m_nNotes >= MAX_NOTES) return false;
    m_notes[m_nNotes] = nota;
    m_nNotes++;
    return true;
}

float Estudiant::calculaNotaMitjana()
{
    if (m_nNotes == 0) return -1.0f;

    float sum = 0.0f;
    for (int i = 0; i < m_nNotes; i++)
        sum += m_notes[i];

    return sum / m_nNotes;
}

void afegeixEstudiant(Estudiant estudiants[], int nEstudiants, string nom, string niu)
{
    estudiants[nEstudiants].inicialitza(nom, niu);
}

bool afegeixNota(Estudiant estudiants[], int nEstudiants, string niu, float nota)
{
    for (int i = 0; i < nEstudiants; i++)
    {
        if (estudiants[i].getNiu() == niu)
            return estudiants[i].afegeixNota(nota);
    }
    return false;
}

float calculaNotaMitjana(Estudiant estudiants[], int nEstudiants, string niu)
{
    for (int i = 0; i < nEstudiants; i++)
    {
        if (estudiants[i].getNiu() == niu)
            return estudiants[i].calculaNotaMitjana();
    }
    return -1.0f;
}