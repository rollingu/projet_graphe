#include <stdio.h>
#include <stdlib.h>
#include "liste_arc.h"
#include "types.h"



main(){L_ARC la; T_ARC a;

	la = creer_liste_a();
	a.arrivee = 2;
	a.cout = 23;
	la = ajout_queue_a(a,la);


}
