#define MAX 10
#include<stdio.h>
#include<string.h>

typedef struct{
	int ID;
	int code;
	char gender;
}studType;

typedef struct{
	studType students[MAX];
	int count;
}studList;

int searchItem(studList list, int ID);
studList getStudentsByGender(studList L, char sex);
void displayList(studList L);
void insertLast(studList *L, studType S);
void insertSorted(studList *L, studType S);
void deleteElem(studList *L, int ID);
studList transferStudentsByGender(studList *L, char sex);

int main(){
	studList list = 
	{
		{		
			{10,100,'M'},
			{20,200,'F'},
			{30,300,'F'},
			{40,400,'M'},	
		},4
	};
	
	printf("\n=== TASK 1: INITIALIZE AND DISPLAY LIST ===");
	displayList(list);
	
	printf("\n=== TASK 1: SEARCH ELEMENTS IN LIST ===");
	printf("\nStudent with ID 10 found? (%d)  ",searchItem(list,10));
	printf("\nStudent with ID 11 found? (%d)\n",searchItem(list,11));
	
	printf("\n=== TASK 3: GET A LIST OF FEMALES AND DISPLAY IT ===");
	studList females = getStudentsByGender(list, 'F');
	displayList(females);

	printf("\n=== TASK 4: INSERT AN ELEMENT AT THE END OF THE LIST ===");	
	printf("\n(Inserting ID:50)");
	studType S = {50,111,'F'};
	insertLast(&list,S);
	displayList(list);

	printf("\n=== TASK 5: INSERT AN ELEMENT IN ITS SORTED POSITION IN LIST ===");
	printf("\n(Inserting ID:25)");	
	studType T = {25,1234,'M'};
	insertSorted(&list,T);
	displayList(list);

	printf("\n=== TASK 6: DELETE AN ELEMENT IN THE LIST (IF ELEMENT IS FOUND) ===");
	printf("\n(Deleting ID:30 - found)");
	deleteElem(&list,30);
	displayList(list);
	printf("\n(Deleting ID:15 - not found)");	
	deleteElem(&list,15);
	displayList(list);

	printf("\n=== TASK 7: TRANSFER MALE STUDENTS TO ANOTHER LIST AND DISPLAY THE RESULTING LISTS ===");	
	studList males = transferStudentsByGender(&list, 'M');
	displayList(list);
	displayList(males);
	
	
	return 0;
}

int searchItem(studList list, int ID){
	//returns 1 id the student with the given ID is found in the list,
	//otherwise returns 0
	int x;
	//   not reached end of list && target item not found
	for(x=0; x<list.count && list.students[x].ID != ID; x++){}
	return (x<list.count) ? 1 : 0;
}

studList getStudentsByGender(studList L, char sex){
	//creates and returns a list of students with the given gender
	studList newList = {{},0};
	int x;
	for(x=0;x<L.count;x++){
		if(L.students[x].gender == sex){
			newList.students[newList.count++]=L.students[x];
		}
	}
	return newList;
}

void displayList(studList L){
	int x;
	for(x=0;x<L.count;x++){
		printf("\n %d \t %d \t %c",L.students[x].ID,L.students[x].code,L.students[x].gender);
	}
	printf("\n");
}

void insertLast(studList *L, studType S){
	if(L->count < MAX){
		L->students[L->count++] = S;
	} else {
		printf("List out of space");
	}
}

void insertSorted(studList *L, studType S){
	int x,y;	
	if(L->count < MAX){
		
		//insertion process here if there is still space in the array
		//x - index where element will be inserted
		for(x=0; x<L->count && L->students[x].ID < S.ID; x++){}
		
		
		//version 1: loop
		//for(y=L->count; y>x; y--){
		//	L->students[y] = L->students[y-1];
		//}
		
		//version 2: memmove
		memmove(&L->students[x+1],&L->students[x],(L->count-x)*sizeof(studType));
		
		L->students[x] = S;
		L->count++;
		
	} else {
		printf("List out of space");
	}	
}

void deleteElem(studList *L, int ID){
	int x,y;
	for(x=0; x<L->count && L->students[x].ID != ID; x++){}
	if (x<L->count){
		
		//deletion process
		L->count--;
		
		//version 1: loop
		for(y=x;y<=L->count;y++){
			L->students[y] = L->students[y+1];
		}
		
		//version 2: memmove
		//memmove(&L->students[x],&L->students[x+1],(L->count-x)*sizeof(studType));

		
	}
}

studList transferStudentsByGender(studList *L, char sex){
	//creates and returns a list of students with the given gender
	studList newList = {{},0};
	int x;
	for(x=0;x<L->count;){ //do not put x++ here to avoid skipping adjacent items
		if(L->students[x].gender == sex){
			
			//copy the target item to new list
			newList.students[newList.count++]=L->students[x];
			
			//remove the target item from old list
			L->count--;
			memmove(&L->students[x],&L->students[x+1],(L->count-x)*sizeof(studType));
		} else {
			x++;
		}
	}
	return newList;
}
