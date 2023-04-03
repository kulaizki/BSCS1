#include <stdio.h>
#include <stdlib.h>

typedef struct nametype {
	char lname[16];
	char fname[24];
	char MI;
} nametype;

typedef struct studrec {
	nametype name;
	int ID;
	char course[8];
	int year;
} studrec;

typedef struct list {
	studrec rec[5];
	int count;
} LIST;

int main() {
	
	LIST x = {{{{"Singh", "Fitzsixto Angelo", 'L'}, 20103994, "BSCS", 1},
			   {{"Singh2", "Fitz2", 'L'}, 20103994, "BSCS", 1},
               {{"Singh3", "Fitz3", 'L'}, 20103994, "BSCS", 1},
			   {{"Singh4", "Fitz4", 'L'}, 20103994, "BSCS", 1},
			   {{"Singh5", "Fitz5", 'L'}, 20103994, "BSCS", 1}},
		5 // count
	};
		
	FILE *fp;
	fp = fopen("./data.dat", "w");
	
 	fwrite(&x, sizeof(LIST), 1, fp);
	
	fclose(fp);
	
	return 0;
}
