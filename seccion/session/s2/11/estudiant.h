#ifndef ESTUDIANT_H
#define ESTUDIANT_H

#include <string>
using namespace std;

class Estudiant
{
public:
    string getNom() { return m_nom; }
    string getNiu() { return m_niu; }

    void inicialitza(string nom, string niu);
    bool afegeixNota(float nota);
    float calculaNotaMitjana();

private:
    enum { MAX_NOTES = 5 };
    string m_nom;
    string m_niu;
    float m_notes[MAX_NOTES];
    int m_nNotes;
};

void  afegeixEstudiant(Estudiant estudiants[], int nEstudiants, string nom, string niu);
bool  afegeixNota(Estudiant estudiants[], int nEstudiants, string niu, float nota);
float calculaNotaMitjana(Estudiant estudiants[], int nEstudiants, string niu);

#endif