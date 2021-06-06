#ifndef _HEADER_H_
#define _HEADER_H_



typedef struct
{
	int j; 
	int m; 
	int a; 
}date;    

    
typedef struct 
	{ 
	int idVoiture; 
	char marque[15]; 
	char nomVoiture[15]; 
	char couleur[7]; 
	int nbPlaces; 
	int prixJour; 
	char enLocation[4]; 
}voiture;

  
typedef struct
{ 
	float numContrat; 
	int idVoiture; 
	int idClient; 
	date debut; 
	date fin; 
	int cout; 
}contrat; 

typedef struct 
{ 
	int idClient; 
	char nom[20]; 
	char prenom[20]; 
	int cin; 
	char adresse[15]; 
	int telephone; 
 } client;
//_________________________________declare fonctions__________________________________________________
    //_____________________________fonctions principal________________________________________________
    int locationVoiture();
    int gestionDesVoitures();
    int menuPrincipal();
    int gestionDesClients();    
    //gestion des clients
   	int clientSearch(int);
	void listeDesClients();
   	void ajouterClients(int );
  	void modifierClient();
	void supprimerClient();
    //gestion des voitures
	int carSearch(int);
	void listeDesVoitures();
   	void ajouterVoitures();
  	void modifierVoiture();
	void supprimerVoiture();
	//Location d'une voiture
	int contratSearch(float);
	void visualiserContrat();
	void louerVoiture();
	void retournerVoiture();
	void modifierContrat();
    int Quitter();
    void invalidOption();
    int validDate(date);
    int days(date,date);
    void changeStatus(char* ,int );
    int exist(int* ,int ,int );
    int retour();
    int available(int);
    int Cavailable(float);
    void skip();

	

#endif



