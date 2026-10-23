#include<iostream>
using namespace std;
class Boite{
   double longueur;
   double largeur;
   double hauteur;
   static int nbBoites ;
public:
   Boite(double longueur,double largeur,double hauteur){
    this->hauteur = hauteur;
    this->largeur = largeur;
    this->longueur = longueur;
    nbBoites += 1;
   }
   static int getNombreBoites(){
    return nbBoites;
   }
};
int  Boite::nbBoites = 0;
int main(){
    Boite b1(12,4,6);
    Boite b2(12,4,6);
    Boite b3(12,4,6);

    cout<<"Nombre total des boites :" << Boite::getNombreBoites();
    return 0;
}