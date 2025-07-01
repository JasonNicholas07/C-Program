//Structure - Grade and Age Classification

#include <stdio.h>

struct Student{
	char name[30];
	int age, grade;

};

char gradeClass(struct Student s);


int main () {
	struct Student student[2];
	
	printf("Input your 2 students data!\n");
	for (int i = 0; i<2; i++){					//read input
		printf("Name: ");
		scanf("%s", &student[i].name);
		
		printf("Age: ");
		scanf("%d", &student[i].age);
		
		printf("Grade: ");
		scanf("%d", &student[i].grade);
		
		printf("\n");
	}
	
	printf("Grade Classification\n");
	for (int i = 0; i<2; i++){										//output
		printf("Name: %s\n", student[i].name);
		
		if(student[i].age > 19){
			printf("Adult (19+)\n");
		} else if (student[i].age >=13 && student[i].age <=19){
			printf("Teens (13-19)\n");
		} else if (student[i].age < 13){
			printf("Kids (< 13)\n");
		}
		
		printf("Grade: %d\n", student[i].grade);
		printf("Class: %c\n", gradeClass(student[i]));
		printf("\n");
	}
	
	
	
	return 0;
}


char gradeClass(struct Student s){
	if (s.grade>90){
		return 'A';
	} else if (s.grade>80){
		return 'B';
	} else if (s.grade>70){
		return 'C';
	}
	
	
}
