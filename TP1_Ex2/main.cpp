#include <iostream>
#include "vecteur.h"
using namespace std;
int
main()
{

    cout << "PROGRAMME DE TEST" << endl;

    // Constructeurs
    vecteur v1(4);
    v1[2] = 2;
    //cout << v1.getTaille() <<endl;
    v1[0] = 0;
    v1[1] = 0;
    v1[2] = 0;
    v1[3] = 0;
    cout << v1[2]<< endl;
    for(int i =0;i<v1.getTaille();i++){
        v1[i]--;
    };
    cout << v1[2] <<endl;
    vecteur v2(4);

    cout << v2.getTaille() << endl;

    v1 = v2;
    v2[1] = 8;
    v1[1] = 0;
    vecteur v3(1);
    vecteur v4(1);
    v3[0] = 8;
    v4[0] = 5;
    vecteur v5 = v3 * v4;
    v5*4;
    vecteur v6;
    v6 -= v5;
    cout << v1.getTaille() <<endl;
    cout << v2.getTaille() << endl;
    cout << v6[0] << endl;
    cout << "SORTIE TEST" << endl;
}




/*
 Mettre sous forme équivalente fonctionnelle:

 Vecteur v1(3), v2(3), v3(3), v4(3);
 v1[0] = v1[1] = v1[2] = 1,5;   // float& operator[](int p);
 v2 = v3=v1;                    // Vecteur& operator= (vecteur &);
 (v1= v2) = v3;                 //
 v1 = v2+ v3;                   // vecteur& operator+(vecteur&);
 v1 += v2;                      // vecteur& operator += (vecteur&)
 cout << v1 << "" << v2 << endl;
 v1 = 3.0 * v2;                 // vecteur operator*(float)
 v1=  v2 + 3;
 float f = v1[0];






 main(){
 Vecteur v1(3), v2(3), v3(3), v4(3);
 (v1.operator[](0)) = v1.operator[](1) = v1.operator[](2)  = 1.5;
 v2.operator = (v3.operator= v1);
 (v1.operator=(v2)).operator(v3);
 v1.operator = (v2.operator+(v3));
 v1.operator += (v2);
 v1.operator=(operator*(3.0, v2);
 float f = (v1.operator[](0);
}



Faire le corps de :
Veteur operator(float f){
    Vecteur r (this);
    for(int i=0,i<dim,i++)
    r.tab[i]=f;
    return r;
}


Vecteur& operator=(float f){
    for (int i=0,i<dim,i++){
        this-tab[1]=f; //(this).tab[i]*=f;
        return *this
    }
}


operator = (operator <<(operator<<(cout, v1), ""), v2), endl);

  */


/*
 Mettre sous forme fonctionnelle à l'aide de pointeur :
 vecteur* v1, v2, v3;
 v1 = new vecteur(3);
 v2 = new vecteur(3);
 v3 = new vecteur(3);
 (*v1)[0] = (*v1)[1] = (*v1)[2] = 1.5;
 *v2 = *v3 = *v1;              //v2->operator=(v3->operator=(*v1));
 (*v1 = *v2) = *v3 <=> (v1-> operator=(*v2)).operator=(*v3);
 *v1 = (*v2) +(*v3) <=> v1 ->operator=(v2->operator+(*v3);
 *v1 += *v2; <=> v1-> operaror+=(*v2);
 cout << *v1 << ""<<*v2<<"\n";
 *v1 = 3.0 *(*v1); <=> v1-> operator=(operator*(3.0, *v2));
 *v1 = *v2*3.0; <=> v1-> operator=(v2-> operator*(3.0));
 float f = *v1[0]; <=> float f = v1 -> operator[](0);
 delete v1; delete v2; delete v3;







class Vecteur{
    //...
    Vecteur operator+(Vecteur& v){
        Vecteur r=*this;
        for(int i=0,i<dim,i++){  //étape 2
            r.tab[i]+=v1.tab[i];
        }
        return r;
    } //étape 3
}


main(){
    Vecteur v1(3),v2(3),v3(3);
    //...
    //étape 1
    v1=v2+v3;
    //étape 4
}


Exercice : Donner l'état de la mémoire aux étapes:

1 :
pile :
 */
