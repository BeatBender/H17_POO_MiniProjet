#include "Screen.h"
#include "Club.h"
#include <iostream>
#include "Rencontre.h"
#include <thread>
#include "NegoAcheteur.h"
#include "NegoVendeur.h"
#include "Negociateur.h"

using namespace std;

class Club;

vector<Club*> vecteur_club;
vector<Rencontre*> vecteur_rencontres;

Screen::Screen()
{

}

Screen::~Screen()
{

}

void Screen::CreateClub()
{
	Club* club_courant;

	club_courant = new Club;
	club_courant->SetNom();
	club_courant->SetHistoire();
	club_courant->SetCouleur();
	club_courant->SetVille();
	club_courant->SetDate();
	club_courant->SetEffectif();
	club_courant->SetPalmares();
	club_courant->SetStade();
	club_courant->SetStaff();
	vecteur_club.push_back(club_courant);
}

void Screen::AfficherClubs()
{
	cout << "Voici la liste des clubs de la ligue:" << endl;
	for (int i = 0; i < vecteur_club.size(); i++)
	{
		cout << i << ") " << vecteur_club.at(i)->GetNom() << endl;
	}
	system("PAUSE");
}

void Screen::SuppClub()
{
	if (vecteur_club.size() <= 0)
	{
		cout << "Il n'y a pas de club dans la ligue" << endl;
		return;
	}

	int choix;

	cout << "Choisissez le club que vous voulez supprimer:" << endl;
	for (int i = 0; i < vecteur_club.size(); i++)
	{
		cout << i << ") " << vecteur_club.at(i)->GetNom() << endl;
	}

	cin >> choix;

	vecteur_club.erase(vecteur_club.begin() + choix);
}

void Screen::AfficherJoueursClub()
{
	int choix;
	cout << "Choisissez un club pour voir ses joueurs:" << endl;
	for (int i = 0; i < vecteur_club.size(); i++)
	{
		cout << i << ") " << vecteur_club.at(i)->GetNom() << endl;
	}

	if (vecteur_club.size() != NULL)
	{
		cin >> choix;
		vecteur_club.at(choix)->AfficherJoueurs();
	}
	system("PAUSE");
}

void Screen::AjouterJoueur()
{
	int choix;
	cout << "Choisissez un club pour y ajouter des joueurs:" << endl;
	for (int i = 0; i < vecteur_club.size(); i++)
	{
		cout << i << ") " << vecteur_club.at(i)->GetNom() << endl;
	}

	if (vecteur_club.size() != NULL)
	{
		cin >> choix;
		vecteur_club.at(choix)->SetEffectif();
	}

	system("PAUSE");
}

void Screen::RechercheEntraineurTitre()
{
	int nbTitres = 0;
	Entraineur* entraineurTitre = NULL;

	for (int i = 0; i < vecteur_club.size(); i++)
	{
		for (int j = 0; j < vecteur_club.at(i)->GetEntraineurs().size(); j++)
		{
			if (vecteur_club.at(i)->GetEntraineurs().at(j)->GetNbTitres() > nbTitres)
			{
				nbTitres = vecteur_club.at(i)->GetEntraineurs().at(j)->GetNbTitres();
				entraineurTitre = vecteur_club.at(i)->GetEntraineurs().at(j);
			}

		}

	}
	if (nbTitres == 0)
	{
		cout << endl << "Aucun entraineur n'a gagne de titre ou aucun entraineur enregistrer." << endl;
		return;
	}
	else
	{
		cout << endl << "L'entraineur ayant le plus de titres est: " << entraineurTitre->GetNom() << " avec " << nbTitres << " titre(s)." << endl;
		return;
	}
}

void Screen::RechercheClubTitre()
{
	int nbTitres = 0;
	Club* clubTitre = NULL;

	for (int i = 0; i < vecteur_club.size(); i++)
	{
		if (vecteur_club.at(i)->GetNbTitres() > nbTitres)
		{
			nbTitres = vecteur_club.at(i)->GetNbTitres();
			clubTitre = vecteur_club.at(i);
		}
	}

	if (nbTitres == 0)
	{
		cout << endl << "Il n'y a pas de club enregistrer ou aucun club n'a de titre" << endl;
		return;
	}
	else
	{
		cout << endl << "Le club qui a le plus de titres est: " << clubTitre->GetNom() << " avec " << nbTitres << " titre(s)." << endl;
		return;
	}
}

void Screen::CreateGame()
{
	Rencontre *rencontre = new Rencontre;

	rencontre->SetDate();
	rencontre->SetClubLocal();
	rencontre->SetClubInvite();
	rencontre->SetResultat();
	vecteur_rencontres.push_back(rencontre);
}

void Screen::AfficherCalendrier()
{
	if (vecteur_rencontres.size() <= 0)
	{
		cout << "Il n'y a pas de rencontre au calendrier" << endl;
		return;
	}

	cout << "Voici la liste des rencontres:" << endl;
	for (int i = 0; i < vecteur_rencontres.size(); i++)
	{
		cout << vecteur_rencontres.at(i)->GetJour() + "/" + vecteur_rencontres.at(i)->GetMois() + "/" + vecteur_rencontres.at(i)->GetAnnee() + ": ";
		cout << vecteur_rencontres.at(i)->GetClubLocal() + " vs. " + vecteur_rencontres.at(i)->GetClubInvite() + " -- ";
		cout << vecteur_rencontres.at(i)->GetResultat() << endl << endl;
	}
}

void Screen::SuppRencontre()
{
	if (vecteur_rencontres.size() <= 0)
	{
		cout << "Il n'y a pas de rencontre au calendrier" << endl;
		return;
	}

	int choix;

	cout << "Choisissez la rencontre que vous voulez supprimer:" << endl;
	for (int i = 0; i < vecteur_rencontres.size(); i++)
	{
		cout << i << ") " << vecteur_rencontres.at(i)->GetClubLocal() + " vs " + vecteur_rencontres.at(i)->GetClubInvite() << endl;
	}

	cin >> choix;

	vecteur_rencontres.erase(vecteur_rencontres.begin() + choix);
}

void Screen::CreateContrat()
{
	int choix;

	if (vecteur_club.size() <= 0)
	{
		cout << "Il n'y a pas de club dans la ligue" << endl;
		return;
	}

	cout << "Choisissez le club dont vous voulez creer un contrat:" << endl;
	for (int i = 0; i < vecteur_club.size(); i++)
	{
		cout << i << ") " << vecteur_club.at(i)->GetNom() << endl;
	}
	cin >> choix;

	Contrat* contrat = new Contrat;
	contrat->SetJoueur();
	contrat->SetNouvClub();
	contrat->SetAncClub();
	contrat->SetReglement();
	contrat->SetDuree();
	contrat->SetDateEntree();
	contrat->SetDateContrat();
	vecteur_club.at(choix)->AddContrat(contrat);
}

void Screen::AfficherMontantClub()
{
	int choix, choix2;

	cout << "Choisissez un club pour voir ses transactions:" << endl;
	for (int i = 0; i < vecteur_club.size(); i++)
	{
		cout << i << ") " << vecteur_club.at(i)->GetNom() << endl;
	}
	cin >> choix;

	cout << "Choisissez une date pour voir le montant encaisse par le club:" << endl;
	for (int i = 0; i < vecteur_club.at(choix)->GetContrat().size(); i++)
	{
		cout << i << ") " << vecteur_club.at(choix)->GetContrat().at(i)->GetDateContrat() << endl;
	}
	cin >> choix2;

	cout << "Le montant encaisse par le club a cette date est: " << vecteur_club.at(choix)->GetContrat().at(choix2)->GetReglement().GetMontantClub() << "$" << endl;
	system("PAUSE");
}

void Screen::AfficherScore()
{
	if (vecteur_rencontres.size() <= 0)
	{
		cout << "il n'y a pas de rencontre au calendrier" << endl;
		return;
	}

	int choix;
	cout << "Voici les rencontres prevus au calendrier:" << endl;
	for (int i = 0; i < vecteur_rencontres.size(); i++)
	{
		cout << i << ") " << vecteur_rencontres.at(i)->GetJour() << "/" << vecteur_rencontres.at(i)->GetMois() << "/" << vecteur_rencontres.at(i)->GetAnnee();
		cout << " - " << vecteur_rencontres.at(i)->GetClubLocal() << " vs " << vecteur_rencontres.at(i)->GetClubInvite() << endl;
	}
	cin >> choix;

	cout << "Voici le score de cette partie: (Equipe locale vs. Equipe invitee)" << endl;
	cout << vecteur_rencontres.at(choix)->GetResultat() << endl;
	system("Pause");
}

void Screen::CreateTransfert()
{

	if (vecteur_club.size() == NULL)
	{
		cout << "il n'y a pas de club dans la ligue." << endl;
		return;
	}

	int choix, choix2, choix3;

	cout << "Quel est le club qui se départi d'un joueur:" << endl;
	for (int i = 0; i < vecteur_club.size(); i++)
	{
		cout << i << ") " << vecteur_club.at(i)->GetNom() << endl;
	}
	
	cin >> choix;

	cout << "Quel joueur s'en va?" << endl;
	for (int i = 0; i < vecteur_club.at(choix)->GetEffectif().size(); i++)
	{
		cout << i << ") " << vecteur_club.at(choix)->GetEffectif().at(i)->GetPrenom() << " " << vecteur_club.at(choix)->GetEffectif().at(i)->GetNom();
	}

	cin >> choix3;
	
	cout << "Quel est le club qui engage le joueur:" << endl;
	for (int i = 0; i < vecteur_club.size(); i++)
	{
		cout << i << ") " << vecteur_club.at(i)->GetNom() << endl;
	}

	cin >> choix2;

	if (choix2 == choix)
	{
		cout << "Vous ne pouvez pas echanger un joueur d'un club a lui-meme" << endl;
		return;
	}

	NegoVendeur *uneNegoVente = new NegoVendeur;
	NegoAcheteur *uneNegoAchat = new NegoAcheteur;

	thread achat(uneNegoAchat->CreateThread);
	thread vente(uneNegoVente->CreateThread);
}

void Screen::InitMainMenu()
{
	int choix;

	cout << "--------------------- Menu Principal -----------------------" << endl;
	cout << "0)  Quitter l'application" << endl << endl;
	cout << "1)  Ajouter un club" << endl;
	cout << "2)  Afficher les clubs existant" << endl;
	cout << "3)  Supprimer un club" << endl;
	cout << "4)  Afficher les joueurs d'un club" << endl;
	cout << "5)  Ajouter un joueur a un club" << endl;
	cout << "6)  Trouver l'entraineur le plus titre de la ligue" << endl;
	cout << "7)  Trouver le club le plus titre de la ligue" << endl;
	cout << "8)  Creer une rencontre" << endl;
	cout << "9)  Afficher le calendrier des rencontres" << endl;
	cout << "10) Supprimer une rencontre du calendrier" << endl;
	cout << "11) Creer un contrat" << endl;
	cout << "12) Afficher les montants de transfert encaisses par club par date" << endl;
	cout << "13) Afficher le resultat d'un match par date" << endl;
	cout << "14) Commencer un transfert de joueur" << endl;

	cin >> choix;
	cout << endl << endl;

	switch (choix)
	{

	case 0:
		return;
		break;
	case 1:
		CreateClub();
		InitMainMenu();
		break;

	case 2:
		AfficherClubs();
		InitMainMenu();
		break;

	case 3:
		SuppClub();
		InitMainMenu();
		break;

	case 4:
		AfficherJoueursClub();
		InitMainMenu();
		break;

	case 5:
		AjouterJoueur();
		InitMainMenu();
		break;

	case 6:
		RechercheEntraineurTitre();
		InitMainMenu();
		break;

	case 7:
		RechercheClubTitre();
		InitMainMenu();
		break;

	case 8:
		CreateGame();
		InitMainMenu();
		break;

	case 9:
		AfficherCalendrier();
		InitMainMenu();
		break;

	case 10:
		SuppRencontre();
		InitMainMenu();
		break;

	case 11:
		CreateContrat();
		InitMainMenu();
		break;

	case 12:
		AfficherMontantClub();
		InitMainMenu();
		break;

	case 13:
		AfficherScore();
		InitMainMenu();
		break;

	case 14:
		CreateTransfert();
		InitMainMenu();
		break;

	default:
		cout << endl << "Commande invalide" << endl;
		InitMainMenu();
		break;
	}
	return;
}