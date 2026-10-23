#include <iostream>
using namespace std;
class Utilisateur
{
protected:
    string nom;
    string role;
    static int nbUtilisateursConnectes;

public:
    Utilisateur(string nom, string role)
    {
        this->nom = nom;
        this->role = role;
        nbUtilisateursConnectes += 1;
    }

    ~Utilisateur()
    {
        nbUtilisateursConnectes -= 1;
    }

    static int getNbUtilisateursConnectes()
    {
        return nbUtilisateursConnectes;
    }
};
int Utilisateur::nbUtilisateursConnectes = 0;
int main()
{
    Utilisateur* u1 = new Utilisateur("mohammed", "admin");
    Utilisateur* u2 = new Utilisateur("mohammed", "admin");

    cout << Utilisateur::getNbUtilisateursConnectes()<<"\n";
    Utilisateur* u3 = new Utilisateur("mohammed", "admin");
    cout << Utilisateur::getNbUtilisateursConnectes()<<"\n";
    delete u3;
    cout << Utilisateur::getNbUtilisateursConnectes();

    return 0;
}