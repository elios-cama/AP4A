#include "vecteur.h"



vecteur::vecteur(int t){
    m_taille = t;
    tab= new float[t];
    for(int i = 0; i < m_taille; i = i + 1){
        tab[i]=0;
    }
}

vecteur::vecteur(const vecteur &other){
    m_taille = other.m_taille;
    tab = new float [m_taille];
    for (int i = 0; i < m_taille; i = i + 1){
        tab[i] = other.tab[i];
    }
}


// Destructeur
vecteur:: ~vecteur(){
    if (tab) delete[]tab;
}
// Nombre d'elements

//int vecteur::longueur(void)
//{
//}
int vecteur::getTaille(){
    return m_taille;
};

// Acces aux elements
float& vecteur::operator[](int i){
    return tab[i];
}


// affectation : =(vecteur), =(int)

vecteur& vecteur::operator=(const vecteur& v){

    this-> m_taille = v.m_taille;
    for( int i = 0; i< m_taille; ++i){
       this-> tab[i] = v.tab[i];
    }
    return *this;
}


// incrementation/decr. : ++, ++(int), --
vecteur& vecteur::operator++(){
    for(int i = 0; i<m_taille;++i){
        this->tab[i] = this->tab[i]++;
    }
    return *this;

}
vecteur& vecteur::operator++(int i ){
    for(int i = 0; i<m_taille;++i){
        this->tab[i] = this->tab[i]+ i;
    }
    return *this;
}

vecteur& vecteur::operator--(){
    for(int i = 0; i<m_taille;++i){
        this->tab[i] = this->tab[i]--;
    }
    return *this;

}
// op. booleens : ==, <, >, <=, >=

bool vecteur::operator==(const vecteur &v){
    int diff = 0;
    if(this->getTaille() == v.m_taille){
        for(int i =0;i<m_taille;i++){
            if(this->tab[i] != v.tab[i]){
                diff++;
            }
        }
    }
    else{
        diff++;
    }
    if(diff == 0){
        return true;
    }else{
        return false;
    }
}

bool vecteur::operator<(const vecteur &v){
    int diff = 0;
    if(this->getTaille() == v.m_taille){
        for(int i =0;i<m_taille;i++){
            if(this->tab[i] < v.tab[i]){
                diff++;
            }
        }
    }

    if(diff == m_taille){
        return true;
    }else{
        return false;
    }
}
bool vecteur::operator>(const vecteur &v){
    int diff = 0;
    if(this->getTaille() == v.m_taille){
        for(int i =0;i<m_taille;i++){
            if(this->tab[i] > v.tab[i]){
                diff++;
            }
        }
    }

    if(diff == m_taille){
        return true;
    }else{
        return false;
    }
}

bool vecteur::operator<=(const vecteur &v){
    if(*this == v){
        return true;
    }else{
        int diff = 0;
        if(this->getTaille() == v.m_taille){
            for(int i =0;i<m_taille;i++){
                if(this->tab[i] < v.tab[i]){
                    diff++;
                }
            }
        }

        if(diff == m_taille){
            return true;
        }else{
            return false;
        }
    }
}
bool vecteur::operator>=(const vecteur &v){
    if(*this == v){
        return true;
    }else{
        int diff = 0;
        if(this->getTaille() == v.m_taille){
            for(int i =0;i<m_taille;i++){
                if(this->tab[i] > v.tab[i]){
                    diff++;
                }
            }
        }

        if(diff == m_taille){
            return true;
        }else{
            return false;
        }
    }
}
// op. binaires : +, -

vecteur& vecteur::operator+(const vecteur &v){
    if(this->getTaille() == v.m_taille){
        for(int i =0;i<m_taille;i++){
            this->tab[i] = this->tab[i] + v.tab[i];
        }
    }
    return *this;
}
vecteur& vecteur::operator-(const vecteur &v){
    if(this->getTaille() == v.m_taille){
        for(int i =0;i<m_taille;i++){
            this->tab[i] = this->tab[i] - v.tab[i];
        }
    }
    return *this;
}


// produit scalaire : *

vecteur& vecteur::operator*(const vecteur &v){
    if(this->getTaille() == v.m_taille){
        for(int i =0;i<m_taille;i++){
            this->tab[i] = this->tab[i] * v.tab[i];
        }
    }
    return *this;
}


// produit par un scalaire: n * v, v * n


//produit par un entier

vecteur& vecteur::operator*(int n){

        for(int i =0;i<m_taille;i++){
            this->tab[i] = this->tab[i] *n;

    }
    return *this;
}

// auto-adition : +=, -=

vecteur&  vecteur::operator+=(const vecteur& v){
    if(tab != NULL){
        delete[]tab;
    }
    m_taille = v.m_taille;
    tab = new float[m_taille];
    for( int i = 0; i< m_taille; ++i){
       this-> tab[i] = v.tab[i];
    }
    return *this;
}
vecteur&  vecteur::operator-=(const vecteur& v){
    if(tab != NULL){
        delete[]tab;
    }
    m_taille = v.m_taille;
    tab = new float[m_taille];
    for( int i = 0; i< m_taille; ++i){
       this-> tab[i] = this->tab[i] - v.tab[i];
    }
    return *this;
}

//Operateurs d'entree/sortie: <<, >>
/*ostream& operator<< (ostream& o, vecteur& a)
{
    return o;
}

istream& operator>> (istream& i, vecteur& a)
{
    return i;
}
*/


