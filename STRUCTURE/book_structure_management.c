//Structure -- Book structure management (3 books)

#include <stdio.h>


struct Books {
	char title[50], author[30];
	double price;
	
};

int most_expensive (struct Books b[3]);			//function call
int least_expensive (struct Books b[3]);


int main () {
	struct Books book[3];
	
	for (int i = 0; i<3; i++){					//book input
		printf("Book title: ");
		scanf(" %[^\n]", book[i].title); 
		
		printf("Book author: ");
		scanf(" %[^\n]", book[i].author);
		
		printf("Book price: ");
		scanf("%lf", &book[i].price);
		printf("\n");
	}
	
	
	int expensive = most_expensive(book);		//function call
	int cheap = least_expensive(book);
	
	printf("----------------------------------\n");
	printf("Most expensive book among 3:\n");
	printf("Book title: %s\n", book[expensive].title);
	printf("by %s\n", book[expensive].author);
	printf("Price: %.2lf\n", book[expensive].price);
	
	printf("\nLeast expensive book among 3:\n");
	printf("Book title: %s\n", book[cheap].title);
	printf("by %s\n", book[cheap].author);
	printf("Price: %.2lf\n", book[cheap].price);
	
	return 0;
}

int most_expensive (struct Books b[3]){
	int most_expensive = b[0].price;
	int temp;
	
	for (int i = 0; i<3; i++){
		if (b[i].price > most_expensive){
			most_expensive = b[i].price;
			temp = i;
		}
	}
	
	return temp;
}

int least_expensive (struct Books b[3]){
	int least_expensive = b[0].price;
	int temp;
	
	for (int i = 0; i<3; i++){
		if (b[i].price < least_expensive){
			least_expensive = b[i].price;
			temp = i;
		}
	}
	
	return temp;
}
