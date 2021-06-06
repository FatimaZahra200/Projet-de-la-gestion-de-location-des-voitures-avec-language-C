
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <math.h>
#include <conio.h>
#include <locale.h>
  
#include "header.h"
#define max 1000

    
 
 int menuPrincipal()
{
    int choix;

	printf("\n                             \xda\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xbf");
	printf("\n                             \xb3   Menu Principal  \xb3");
	printf("\n                             \xc0\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xd9");

    printf("\n");

    printf("\n               \xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb");
    printf("\n               \xba                                              \xba");
    printf("\n               \xba                                              \xba");
    printf("\n               \xba    Location..............................1   \xba");
    printf("\n               \xba                                              \xba");
    printf("\n               \xba    Gestion voiture......................2    \xba");
    printf("\n               \xba                                              \xba");
    printf("\n               \xba    Gestion clients.......................3   \xba");
    printf("\n               \xba                                              \xba");
    printf("\n               \xba    Quitter...............................4   \xba");
    printf("\n               \xba                                              \xba");
    printf("\n               \xba                                              \xba");
    printf("\n               \xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc");
    printf("\n\n                                Votre choix  :  ");

    scanf("%d",&choix);

    return (choix);
}

  
int gestionDesVoitures()
{
    int choix;

	printf("\n                          \xda\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xbf");
	printf("\n                          \xb3   Gestion des Voitures  \xb3");
	printf("\n                          \xc0\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xd9");

    printf("\n");

    printf("\n               \xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb");
    printf("\n               \xba                                              \xba");
    printf("\n               \xba                                              \xba");
    printf("\n               \xba    Liste des voitures....................1   \xba");
    printf("\n               \xba                                              \xba");
    printf("\n               \xba    Ajouter voiture.......................2   \xba");
    printf("\n               \xba                                              \xba");
    printf("\n               \xba    Modifier voiture......................3   \xba");
    printf("\n               \xba                                              \xba");
    printf("\n               \xba    Supprimer voiture.....................4   \xba");
    printf("\n               \xba                                              \xba");
	printf("\n               \xba    Retour................................5   \xba");
	printf("\n               \xba                                              \xba");
    printf("\n               \xba                                              \xba");
    printf("\n               \xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc");
    printf("\n\n                                Votre choix  :  ");

    scanf("%d",&choix);

    return (int)choix;
}  


int locationVoiture()
{
    int choix;

	printf("\n                       \xda\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xbf");
	printf("\n                       \xb3   Location d'une voiture   \xb3");
	printf("\n                       \xc0\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xd9");

    printf("\n");

    printf("\n               \xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb");
    printf("\n               \xba                                              \xba");
    printf("\n               \xba                                              \xba");
    printf("\n               \xba    Visualiser contrat....................1   \xba");
    printf("\n               \xba                                              \xba");
    printf("\n               \xba    Louer voiture.........................2   \xba");
    printf("\n               \xba                                              \xba");
    printf("\n               \xba    Retourner voiture.....................3   \xba");
    printf("\n               \xba                                              \xba");
	printf("\n               \xba    Modifier contrat......................4   \xba");
	printf("\n               \xba                                              \xba");
	printf("\n               \xba    Retour................................5  \xba");
	printf("\n               \xba                                              \xba");
    printf("\n               \xba                                              \xba");
    printf("\n               \xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc");
    printf("\n\n                                Votre choix  :  ");

    scanf("%d",&choix);
		
    return (int)choix;
}  

 

int gestionDesClients()
{
    int choix;

	printf("\n                        \xda\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xbf");
	printf("\n                        \xb3    Gestion des Clients   \xb3");
	printf("\n                        \xc0\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xd9");

    printf("\n");

    printf("\n               \xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb");
    printf("\n               \xba                                              \xba");
    printf("\n               \xba                                              \xba");
    printf("\n               \xba    Liste des clients.....................1   \xba");
    printf("\n               \xba                                              \xba");
    printf("\n               \xba    Ajouter client........................2   \xba");
    printf("\n               \xba                                              \xba");
    printf("\n               \xba    Modifier client.......................3   \xba");
    printf("\n               \xba                                              \xba");
    printf("\n               \xba    Supprimer client......................4   \xba");
    printf("\n               \xba                                              \xba");
	printf("\n               \xba    Retour................................5   \xba");
	printf("\n               \xba                                              \xba");
    printf("\n               \xba                                              \xba");
    printf("\n               \xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc");
    printf("\n\n                                Votre choix  :  ");

    scanf("%d",&choix);

    return (int)choix;
}  

//Les Fonctions
void invalidOption()
{
   	printf("\n                          \xda\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xbf");
	printf("\n                          \xb3 ERROR :: invalid option ! \xb3");
	printf("\n                          \xc0\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xd9");
	printf("\n                          \xda\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xbf");
	printf("\n                          \xb3 Attender 3 secondes ...   \xb3");
	printf("\n                          \xc0\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xd9");
	sleep(5/2);
	system("cls");
  
    
   }  
   
int retour()
{
	int n;
	printf("\n\n                                               ***** Voulez-vous retourner  au menu principal ou au menu precedent? ");
	printf("\n\n                                                     0:Menu principal                          1: Menu precedent");
	printf("\n\n                                                                      Votre choix  :  ");
	scanf("%d",&n);
	return n;
}
    //_________________________________________________________________________________________________________________________
int validDate(date d)
{
	
	if(d.a>=2020 && d.a<=9999)
    {
        
        if(d.m>=1 && d.m<=12)
        {
            
            if((d.j>=1 && d.j<=31) && (d.m==1 || d.m==3 || d.m==5 || d.m==7 || d.m==8 || d.m==10 || d.m==12))
                return 1; 
            else if((d.j>=1 && d.j<=30) && (d.m==4 || d.m==6 || d.m==9 || d.m==11))
                return 1;
            else if((d.j>=1 && d.j<=28) && (d.m==2))
                return 1;
            else if(d.j==29 && d.m==2 && (d.a%400==0 ||(d.a%4==0 && d.a%100!=0)))
                return 1;
            else
                printf("\n                      ERREUR SYNTAXE DATE::JOUR\n\n");
                return 0;
        }
        else
        {
            printf("\n                       ERREUR SYNTAXE DATE::MOIS\n\n");
            return 0;
        }
    }
    else
    { 
        printf("\n                      ERREUR SYNTAXE DATE::ANNEE\n\n");
        return 0;
    }      
}
  


int days(date s,date e)
{ 
	
	int da,ds,t;
	int daysYear[12] = {0,31,59,90,120,151,181,212,243,273,304,334};
    da = e.j + daysYear[e.m-1];
    ds = s.j + daysYear[s.m-1];
	  t=(e.a-s.a)*365.2422 + da - ds;
	return t;
}

int Quitter()
{
	int q;
	printf("\n\n\n                          \xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb");
   	printf("\n                          \xb3                         \xb3");
	printf("\n                          \xb3  QUITTER LE PROGRAMME?  \xb3");
	printf("\n                          \xb3                         \xb3");
	printf("\n                          \xb3 0:OUI            1:NON  \xb3");
	printf("\n                          \xb3                         \xb3");
	printf("\n                          \xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc");
	printf("\n\n                                Votre choix  :  ");
	scanf("%d",&q);
			return q;  	
}


int exist(int v[],int id,int n){
	int j;
	for(j=0; j<n; j++)
	{
	if (id==v[j])
		return 1;
	}
	return 0; 
}



int available(int id)
{
		FILE* liste=NULL,*temp=NULL;
		voiture t;
		liste=fopen("listeVoitures.txt","r");
		if(liste!=NULL)
		{
			do{
				fscanf(liste,"%d ; %s ; %s ; %s ; %d ; %d ; %s\n",&t.idVoiture,&t.marque,&t.nomVoiture,&t.couleur,&t.nbPlaces,&t.prixJour,&t.enLocation);
				if(t.idVoiture == id)
				{
					if(t.enLocation == "n" || t.enLocation == "N")	
					{
						fclose(liste);
						return 1;
					}
				}
			}while(!feof(liste));
			fclose(liste);
		}
		else printf("\n\n     311 ERREUR D'OUVERTURE DE FICHIER");	
		return 0;	
}



int Cavailable(float  id)
{
		FILE* liste=NULL,*temp=NULL;
		voiture v;
		client c;   

		contrat ct;
		int duree;
		liste=fopen("listeContrats.txt","r");
		if(liste!=NULL)
		{
			do{
				fscanf(liste," %f ; [ %d ; %s ; %s ; %s ; %d ; %d ; %s ] ; [ %d ; %s ; %s ; %d ; %s ; %d ] ; %d / %d / %d ;  %d / %d / %d ; %d ; %d\n",&ct.numContrat,&ct.idVoiture,&v.marque,&v.nomVoiture,&v.couleur,&v.nbPlaces,&v.prixJour,&v.enLocation,&ct.idClient,&c.nom,&c.prenom,&c.cin,&c.adresse,&c.telephone,&ct.debut.j,&ct.debut.m,&ct.debut.a,&ct.fin.j,&ct.fin.m,&ct.fin.a,&ct.cout,&duree);
				if(ct.numContrat == id)
				{
					{
						fclose(liste);
						return 0;
					}
				}
			}while(!feof(liste));
			fclose(liste);
		}
		else printf("\n\n     340 ERREUR D'OUVERTURE DE FICHIER");	
		return 1;	
}



void changeStatus(char c[],int id)
{
		FILE* liste=NULL,*temp=NULL;
		voiture t;
		liste=fopen("listeVoitures.txt","r");
		temp=fopen("voitureTemp.txt","a");
		if(liste!=NULL)
		{
			do{
				fscanf(liste,"%d ; %s ; %s ; %s ; %d ; %d ; %s\n",&t.idVoiture,&t.marque,&t.nomVoiture,&t.couleur,&t.nbPlaces,&t.prixJour,&t.enLocation);
				if(t.idVoiture == id)
				{
					strcpy(t.enLocation,c);
					fprintf(temp,"%d ;%s ;%s ;%s ;%d ;%d ;%s\n",t.idVoiture,t.marque,t.nomVoiture,t.couleur,t.nbPlaces,t.prixJour,t.enLocation); 
				}
				else fprintf(temp,"%d ;%s ;%s ;%s ;%d ;%d ;%s\n",t.idVoiture,t.marque,t.nomVoiture,t.couleur,t.nbPlaces,t.prixJour,t.enLocation); 
			}while(!feof(liste));
			fclose(liste);
			fclose(temp);
			remove("listeVoitures.txt");
			rename("voitureTemp.txt","listeVoitures.txt");
		}
		else printf("\n\n     368 ERREUR D'OUVERTURE DE FICHIER");
}


int clientSearch(int id)
{
	FILE* liste=NULL;	
	client c;
	liste=fopen("listeClients.txt","r");
	if(liste!=NULL)
	{	
		do{
			fscanf(liste,"\n%d ; %s ; %s ; %d ; %s ; %d",&c.idClient,&c.nom,&c.prenom,&c.cin,&c.adresse,&c.telephone);
			if(id==c.idClient)
			{
				fclose(liste);
				return 1;
			}
		}while(fgetc(liste)!=EOF);
		fclose(liste);
		return 0;
	}
	else
	{
		printf("\n\n  392 ERREUR D'OUVERTURE DE FICHIER ! \n");
		fclose(liste);
		return 0;
	}
}



int carSearch(int id)
{
	FILE* liste=NULL;
	voiture v;
	liste=fopen("listeVoitures.txt","r");
	if(liste!=NULL)
	{
		do
		{
			fscanf(liste,"%d ; %s ; %s ; %s ; %d ; %d ; %s\n",&v.idVoiture,&v.marque,&v.nomVoiture,&v.couleur,&v.nbPlaces,&v.prixJour,&v.enLocation);

		}while(!feof(liste));
	}
	else
	{
		printf("\n\n   419  Erreur d'ouverture de fichier ! \n");
		fclose(liste);
		return 0;
	}	
	fclose(liste);
	return 0 ;
}


//GESTION DES VOITURES
void ajouterVoitures()
{
	int i,j=0,n;
	voiture v;
	FILE* liste=NULL;
	liste=fopen("listeVoitures.txt","a");

	printf("\n\n                                  *** Combien de voitures voulez-vous ajouter?  : ");
	scanf("%d",&n);	
	for(i=0; i<n; i++)
	{
		do{
			if(j)
			{
				printf("\n\n      ce VOITURE id  existe deja");
				printf("\n    \xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc\n\n");
			}
			printf("\n\n    \xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd VOITURE %d \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\n\n",i+1);
			printf("    \xba Entrez Identifiant de Voiture : ");
			scanf("%d",&v.idVoiture);
			j++;
		}while(carSearch(v.idVoiture));// 
		j=0;	
		printf("\n");
		printf("    \xba Saisir la marque : ");
		scanf("%s",v.marque);
		printf("\n");
		printf("    \xba Donnez le nom de Voiture : ");
		scanf("%s",v.nomVoiture);
		printf("\n");
		printf("    \xba Quelle est la couleur de Voiture ? : ");
		scanf("%s",v.couleur);
		printf("\n");
		printf("    \xba Combien de sieges il a? : ");
		scanf("%d",&v.nbPlaces);
		printf("\n");
		printf("    \xba Combien cela coute-t-il par jour? [En DH] : ");
		scanf("%d",&v.prixJour);
		printf("\n");
		printf("    \xba Est-ce que en location? [O/N] : ");
		scanf("%s",v.enLocation);	
		printf("\n    \xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc\n\n");
		fprintf(liste,"%d ; %s ; %s ; %s ; %d ; %d ; %s\n",v.idVoiture,v.marque,v.nomVoiture,v.couleur,v.nbPlaces,v.prixJour,v.enLocation);		
		}
	printf("\n**********************************************************************\n");
	fclose(liste);
	
}

 
 
void listeDesVoitures()
{
	int i=0;
	FILE* liste=NULL;
	voiture  v;
	liste=fopen("listeVoitures.txt","r");
	printf("\n\n                                                      ******** La liste des VOITURES deja existants !  ******** \n\n ");

		printf("\n                           \xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb");
        printf("\n        -----------        \xba   VOITURE ID   \xba\xba     MARQUE     \xba\xba NOM DE VOITURE \xba\xba COULEUR \xba\xba NB PLACES \xba\xba  PRIX/JOUR  (DH) \xba\xba EN LOCANTION \xba");
	    printf("\n                           \xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc\xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc\xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc\xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc\xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc\xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc\xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc");			 			 
		    
	 if (liste != NULL) 
		{ 
		    do{ 
		    i++;
		    	fscanf(liste,"%d ; %s ; %s ; %s ; %d ; %d ; %s\n",&v.idVoiture,&v.marque,&v.nomVoiture,&v.couleur,&v.nbPlaces,&v.prixJour,&v.enLocation);
		        printf("\n  \xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb");
				printf("\n  \xba      [VOITURE N:%03d]: \xba\xba%12d    \xba\xba%15s \xba\xba%15s \xba\xba%7s  \xba\xba%3d        \xba\xba  %5d           \xba\xba %3s          \xba",i,v.idVoiture,v.marque,v.nomVoiture,v.couleur,v.nbPlaces,v.prixJour,v.enLocation); 
		        printf("\n  \xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc\xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc\xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc\xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc\xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc\xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc\xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc\xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc");			 
		    }while(!feof(liste));
		}
		else printf("\n\n                                               *****  Il n'y a aucune voiture a afficher !\n") ;
	fclose(liste);
	
	
}



void supprimerVoiture()
{
	int s,i=0;
	FILE* liste=NULL, *temp=NULL;

	voiture v;
	int id,choix;

	start:
		
		printf("\n\n            *** Tapez l'identifiant de Voiture que vous souhaitez supprimer : ");
		scanf("%d",&id);
		liste=fopen("listeVoitures.txt","r");
		temp=fopen("vtempListe.txt","a");
	   	if(liste!=NULL)
		   	{
			   	do{
			   		fscanf(liste,"%d ; %s ; %s ; %s ; %d ; %d ; %s\n",&v.idVoiture,&v.marque,&v.nomVoiture,&v.couleur,&v.nbPlaces,&v.prixJour,&v.enLocation);
					if(id==(v.idVoiture))
					{
						printf("\n\n\n                          \xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb");
						printf("\n                          \xb3                         \xb3");
				        printf("\n                          \xb3        CONTINUEZ?       \xb3");
				        printf("\n                          \xb3                         \xb3");
					    printf("\n                          \xb3 0:OUI            1:NON  \xb3");
				        printf("\n                          \xb3                         \xb3");
				        printf("\n                          \xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc");
				        printf("\n\n                                Votre choix  :  ");
				        scanf("%d",&s);
						if(s)
						 	goto out;
						printf("\n                           \xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb");
				        printf("\n        -----------        \xba   VOITURE ID   \xba\xba     MARQUE     \xba\xba NOM DE VOITURE \xba\xba COULEUR \xba\xba NB PLACES \xba\xba  PRIX/JOUR  (DH) \xba\xba EN LOCANTION \xba");
					    printf("\n                           \xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc\xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc\xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc\xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc\xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc\xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc\xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc");			 			 
					    printf("\n  \xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb");
						printf("\n  \xba      [VOITURE N:%03d]: \xba\xba%12d    \xba\xba%15s \xba\xba%15s \xba\xba%7s  \xba\xba%3d        \xba\xba  %5d           \xba\xba %3s          \xba",i,v.idVoiture,v.marque,v.nomVoiture,v.couleur,v.nbPlaces,v.prixJour,v.enLocation); 
			    	    printf("\n  \xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc\xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc\xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc\xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc\xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc\xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc\xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc\xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc");			 
						printf("\n\n                                                    \xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb");
					   	printf("\n                                                    \xb3                                    \xb3");
						printf("\n                                                    \xb3         mise a jour reussie        \xb3");
						printf("\n                                                    \xb3                                    \xb3");
						printf("\n                                                    \xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc");
						i++;				
					}
					else   
					{	
						out:
							fprintf(temp,"%d ; %s ; %s ; %s ; %d ; %d ; %s\n",v.idVoiture,v.marque,v.nomVoiture,v.couleur,v.nbPlaces,v.prixJour,v.enLocation); 
					}
			    		
				}while(fgetc(liste)!=EOF);
					
				fclose(temp);
				fclose(liste);
				remove("listeVoitures.txt");
				rename("vtempListe.txt","listeVoitures.txt");
			if(!i) 
			{
				printf("\n\n                           ************************************* \n");
				printf("\n                           ******* invalide idClient ! ********\n");
				printf("\n                           ************************************* \n\n");
				printf("\n\n                                        ********* Voulez-vous Retapez l'identifiant? ********");
				printf("\n\n                                         0: NON                                      1: OUI ");
				printf("\n\n                                                      Votre choix  :  ");					
				scanf("%d",&choix);
				if(choix)
					goto start;		
			}
	}
	else printf("\n\n    585 Erreur d'ouverture de fichier !");
}


		
void modifierVoiture()
{
	FILE* liste=NULL, *temp=NULL;

	voiture v,t;
	int id,choix;

	start:
		
		printf("\n\n            *** Tapez l'identifiant de Voiture que vous souhaitez modifier : ");
		scanf("%d",&id);
	    if(carSearch(id))
	    {
		    	liste=fopen("listeVoitures.txt","r");
		    	temp=fopen("vtempListe.txt","a");
		    	do{
		    		fscanf(liste,"%d ; %s ; %s ; %s ; %d ; %d ; %s\n",&v.idVoiture,&v.marque,&v.nomVoiture,&v.couleur,&v.nbPlaces,&v.prixJour,&v.enLocation);
					if(id==(v.idVoiture))
					{
						printf("\n\n                \xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb");
						printf("\n                \xba   Saisir  les nouvelles informations de ce Voiture :  \xba");
						printf("\n                \xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc");
						
			  			printf("\n\n    \xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd VOITURE A MODIFIER \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\n\n");
						printf("    \xba Entrez Identifiant de Voiture : ");
						scanf("%d",&t.idVoiture);
						printf("\n");
						printf("    \xba Saisir la marque : ");
						scanf("%s",t.marque);
						printf("\n");
						printf("    \xba Donnez le nom de Voiture : ");
						scanf("%s",t.nomVoiture);
						printf("\n");
						printf("    \xba Quelle est la couleur de Voiture ? : ");
						scanf("%s",t.couleur);
						printf("\n");
						printf("    \xba Combien de sieges il a? : ");
						scanf("%d",&t.nbPlaces);
						printf("\n");
						printf("    \xba Combien cela coute-t-il par jour? [En DH] : ");
						scanf("%d",&t.prixJour);
						printf("\n");
						printf("    \xba Est-ce que en location? [O/N] : ");
						scanf("%s",t.enLocation);	
						printf("\n    \xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc\n\n");
						fprintf(temp,"%d ; %s ; %s ; %s ; %d ; %d ; %s\n",t.idVoiture,t.marque,t.nomVoiture,t.couleur,t.nbPlaces,t.prixJour,t.enLocation); 
						printf("\n               \xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb");
					   	printf("\n               \xb3                                    \xb3");
						printf("\n               \xb3         mise a jour reussie        \xb3");
						printf("\n               \xb3                                    \xb3");
						printf("\n               \xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc");
					}
					else
					{	
						fprintf(temp,"%d ; %s ; %s ; %s ; %d ; %d ; %s\n",v.idVoiture,v.marque,v.nomVoiture,v.couleur,v.nbPlaces,v.prixJour,v.enLocation); 
					}
				}while(!feof(liste));
				fclose(temp);
				fclose(liste);
				remove("listeVoitures.txt");
				rename("vtempListe.txt","listeVoitures.txt");
		}
	else 
		{
				printf("\n\n                           ************************************* \n");
				printf("\n                           ******* invalide idVoiture ! ********\n");
				printf("\n                           ************************************* \n\n");
				printf("\n\n                                        ********* Voulez-vous Retapez l'identifiant? ********");
				printf("\n\n                                         0: NON                                      1: OUI ");
				printf("\n\n                                                      Votre choix  :  ");					
				scanf("%d",&choix);
				if(choix)
					goto start;
				
		}
									    	
}
			
//GESTION DES CLIENTS

void ajouterClients(int n)
{
	int i,j=0;
	client c;
	FILE* liste=NULL;
	liste=fopen("listeClients.txt","a");

	for(i=0; i<n; i++)
	{
		printf("\n\n    \xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd CLIENT %d \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\n\n",i+1);
		do{
			if(j)
			{
				printf("\n\n      ce CLIENT id  existe deja");
				printf("\n    \xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc\n\n");
			}
			printf("    \xba Entrez Identifiant du Client : ");
			scanf("%d",&c.idClient);
			printf("\n");
			j++;	
		}while(clientSearch(c.idClient));
		j=0;
		printf("    \xba Saisir le nom du Client : ");
		scanf("%s",c.nom);
		printf("\n");
		printf("    \xba Donnez le prenom du Client : ");
		scanf("%s",c.prenom);
		printf("\n");
		printf("    \xba Quelle est la CIN du Client : ");
		scanf("%d",&c.cin);
		printf("\n");
		printf("    \xba Donnez l'adresse du client : ");
		scanf("%s",c.adresse);
		printf("\n");
		printf("    \xba Saisir le numero du telephone du Client : ");
		scanf("%d",&c.telephone);	
		printf("\n    \xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc\n\n",i+1);
		fprintf(liste,"%d ; %s ; %s ; %d ; %s ; %d\n",c.idClient,c.nom,c.prenom,c.cin,c.adresse,c.telephone);		
		}
	printf("\n**********************************************************************\n");
	fclose(liste);
	
}

 
void listeDesClients()
{

	int i=0;
	FILE* liste=NULL;
	client  c;
	liste=fopen("listeClients.txt","r");

	printf("\n\n                                                      ******** La liste des Clients deja existants !  ******** \n\n ");
	printf("\n                          \xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb");
	printf("\n        -----------       \xba  CLIENT ID  \xba\xba         NOM         \xba\xba        PRENOM       \xba\xba   CIN   \xba\xba     ADRESSE     \xba\xba    NEMURO DE TELEPHONE     \xba");
	printf("\n                          \xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc\xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc\xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc\xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc\xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc\xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc");
		     
	if (liste != NULL) 
		{ 

		   do{ 
		    i++;
		    	fscanf(liste,"%d ; %s ; %s ; %d ; %s ; %d\n",&c.idClient,&c.nom,&c.prenom,&c.cin,&c.adresse,&c.telephone);
			    printf("\n  \xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb");
				printf("\n  \xba  [ CLIENT N:%03d ] :  \xba\xba%12d \xba\xba%20s \xba\xba%20s \xba\xba %6d  \xba\xba%15s  \xba\xba          %010d        \xba",i,c.idClient,c.nom,c.prenom,c.cin,c.adresse,c.telephone); 
			    printf("\n  \xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc\xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc\xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc\xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc\xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc\xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc\xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc");
		    }while(!feof(liste)); 
		    fclose(liste);
		}
		else printf("\n\n                                               *****  Il n'y a aucune CLIENT a afficher !\n") ;
	
	
	
}


void modifierClient()
{
	FILE* liste=NULL, *temp=NULL;

	client c;
	int id,choix;
	start:
		printf("\n\n            *** Tapez l'identifiant du Client qui tu veux modifier : ");
		scanf("%d",&id);
	    if(clientSearch(id))
	    {
		    	liste=fopen("listeClients.txt","r");
		    	temp=fopen("ctempListe.txt","a");
		    	if(liste != NULL)
				{

			    	do{
			    	fscanf(liste,"%d ; %s ; %s ; %d ; %s ; %d\n",&c.idClient,&c.nom,&c.prenom,&c.cin,&c.adresse,&c.telephone);
						if(id == c.idClient)
						{
							
							printf("\n\n                \xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb");
							printf("\n                \xba   S aisir  les nouvelles informations de ce Client :  \xba");
							printf("\n                \xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc");
							
							printf("\n\n    \xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd CLIENT A MODIFIER ! \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\n\n");
							printf("    \xba Entrez Identifiant de  Client : ");
							scanf("%d",&c.idClient);
							printf("\n");
							printf("    \xba Saisir le nom du Client : ");
							scanf("%s",c.nom);
							printf("\n");
							printf("    \xba Donnez le prenom du Client : ");
							scanf("%s",c.prenom);
							printf("\n");
							printf("    \xba Quelle est la CIN du Client : ");
							scanf("%d",&c.cin);
							printf("\n");
							printf("    \xba Donnez l'adresse du client : ");
							scanf("%s",c.adresse);
							printf("\n");
							printf("    \xba Saisir le numero du telephone du Client : ");
							scanf("%d",&c.telephone);	
							printf("\n    \xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc\n\n");
							fprintf(temp,"%d ; %s ; %s ; %d ; %s ; %d\n",c.idClient,c.nom,c.prenom,c.cin,c.adresse,c.telephone); 
							printf("\n                          \xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb");
						   	printf("\n                          \xb3                                    \xb3");
							printf("\n                          \xb3         mise a jour reussie        \xb3");
							printf("\n                          \xb3                                    \xb3");
							printf("\n                          \xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc");
						}
						else
						{	
							fprintf(temp,"%d ; %s ; %s ; %d ; %s ; %d\n",c.idClient,c.nom,c.prenom,c.cin,c.adresse,c.telephone); 
						}
					}while(!feof(liste));
					fclose(temp);
					fclose(liste);
					remove("listeClients.txt");
					rename("ctempListe.txt","listeClients.txt");
				}
				else 		printf("\n\n  815 Erreur d'ouverture de fichier ! \n");

		}
		else 
		{
				printf("\n\n                           ************************************* \n");
				printf("\n                           ******* invalide idClient ! ********\n");
				printf("\n                           ************************************* \n\n");
				printf("\n\n                                        ********* Voulez-vous Retapez l'identifiant? ********");
				printf("\n\n                                         0: NON                                      1: OUI ");
				printf("\n\n                                                      Votre choix  :  ");					
				scanf("%d",&choix);
				if(choix)
					goto start;
				
		}
								    	
}
			


void supprimerClient()
{
	FILE* liste=NULL, *temp=NULL;

	client c;
	int id,choix,s,i=0;
	start:
		printf("\n\n            *** Tapez l'identifiant du Client que vous souhaitez supprimer : ");
		scanf("%d",&id);
	    if(clientSearch(id))
	    {
	  		printf("\n\n\n                          \xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb");
			printf("\n                          \xb3                         \xb3");
	        printf("\n                          \xb3        CONTINUEZ?       \xb3");
	        printf("\n                          \xb3                         \xb3");
		    printf("\n                          \xb3 0:OUI            1:NON  \xb3");
	        printf("\n                          \xb3                         \xb3");
	        printf("\n                          \xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc");
	        printf("\n\n                                Votre choix  :  ");
	        scanf("%d",&s);
			if(s)
			 	goto out;
		    liste=fopen("listeClients.txt","r");
		   	temp=fopen("ctempListe.txt","a");
		   	if(liste != NULL)
			{
				   do{
			   		fscanf(liste,"%d ; %s ; %s ; %d ; %s ; %d\n",&c.idClient,&c.nom,&c.prenom,&c.cin,&c.adresse,&c.telephone);
					if(id==(c.idClient))
					{
									printf("\n                          \xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb");
				        printf("\n        -----------       \xba  CLIENT ID  \xba\xba         NOM         \xba\xba        PRENOM       \xba\xba   CIN   \xba\xba     ADRESSE     \xba\xba    NEMURO DE TELEPHONE     \xba");
					    printf("\n                          \xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc\xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc\xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc\xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc\xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc\xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc");
				    
				    	fscanf(liste,"%d ; %s ; %s ; %d ; %s ; %d\n",&c.idClient,&c.nom,&c.prenom,&c.cin,&c.adresse,&c.telephone);
					    printf("\n  \xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb");
						printf("\n  \xba  [ CLIENT N:%03d ] :  \xba\xba%12d \xba\xba%20s \xba\xba%20s \xba\xba %6d  \xba\xba%15s  \xba\xba          %010d        \xba",i,c.idClient,c.nom,c.prenom,c.cin,c.adresse,c.telephone); 
					    printf("\n  \xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc\xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc\xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc\xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc\xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc\xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc\xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc");
		    
						printf("\n\n                                                    \xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb");
						printf("\n                                                    \xb3                                    \xb3");
						printf("\n                                                    \xb3         mise a jour reussie        \xb3");
						printf("\n                                                    \xb3                                    \xb3");
						printf("\n                                                    \xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc");
					}
					else
					{	
						fprintf(temp,"%d ; %s ; %s ; %d ; %s ; %d\n",c.idClient,c.nom,c.prenom,c.cin,c.adresse,c.telephone); 
					}
			    		
				}while(!feof(liste));
					
				fclose(temp);
				fclose(liste);
				remove("listeClients.txt");
				rename("ctempListe.txt","listeClients.txt");
			}
			else 		printf("\n\n  894 Erreur d'ouverture de fichier ! \n");

		}
		else 
		{
				printf("\n\n                           ************************************* \n");
				printf("\n                           ******* invalide idClient ! ********\n");
				printf("\n                           ************************************* \n\n");
				printf("\n\n                                        ********* Voulez-vous Retapez l'identifiant? ********");
				printf("\n\n                                         0: NON                                      1: OUI ");
				printf("\n\n                                                      Votre choix  :  ");					
				scanf("%d",&choix);
				if(choix)
					goto start;
				
		}
		out:
			s++; 
}



void louerVoiture()
 {
 	int idc,idv,i=0,C;
 	int voitureIds[max];
 	int cout,duree,prix;
 	voiture v;
 	client c;
 	contrat ct;
 	date dateTemp;
 	FILE* liste=NULL,*contrat=NULL,*temp=NULL,*cli=NULL,*listeV=NULL;
 	start:
	 	printf("\n\n                             ***** Entrez l'id du client qui veut louer? : ");
	 	scanf("%d",&idc);
		if(clientSearch(idc))
		{
			liste=fopen("listeVoitures.txt","r");
			if(liste!=NULL)
			{
				printf("\n                         \xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb");
		        printf("\n        -----------      \xba  VOITURE ID    \xba\xba     MARQUE     \xba\xba NOM DE VOITURE \xba\xba COULEUR \xba\xba NB PLACES \xba\xba PRIX A JOUR (DH) \xba\xba EN LOCANTION \xba");
			    printf("\n                         \xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc\xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc\xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc\xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc\xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc\xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc\xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc");			 			 
			    
				do{
					fscanf(liste,"%d ; %s ; %s ; %s ; %d ; %d ; %s\n",&v.idVoiture,&v.marque,&v.nomVoiture,&v.couleur,&v.nbPlaces,&v.prixJour,&v.enLocation);
					if( strcmp(v.enLocation,"n") == 0 || strcmp(v.enLocation,"N") == 0 )
					{
						voitureIds[i]=v.idVoiture;
						i++;
				        printf("\n  \xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb");
						printf("\n  \xba      [VOITURE N:%d]: \xba\xba%12d    \xba\xba%15s \xba\xba%15s \xba\xba%7s  \xba\xba%3d        \xba\xba  %5d           \xba\xba %3s          \xba",i,v.idVoiture,v.marque,v.nomVoiture,v.couleur,v.nbPlaces,v.prixJour,v.enLocation); 
				        printf("\n  \xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc\xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc\xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc\xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc\xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc\xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc\xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc\xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc");			 
					}
			   	}while(!feof(liste));
			   	if(!i) printf("\n\n                                                              ***** aucun voiture available pour location");
			}
			else printf("\n  951  Erreur d'ouverture de fichier !");
			fclose(liste);
			if(i>=1)
			{
			
				contrat=fopen("listeContrats.txt","a");
				if(contrat!=NULL)
				{
					vID:
					printf("\n\n                             ***** Entrez l'identifiant de Voiture que vous souhaitez louer : ");
					scanf("%d",&idv);
					if(exist(voitureIds,idv,i))
					   	{
					   		
					   		listeV=fopen("listeVoitures.txt","r");
					   		cli=fopen("listeClients.txt","r");
					   		if(liste!=NULL && cli!=NULL)
						   	{
						   		
						   		do{
									fscanf(cli,"%d ; %s ; %s ; %d ; %s ; %d\n",&c.idClient,&c.nom,&c.prenom,&c.cin,&c.adresse,&c.telephone);
									if(idc == c.idClient)
										goto moveOn;
								}while(!feof(cli)); 
							moveOn:
									fclose(cli);
								do{	
										fscanf(listeV,"%d ; %s ; %s ; %s ; %d ; %d ; %s\n",&v.idVoiture,&v.marque,&v.nomVoiture,&v.couleur,&v.nbPlaces,&v.prixJour,&v.enLocation);
								   	if(idv==v.idVoiture)
									   {
									   	ct.idClient=idc;
										ct.idVoiture=v.idVoiture;
										prix=v.prixJour;
									   }
							  	}while(!feof(listeV));
							  	fclose(listeV);
							}
							else{
								printf("\n   989  Erreur d'ouverture de fichier !");
								exit(0);
							} 				  	 		
							   	printf("\n\n    \xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd REMPLISSAGE DU CONTRAT \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\n\n");
								printf("    \xba Entrez Numero de Contrat : ");
								scanf("%f",&ct.numContrat);
								printf("\n");
								printf("    \xba Identifiant de Voiture : %d ",ct.idVoiture);
								printf("\n\n");
								printf("    \xba Identifiant du Client : %d ",ct.idClient);
								printf("\n\n");
								do{	
									printf("    \xba Entrez la date de DEBUT de Contrat (EX: 23 01 2020): ");
									scanf("%d %d %d",&ct.debut.j,&ct.debut.m,&ct.debut.a);
									printf("\n");
								}while(!validDate(ct.debut));
								do {	
									printf("    \xba Entrez la date de FIN de Contrat (EX: 13 02 2020 > debutDate ): ");
									scanf("%d %d %d",&ct.fin.j,&ct.fin.m,&ct.fin.a); 
									printf("\n"); 
								} while(!validDate(ct.fin) && ( ct.fin.j > ct.debut.j || ct.fin.m > ct.debut.m || ct.fin.a > ct.debut.a ));
								
								duree = days(ct.debut,ct.fin);
								if (duree<0) 
								{
									dateTemp = ct.fin;
									ct.fin = ct.debut;
									ct.debut = dateTemp;
									duree = abs(duree);
								}
								cout = duree * prix;
								ct.cout=cout;
								printf("    \xba LA DUREE DE CONTRAT  : %d ",duree);
								printf("\n\n");	
								printf("    \xba Le cout total : %d DH",ct.cout);
								printf("\n\n    \xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc\n\n");
								fprintf(contrat,"%f ; [ %d ; %s ; %s ; %s ; %d ; %d ; %s ] ; [ %d ; %s ; %s ; %d ; %s ; %d ] ; %d / %d / %d ;  %d / %d / %d ; %d ; %d\n",ct.numContrat,ct.idVoiture,v.marque,v.nomVoiture,v.couleur,v.nbPlaces,v.prixJour,v.enLocation,ct.idClient,c.nom,c.prenom,c.cin,c.adresse,c.telephone,ct.debut.j,ct.debut.m,ct.debut.a,ct.fin.j,ct.fin.m,ct.fin.a,ct.cout,duree);
					
								changeStatus("O",ct.idVoiture);
						}
						else
						{	
							printf("\n\n                                        ***** Voulez-vous retourner  au menu principal ou tapez un autre identifiant de voiture? ");
					    	printf("\n\n                                                      0: Menu principal .                        1: tapez un autre idVoiture");
						   	printf("\n\n                                                                      Votre choix  :  ");
								
							scanf("%d",&C);
							if(C)
								goto vID;
						}
				}
				else printf("\n  1041  Erreur d'ouverture de fichier !");
				fclose(contrat);
			}
	 			
 	}	
	else 
	{
		printf("\n\n                                        ***** Voulez-vous ajouter un autre client? ******** ");
		printf("\n\n                                       0: NON                                        1: OUI ");
		printf("\n\n                                                      Votre choix  :  ");					
		scanf("%d",&C);
		if(C){
			ajouterClients(1);
			goto start;
		}		
		
	}	

 }
  
  

void visualiserContrat()
{
	FILE* liste=NULL;
	voiture v;
	char temp[max];
	contrat ct;	
	client c;
	int duree,choix,i=1,C;
	float id;

	start:
		printf("\n\n            *** Tapez le numero de contrat que vous souhaitez visualiser  : ");
		scanf("%f",&id);


			liste=fopen("listeContrats.txt","r");
			if(liste!=NULL)
			{
				do{

					fscanf(liste," %f ; [ %d ; %s ; %s ; %s ; %d ; %d ; %s ] ; [ %d ; %s ; %s ; %d ; %s ; %d ] ; %d / %d / %d ;  %d / %d / %d ; %d ; %d\n",&ct.numContrat,&ct.idVoiture,&v.marque,&v.nomVoiture,&v.couleur,&v.nbPlaces,&v.prixJour,&v.enLocation,&ct.idClient,&c.nom,&c.prenom,&c.cin,&c.adresse,&c.telephone,&ct.debut.j,&ct.debut.m,&ct.debut.a,&ct.fin.j,&ct.fin.m,&ct.fin.a,&ct.cout,&duree);
					if(id == ct.numContrat)
					{
						i=0; 				
						printf("\n\n    \xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd AFFICHAGE DU CONTRAT \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\n\n");
						printf("    \xba Numero de Contrat : %0.2f",ct.numContrat);
						printf("\n\n");
						printf("    \xba Identifiant de Voiture : %d ",ct.idVoiture); 
						printf("\n\n");
						printf("    \xba Details de Voiture : %s , %s , %s .",v.marque,v.nomVoiture,v.couleur);
						printf("\n\n");
						printf("    \xba Identifiant du Client : %d ",ct.idClient);
						printf("\n\n");
						printf("    \xba les info du Client : %s %s , %d , %010d .",c.nom,c.prenom,c.cin,c.telephone);
						printf("\n\n");	
						printf("    \xba la date de DEBUT de Contrat : %02d/%02d/%d ",ct.debut.j,ct.debut.m,ct.debut.a);
						printf("\n\n");	
						printf("    \xba la date de FIN de Contrat : %02d/%02d/%d",ct.fin.j,ct.fin.m,ct.fin.a);
						printf("\n\n"); 
						printf("    \xba LA DUREE DE CONTRAT  : %d JOUR(S)",duree);
						printf("\n\n"); 
						printf("    \xba LE PRIX D'UNE JOURNEE  : %d DH ",v.prixJour);
						printf("\n\n");		
						printf("    \xba Le cout total : %d DH",ct.cout);
						printf("\n\n    \xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc\n\n");			
					}
				}while(!feof(liste));
				fclose(liste);
		}
			else	printf("\n\n  1114 Erreur d'ouverture de fichier ! \n");

		if(i) 
		{
			
			printf("\n\n                           ************************************* \n");
			printf("\n                           ******* invalide numContrat ! ********\n");
			printf("\n                           ************************************* \n\n");
			printf("\n\n                                               *****  Voulez-vous Retapez le numero de contrat que vous souhaitez visualiser? ");
			printf("\n\n                                                             1: OUI                                        0: NON ");
			printf("\n\n                                                                       Votre choix  :  ");					
			scanf("%d",&choix);
			if(choix)
				goto start;	
		}
	
}
 
 

void retournerVoiture()
{
	FILE* liste=NULL,*temp=NULL,*archive=NULL;
	contrat ct;	
	client c;
	voiture t,v;
	int choix,s,duree,i=1;
	float DEN;
	start:
		printf("\n\n            *** Tapez le numero de Contrat que vous souhaitez Resilier  : ");
		scanf("%f",&DEN);

			liste=fopen("listeContrats.txt","r");
			archive=fopen("archive/contratArchive.txt","a");
			temp=fopen("contratTemp.txt","a");
			if( liste != NULL)
				{
					
					do{
						fscanf(liste," %f ; [ %d ; %s ; %s ; %s ; %d ; %d ; %s ] ; [ %d ; %s ; %s ; %d ; %s ; %d ] ; %d / %d / %d ;  %d / %d / %d ; %d ; %d\n",&ct.numContrat,&ct.idVoiture,&v.marque,&v.nomVoiture,&v.couleur,&v.nbPlaces,&v.prixJour,&v.enLocation,&ct.idClient,&c.nom,&c.prenom,&c.cin,&c.adresse,&c.telephone,&ct.debut.j,&ct.debut.m,&ct.debut.a,&ct.fin.j,&ct.fin.m,&ct.fin.a,&ct.cout,&duree);
						if(DEN == ct.numContrat)
						{
							i=0;
							printf("\n\n\n                          \xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb");
							printf("\n                          \xb3                         \xb3");
						    printf("\n                          \xb3        CONTINUEZ?       \xb3");
						    printf("\n                          \xb3                         \xb3");
					        printf("\n                          \xb3 0:OUI            1:NON  \xb3");
							printf("\n                          \xb3                         \xb3");
							printf("\n                          \xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc");
							printf("\n\n                                Votre choix  :  ");
							scanf("%d",&s);
							if(s)
								goto out;
							
									
							printf("\n\n    \xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd SUPPRESSION DE CONTRAT \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\n\n");
							printf("    \xba Numero de Contrat : %0.2f",ct.numContrat);
							printf("\n\n");
							printf("    \xba Identifiant de Voiture : %d ",ct.idVoiture);
							printf("\n\n");
							printf("    \xba Identifiant du Client : %d ",ct.idClient);
							printf("\n\n");
							printf("    \xba la date de DEBUT de Contrat : %02d %02d %d ",ct.debut.j,ct.debut.m,ct.debut.a);
							printf("\n\n");	
							printf("    \xba la date de FIN de Contrat : %02d %02d %d",ct.fin.j,ct.fin.m,ct.fin.a);
							printf("\n\n"); 
							printf("    \xba LA DUREE DE CONTRAT  : %d ",duree);
							printf("\n\n");	 
							printf("    \xba LE PRIX D'UNE JOURNEE  : %d DH ",v.prixJour);
							printf("\n\n");	
							printf("    \xba Le cout total : %d DH",ct.cout);
							printf("\n\n    \xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc\n\n");			
							printf("\n                          \xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb");
							printf("\n                          \xb3                                    \xb3");
							printf("\n                          \xb3              CONTRAT               \xb3");
							printf("\n                          \xb3        supprime avec succes        \xb3");
							printf("\n                          \xb3                                    \xb3");
							printf("\n                          \xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc");
							fprintf(archive," %f ; [ %d ; %s ; %s ; %s ; %d ; %d ; %s ] ; [ %d ; %s ; %s ; %d ; %s ; %d ] ; %d / %d / %d ;  %d / %d / %d ; %d ; %d\n",ct.numContrat,ct.idVoiture,v.marque,v.nomVoiture,v.couleur,v.nbPlaces,v.prixJour,v.enLocation,ct.idClient,c.nom,c.prenom,c.cin,c.adresse,c.telephone,ct.debut.j,ct.debut.m,ct.debut.a,ct.fin.j,ct.fin.m,ct.fin.a,ct.cout,duree);
							changeStatus("N",ct.idVoiture);	
						}
						else 
						{
							out:
								fprintf(temp," %f ; [ %d ; %s ; %s ; %s ; %d ; %d ; %s ] ; [ %d ; %s ; %s ; %d ; %s ; %d ] ; %d / %d / %d ;  %d / %d / %d ; %d ; %d\n",ct.numContrat,ct.idVoiture,v.marque,v.nomVoiture,v.couleur,v.nbPlaces,v.prixJour,v.enLocation,ct.idClient,c.nom,c.prenom,c.cin,c.adresse,c.telephone,ct.debut.j,ct.debut.m,ct.debut.a,ct.fin.j,ct.fin.m,ct.fin.a,ct.cout,duree);
					
						}
					}while(!feof(liste));
					fclose(liste);
					fclose(temp);
					fclose(archive);
					fclose(liste);
					remove("listeContrats.txt");
					rename("contratTemp.txt","listeContrats.txt");
				}
				else 		printf("\n\n  1211 Erreur d'ouverture de fichier ! \n");

		
		if(i) 
		{
			printf("\n\n                           ************************************* \n");
			printf("\n                           ******* invalide numContrat ! ********\n");
			printf("\n                           ************************************* \n\n");
			printf("\n\n                                        ***** Voulez-vous Retapez le numero de contrat que vous souhaitez supprimer? ");
			printf("\n\n                                       0: NON                                        1: OUI ");
			printf("\n\n                                                      Votre choix  :  ");					
			scanf("%d",&choix);
			if(choix)
				goto start;				
		}


}
 
 

void modifierContrat()
{
	FILE* liste=NULL,*temp=NULL,*listeV=NULL;
	date dateTemp;
	contrat ct;	
	client c;
	voiture t,v;
	int choix,prix,s,duree,i=1,j=0,C;
	float DEN;
	start:
		printf("\n\n            *** Tapez le numero de Contrat que vous souhaitez Modifier : ");
		scanf("%f",&DEN);

			liste=fopen("listeContrats.txt","r");
			temp=fopen("contratTemp.txt","a");
			if( liste != NULL)
				{
					
					do{
						fscanf(liste," %f ; [ %d ; %s ; %s ; %s ; %d ; %d ; %s ] ; [ %d ; %s ; %s ; %d ; %s ; %d ] ; %d / %d / %d ;  %d / %d / %d ; %d ; %d\n",&ct.numContrat,&ct.idVoiture,&v.marque,&v.nomVoiture,&v.couleur,&v.nbPlaces,&v.prixJour,&v.enLocation,&ct.idClient,&c.nom,&c.prenom,&c.cin,&c.adresse,&c.telephone,&ct.debut.j,&ct.debut.m,&ct.debut.a,&ct.fin.j,&ct.fin.m,&ct.fin.a,&ct.cout,&duree);
						if(DEN == ct.numContrat)
						{
							i=0;
							printf("\n\n\n                          \xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb");
							printf("\n                          \xb3                         \xb3");
						    printf("\n                          \xb3        CONTINUEZ?       \xb3");
						    printf("\n                          \xb3                         \xb3");
					        printf("\n                          \xb3 0:OUI            1:NON  \xb3");
							printf("\n                          \xb3                         \xb3");
							printf("\n                          \xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc");
							printf("\n\n                                Votre choix  :  ");
							scanf("%d",&s);
							if(s)
								goto out;
							
									
							changeStatus("N",ct.idVoiture);
							listeV=fopen("listeVoitures.txt","r");
							if(listeV!=NULL)
							{
								printf(" \n\n                                                             ***** LES VOITURES DISPONIBLES ***** ");
								printf("\n                         \xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb");
						        printf("\n        -----------      \xba  VOITURE ID    \xba\xba     MARQUE     \xba\xba NOM DE VOITURE \xba\xba COULEUR \xba\xba NB PLACES \xba\xba PRIX A JOUR (DH) \xba\xba EN LOCANTION \xba");
							    printf("\n                         \xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc\xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc\xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc\xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc\xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc\xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc\xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc");			 			 
							    
								do{
									fscanf(listeV,"%d ; %s ; %s ; %s ; %d ; %d ; %s\n",&v.idVoiture,&v.marque,&v.nomVoiture,&v.couleur,&v.nbPlaces,&v.prixJour,&v.enLocation);
									if( strcmp(v.enLocation,"n") == 0 || strcmp(v.enLocation,"N") == 0 )
									{
										i++;
								        printf("\n  \xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb");
										printf("\n  \xba      [VOITURE N:%d]: \xba\xba%12d    \xba\xba%15s \xba\xba%15s \xba\xba%7s  \xba\xba%3d        \xba\xba  %5d           \xba\xba %3s          \xba",i,v.idVoiture,v.marque,v.nomVoiture,v.couleur,v.nbPlaces,v.prixJour,v.enLocation); 
								        printf("\n  \xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc\xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc\xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc\xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc\xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc\xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc\xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc\xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc");			 
									}
							   	}while(!feof(listeV));
							   	if(!i) printf("\n\n                                                              ***** aucun voiture available pour location");
							}
							else printf("\n  1290  Erreur d'ouverture de fichier !");
							fclose(listeV);
							printf("\n\n    \xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd MODIFIER DU CONTRAT \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\n\n");

								printf("    \xba Entrez Numero de Contrat : ");
								scanf("%f",&ct.numContrat);
								printf("\n");

							do{
								if(j)
								{
									printf("\n     la voiture correspond a cet identifiant n'est pas disponible pour le moment ! ");
									printf("\n    \xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc\n\n");
								}
								printf("    \xba Tapez Identifiant de Voiture : ");
								scanf("%d",&ct.idVoiture);
								printf("\n");
								j++;
							}while(carSearch(ct.idVoiture) && available(ct.idVoiture));
							j=0;
							do{
								if(j)
								{
									printf("\n     le CLIENT n'est pas disponible !");
								}
								printf("    \xba Tapez Identifiant du Client :  ");
								scanf("%d",&ct.idClient);
								printf("\n");
								j++;
							}while(!clientSearch(ct.idClient));
							do{
								printf("    \xba Entrez la date de DEBUT de Contrat (EX: 23 01 2020): ");
								scanf("%d %d %d",&ct.debut.j,&ct.debut.m,&ct.debut.a);
								printf("\n");
							}while(!validDate(ct.debut));
							do {	
								printf("    \xba Entrez la date de FIN de Contrat (EX: 13 02 2020 > debutDate ): ");
								scanf("%d %d %d",&ct.fin.j,&ct.fin.m,&ct.fin.a); 
								printf("\n"); 
							} while(!validDate(ct.fin) && ( ct.fin.j > ct.debut.j || ct.fin.m > ct.debut.m || ct.fin.a > ct.debut.a ));
							listeV=NULL;
							listeV=fopen("listevoiture.txt","r");
							if(listeV!=NULL)
							{
								do{	
											fscanf(listeV,"%d ; %s ; %s ; %s ; %d ; %d ; %s\n",&t.idVoiture,&t.marque,&t.nomVoiture,&t.couleur,&t.nbPlaces,&t.prixJour,&t.enLocation);
									   	if( ct.idVoiture == t.idVoiture)
										   {
											prix=v.prixJour;
											goto f;
										   }
								}while(!feof(listeV));
								f:
									fclose(listeV);
							}
							else
							{
								printf("\n\n  1354   Erreur d'ouverture de fichier ! \n");	
								exit(0);
							}
							duree = days(ct.debut,ct.fin);
							if (duree<0) 
							{
								dateTemp = ct.fin;
								ct.fin = ct.debut;
								ct.debut = dateTemp;
								duree = abs(duree);
							}
							ct.cout = duree * prix;
							printf("    \xba LA DUREE DE CONTRAT  : %d ",duree);
							printf("\n\n");	
							printf("    \xba Le cout total : %d DH",ct.cout);
							printf("\n\n    \xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc\n\n");
							fprintf(temp,"%f ; [ %d ; %s ; %s ; %s ; %d ; %d ; %s ] ; [ %d ; %s ; %s ; %d ; %s ; %d ] ; %d / %d / %d ;  %d / %d / %d ; %d ; %d\n",ct.numContrat,ct.idVoiture,v.marque,v.nomVoiture,v.couleur,v.nbPlaces,v.prixJour,v.enLocation,ct.idClient,c.nom,c.prenom,c.cin,c.adresse,c.telephone,ct.debut.j,ct.debut.m,ct.debut.a,ct.fin.j,ct.fin.m,ct.fin.a,ct.cout,duree);
							printf("\n                          \xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb");
							printf("\n                          \xb3                                    \xb3");
							printf("\n                          \xb3              CONTRAT               \xb3");
							printf("\n                          \xb3        modifier avec succes        \xb3");
							printf("\n                          \xb3                                    \xb3");
							printf("\n                          \xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc");
						}
						else 
						{
							out:
								fprintf(temp," %f ; [ %d ; %s ; %s ; %s ; %d ; %d ; %s ] ; [ %d ; %s ; %s ; %d ; %s ; %d ] ; %d / %d / %d ;  %d / %d / %d ; %d ; %d\n",ct.numContrat,ct.idVoiture,v.marque,v.nomVoiture,v.couleur,v.nbPlaces,v.prixJour,v.enLocation,ct.idClient,c.nom,c.prenom,c.cin,c.adresse,c.telephone,ct.debut.j,ct.debut.m,ct.debut.a,ct.fin.j,ct.fin.m,ct.fin.a,ct.cout,duree);
						}
					}while(!feof(liste));
					fclose(liste);
					fclose(temp);
					fclose(liste);
					remove("listeContrats.txt");
					rename("contratTemp.txt","listeContrats.txt");
				}
				else 		printf("\n\n  1108 ERREUR D'OUVERTURE DE FICHIER ! \n");

		
		if(i) 
		{
			printf("\n\n                           ************************************* \n");
			printf("\n                           ******* invalide numContrat ! ********\n");
			printf("\n                           ************************************* \n\n");
			printf("\n\n                                               *****  Voulez-vous Retapez le numero de contrat que vous souhaitez modifier? ");
			printf("\n\n                                       0: NON                                        1: OUI ");
			printf("\n\n                                                      Votre choix  :  ");					
			scanf("%d",&choix);
			if(choix)
				goto start;				
		}


}



void skip() { system("cls");}

int main()
 {
    int c,m,Q,n;
	
	printf("\n              \xda\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xbf");
	printf("\n              \xb3 \xb3 mettre en plein ecran pour une meilleure experience ! \xb3 \xb3");
	printf("\n              \xc0\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xd9");
	debut:

		    c=menuPrincipal();	    
		    skip();	    	    

    switch(c)
    {
    	case 1:
		lc: 
    	    skip();
		    m=locationVoiture();
		    switch(m)
		    {
		    
		    	case 1:
			        skip();
					visualiserContrat();
					n=retour(); 
					if(n)
				   		goto lc;
					goto debut;
	    			break;
			    case 2:
			        skip();
			    	louerVoiture();
					n=retour(); 
					if(n)
				   		goto lc;
					goto debut;
		    		break;   
				case 3:
					skip();
					retournerVoiture();
					n=retour(); 
					if(n)
				   		goto lc;
					goto debut;		    		
					break;
		    	case 4:
		    		skip();
		    		modifierContrat();
					n=retour(); 
					if(n)
				   		goto lc;
					goto debut;		    		
					break; 	
				case 5:
					skip();
				    goto debut;	
					break;	
				default:
				    invalidOption();
					goto debut;		
			}
		    break;
		case 2:
			gv:
			skip();
			m=gestionDesVoitures();
			switch(m)
			{
				case 1:
					
					skip();
		    		listeDesVoitures();
		    		n=retour(); 
		    		if(n)
		    			goto gv;
		    		goto debut;
		    		break;
			    case 2:
			    	skip();
		    		ajouterVoitures();
		    		n=retour(); 
			  		if(n)
				   		goto gv;
				   	goto debut;
					break;   
				case 3:
					skip();
					modifierVoiture();
					n=retour(); 
			   		if(n)
				 		goto gv;
				   	goto debut;
		    		break;
		    	case 4:
		    		skip();
					supprimerVoiture();
					n=retour(); 
			 		if(n)
			    		goto gv;
			   		goto debut;
		    		break; 	
		    	case 5:
		   			skip();
				    goto debut;	
					break;
				default:
				    invalidOption();
				    goto gv;
			}
			break;
		case 3:

			gc:
			skip();
		    m=gestionDesClients();
		   	switch(m)
				{
				case 1:
					skip();
			   		listeDesClients();
			   		n=retour(); 
		    		if(n)
		    			goto gc;
			    	goto debut;
			    	break;
				case 2:
				    skip();
					printf("\n\n                                  *** Combien de Clients voulez-vous ajouter?  : ");
					scanf("%d",&n);
			   		ajouterClients(n);
			   		n=retour(); 
			   		if(n)
				    	goto gc;
				   	goto debut;
					break;   
				case 3:
					skip();
					modifierClient();
					n=retour(); 
			  		if(n)
				 		goto gc;
				   	goto debut;
		    		break;
			    case 4:
				    skip();
					supprimerClient();
					n=retour(); 
				 	if(n)
				   		goto gc;
			   		goto debut;
		    		break;  		
				case 5:
					skip();
				    goto debut;	
					break;	
				default:
				    invalidOption();
				    goto gc;
				}
			break;
		case 4:
			Q=Quitter();
            if(Q)
			{
               	skip();
                goto debut;
	        }
               else
               exit(1);
               skip();
			break;	
		default: 
		    invalidOption();
		    goto debut;
		   		
	}

    return 0;
}




 // FATIMA-ZAHRA NACIRI
 
