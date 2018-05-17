#include <stdio.h>

void augmentetas(int * pcc, int * tas, int i){ // doit ajouter les éléments au tas dans l'ordre de pcc croissant
	int temp = 0;
	while ((i > 0) && (pcc[tas[(i-1)/2]] < pcc[tas[i]])) {
		temp = tas[(i-1)/2];
		tas[(i-1)/2] = tas[i];			
		tas[i] = temp;
		i = (i-1)/2;	
	}
}

//void constructiontas(double * tas,int n){
//	int i;
	
//	for (i=0;i<n;i++){
//		augmentetas( tas,i);
//	} 
//	return;
//}


void descendretas(int * pcc, int * tas, int i,int n){
	int j =0;
	int temp;
	while((i-1)>=(2*j+2)){
		if (pcc[tas[j]]<pcc[tas[2*j+1]] && pcc[tas[2*j+1]]>pcc[tas[2*j+2]]){
			temp = tas[j];
			tas[j] = tas[2*j+1];
			tas[2*j+1] = temp;
			j = 2*j+1;
		}
		else if (pcc[tas[j]]<pcc[tas[2*j+2]]){
			temp = tas[j];
			tas[j] = tas[2*j+2];
			tas[2*j+2] = temp;
			j = 2*j+2;
		}
		else {
			break;
		}
	}
	if ( (i-1) == (2*j+1)){
		if (pcc[tas[j]] < pcc[tas[2*j+1]]){
			temp = tas[j];
			tas[j] = tas[2*j+1];
			tas[2*j+1] = temp;
		}
	}
	  
	
	/*int f1 = 1; int f2 = 2;
	int f0 = 0;
	double temp;
	int indmin;
	double min = minim(tas[f1],tas[f2]);
	
	if (min == tas[f1]) indmin = f1;
	else indmin = f2;

	while ( tas[f0]<tas[indmin] && indmin<i){
		temp = tas[f0];
		tas[f0] = tas[indmin];
		tas[indmin] = temp;

	
		f0 = indmin;
		f1 = 2*(f0+1);
		f2 = 2*(f0+1)+1;
		if ( (f1 > n) || (f2>n)){
			puts("Sortie du tableau");
			return;
		}
		min = minim(tas[f1],tas[f2]);
	
		if (min == tas[f1]) indmin = f1;
		else indmin = f2;
	}*/
}

void suppressiontas(int * pcc,int * tas, int i,int n){
	int temp = tas[0];
	tas[0] = tas[i-1];
	tas[i-1] = temp;
	descendretas(pcc,tas, i-1, n);
}

