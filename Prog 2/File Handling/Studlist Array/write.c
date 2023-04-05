#include <stdio.h>

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
	
	LIST x = {{{{"Singh", "Fitzsixto", 'A'}, 20103994, "BSCS", 1},
			   {{"Lim", "Reece", 'B'}, 20103994, "BSCS", 1},
               {{"de Jesus", "Christian", 'C'}, 20103994, "BSCS", 1},
			   {{"Go", "Philip", 'D'}, 20103994, "BSCS", 1},
			   {{"Bonghanoy", "Samuel", 'E'}, 20103994, "BSCS", 1}},
		5 // count
	};
		
	FILE *fp;
	fp = fopen("./data.dat", "w");
	
 	fwrite(&x, sizeof(LIST), 1, fp);
	
	fclose(fp);
	
	return 0;
}
