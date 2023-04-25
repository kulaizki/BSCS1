#include<stdio.h>
#include<string.h>

#define MAX 10

typedef struct{
	int ID;
	int code;
	char gender;
} studType;

typedef struct{
	studType students[MAX];
	int count;
} studList;

int searchItem(studList list, int ID);
studList getStudentsByGender(studList L, char sex);
void displayList(studList L);
void insertLast(studList *L, studType S);

int main() {
	studList list = 
	{
		{		
			{10,100,'M'},
			{20,200,'F'},
			{30,300,'F'},
			{40,400,'M'},	
		},4
	};
	
	printf("\nStudent with ID 10 found? (%d)  ",searchItem(list,10));
	
	printf("\nStudent with ID 11 found? (%d)\n",searchItem(list,11));
	
	displayList(list);
	
	studList females = getStudentsByGender(list, 'F');
	
	displayList(females);
	
	studType S = {5,111,'F'};
	
	insertLast(&list,S);
	
	displayList(list);
	
	return 0;
}

int searchItem(studList list, int ID){
	//returns 1 id the student with the given ID is found in the list,
	//otherwise returns 0
	int x;
	for (x = 0; x < list.count && list.students[x].ID != ID; x++){}
	return (x < list.count) ? 1 : 0;
}

studList getStudentsByGender(studList L, char sex){
	//creates and returns a list of students with the given gender
	studList newList = {{}, 0};
	int x;
	for (x = 0; x < L.count; x++) {
		if (L.students[x].gender == sex){
			newList.students[newList.count++]=L.students[x];
		}
	}
	return newList;
}

void displayList(studList L){
	int x;
	for(x = 0; x < L.count; x++) {
		printf("\n %d \t %d \t %c", L.students[x].ID,L.students[x].code,L.students[x].gender);
	}
	printf("\n");
}

void insertLast(studList *L, studType S){
	if (L->count < MAX){
		L->students[L->count++] = S;
	} else {
		printf("List out of space");
	}
}
