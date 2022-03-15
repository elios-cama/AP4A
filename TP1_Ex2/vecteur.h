#ifndef VECTEUR_H
#define VECTEUR_H



#include <iostream>
using namespace std;

//
// Type vecteur de int
//
class vecteur
{
public:
    int m_taille;
    float *tab = NULL;

// Constructeurs par defaut(void) , avec la taille du vect.(int), par copie(vecteur&)
    vecteur() : m_taille(0), tab(NULL){};
    vecteur(int taille);
    vecteur(const vecteur &other);
// Destructeur
    ~vecteur();
// Acces a la taille du vecteur

int getTaille();

// acces au element []
float& operator[](int n);

// affectation : =(vecteur), =(int)

vecteur& operator=(const vecteur& v);

// incrementation/decr. : ++(void), ++(int), --(void)

vecteur& operator++();
vecteur& operator++(int i );
vecteur& operator--();
// op. booleens : ==(vecteur&), <, >, <=, >=

bool operator==(const vecteur& v);
bool operator<(const vecteur& v);
bool operator>(const vecteur& v);
bool operator<=(const vecteur& v);
bool operator>=(const vecteur& v);
// op. binaires : +(vecteur&), -

vecteur& operator+(const vecteur& v);
vecteur& operator-(const vecteur& v);

// produit scalaire: *(vecteur&)

vecteur& operator*(const vecteur& v);

// produit par un scalaire: v * n, n * v



//vecteur operator*(int);
vecteur& operator*(int n);


//friend vecteur operator*(int, vecteur&);



// auto-adition : +=(vecteur&), -=

vecteur& operator+=(const vecteur& v);
vecteur& operator-=(const vecteur& v);

// Operateurs d'entree/sortie: <<, >>
friend ostream& operator<< (ostream&, vecteur&);
friend istream& operator>> (istream&, vecteur&);

};

#endif // VECTEUR_H
