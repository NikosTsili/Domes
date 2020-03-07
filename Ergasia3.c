#include <stdio.h>
#include <string.h>


struct address{
	char street[20];
	char city[20];
	char tk[7];
};


struct student{
	char am[10];
	char surname[20];
	char name[20];
	char fname[20];
	char mname[20];
	struct address saddress;
	char phone[12];
	char mobile[12];
	char course[20];
}foititis[10];

int main(void){
	
	int i;
	strcpy(foititis[0].am, "100");
	strcpy(foititis[0].surname, "Tsilikas");
	strcpy(foititis[0].name, "Nikos");
	strcpy(foititis[0].course, "C");
	strcpy(foititis[1].am, "101");
	strcpy(foititis[1].surname, "Tsilikas");
	strcpy(foititis[1].name, "Kostas");
	strcpy(foititis[1].course, "Python");
	strcpy(foititis[2].am, "102");
	strcpy(foititis[2].surname, "Tsilikas");
	strcpy(foititis[2].name, "Christos");
	strcpy(foititis[2].course, "C");

	for (i=0;i<4;i++){
		printf("AM: %s\n", foititis[i].am);
		printf("Surname: %s\n", foititis[i].surname);
		printf("Name: %s\n", foititis[i].name);
		printf("Father's name: %s\n", foititis[i].fname);
		printf("Mother's name: %s\n", foititis[i].mname);
		printf("Street address: %s\n", foititis[i].saddress.street);
		printf("City: %s\n", foititis[i].saddress.city);
		printf("TK: %s\n", foititis[i].saddress.tk);
		printf("Phone: %s\n", foititis[i].phone);
		printf("Mobile phone: %s\n", foititis[i].mobile);
		printf("Course: %s\n\n", foititis[i].course);
	}


	
		struct student *crs;
		crs=foititis;
		char searchcourse[20];

		printf("Which course to search?");
		scanf("%s", searchcourse);
		printf("Students who chose course %s:", searchcourse);

		for (i=0;i<4;i++){
			if (strcmp(searchcourse, (crs+i)->course)==0){
				printf("AM: %s\n", foititis[i].am);
				printf("Surname: %s\n", foititis[i].surname);
				printf("Name: %s\n", foititis[i].name);
				printf("Father's name: %s\n", foititis[i].fname);
				printf("Mother's name: %s\n", foititis[i].mname);
				printf("Street address: %s\n", foititis[i].saddress.street);
				printf("City: %s\n", foititis[i].saddress.city);
				printf("TK: %s\n", foititis[i].saddress.tk);
				printf("Phone: %s\n", foititis[i].phone);
				printf("Mobile phone: %s\n", foititis[i].mobile);
				printf("Elected course: %s\n", foititis[i].course);
			}
			
		}
		return 0;
	}
