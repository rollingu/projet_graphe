#include <stdio.h>
#include <stdlib.h>






main(){
	FILE* 	pf = NULL;
	int i;
	char mot[512];
	while(1){
	pf = fopen("metroetu.csv", "rt");
	scanf("%d",&i);
	i +=2;
	for (;i>-1;i--){
	    fgets(mot,511,pf);}
	printf("%s \n", mot);
	fclose(pf);
	}

}
