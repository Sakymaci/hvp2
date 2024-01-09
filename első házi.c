#include <stdio.h>

int main () {
	int elso = 0 , masodik= 0, harmadik=0;
	printf("\nkerem az elso szamot: ");
	scanf("%d", &elso);
	printf("\nkerem a masodik szamot: ");
	scanf("%d", &masodik);
	printf("\nkerem a harmadik szamot: ");
	scanf("%d", &harmadik);
	int eredmeny = (elso+masodik)*harmadik;
	printf("\naz eredmeny: %d, %x, %o" , eredmeny);
	return 0;
}
