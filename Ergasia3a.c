#include <stdio.h>
#include <string.h>

void pointercourse(char course[]);

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
	for (i=0;i<10;i++){
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
	

	void pointercourse(char course[20]){
		struct student *crs;
		crs=foititis;

		for (i=0;i<10;i++){
			if (strcmp(course, crs->course)==0){
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
	}

return 0;

}