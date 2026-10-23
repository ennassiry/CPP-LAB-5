#include<iostream>
using namespace std;
class Produit{
    string nom  ;
    double prix;
   static  double tauxTVA;
public:
    Produit(string nom ,double prix){
        this->nom = nom;
        this->prix = prix;
    }
    double getPrixTTC(){
        return prix * (1+tauxTVA);
    }
    static void modifierTVA(double nouveauTaux){
            tauxTVA = nouveauTaux;
    }
    string getNom(){return nom;}


};
double Produit::tauxTVA = 0.20;
int main(){
  Produit p1("Cafe",10);
  Produit p2("Phone",1000);
  Produit p3("Book",350);
  Produit produits[] = {p1,p2,p3};
  cout<<"tauxTVA = 20%\n";
  for (int i = 0; i < 3; i++)
  {
    cout<<"produit "<<i<<": "<<produits[i].getNom()<<" , "<<produits[i].getPrixTTC()<<"DH\n";
  }
  cout<<"-------------------------------\n";
    cout<<"tauxTVA = 15%\n";

Produit::modifierTVA(0.15);
  for (int i = 0; i < 3; i++)
  {
    cout<<"produit "<<i<<": "<<produits[i].getNom()<<" , "<<produits[i].getPrixTTC()<<"DH\n";
  }
    return 0;
}
