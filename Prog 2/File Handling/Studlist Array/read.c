#include <stdio.h>

typedef struct nametype{
	char lname[16];
	char fname[24];
	char MI;
}nametype;

typedef struct studrec{
	nametype name;
	int ID;
	char course[8];
	int year;
} studrec;

typedef struct list{
	studrec rec[5];
	int count;
} LIST;

void PrintList(LIST myList);

int main(){
	
	FILE *fp;
	fp = fopen("./data.dat", "r");
	
	studrec filestudents;
	LIST mystudents;
	mystudents.count == 0;
	
	if (fp == NULL) {
		printf("file doesnt exist idk check it yourself");
	} else {
	    while(fread(&filestudents, sizeof(studrec), 1, fp) != 0) {
    	    mystudents.rec[mystudents.count++] = filestudents;
	    }
    }
    
	fclose(fp);
	
	PrintList(mystudents);
	
	return 0;
}

void PrintList(LIST myList) {
    
	int x;
	
	for (x = 0; x < myList.count; x++) {
		printf("%s, ", myList.rec[x].name.lname);
		printf("%s ", myList.rec[x].name.fname);
		printf("%c. ", myList.rec[x].name.MI);
		printf("%d ", myList.rec[x].ID);
		printf("%s-%d\n", myList.rec[x].course, myList.rec[x].year);
	}
}