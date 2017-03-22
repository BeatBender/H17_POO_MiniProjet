/*
	TP2 - Patrick Levesque - LEVP19099302

	Comme le TP est une continuation du premier, l'executif se nomme TP1. Le TP2 fonctionne bien. La plupart des fonctions fonctionnent.
	Je ne voyais pas la différence entre une rencontre et un match. Les fonctions à propos des match et des rencontres sont un peu mélangés à cause de cela.
	Le programme est toujours sensible. On doit toujours entrer une commande qu'on s'attend à avoir, sinon, le programme plante. Par exemple, on doit
	mettre 1 ou 0 lorsqu'on nous demande un choix double. J'ai aucune idée comment implémenter les joueurs autonomes et non autonomes, mais les classes sont faites.
*/

#include "Screen.h"

void main()
{
	Screen ecranPrincipal;
	ecranPrincipal.InitMainMenu();

	return;
}