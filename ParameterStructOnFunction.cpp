#include <stdio.h>
#include <string.h>

struct Users
{
	char username[50];
	char email [50];
	char dob [20];
	int age;
	char phone [20];
};

void printUser(struct Users *user)
{
	printf ("username: %s\n", user->username);
	printf ("email: %s\n", user->email);
	printf ("dob: %s\n", user->dob);
	printf ("age: %d\n", user->age);
	printf ("phone: %s\n", user->phone);
}

int main () {

	struct Users user1;
	struct Users user2;

	strcpy(user1.username, "Enricho Alkalas");
	strcpy(user1.email, "enrichoalkalas01@gmail.com");
	strcpy(user1.dob, "17 August 1990");
	strcpy(user1.phone, "087882820337");
	user1.age = 28;

	strcpy(user2.username, "Eko Maharanto");
	strcpy(user2.email, "eko17488@gmai.com");
	strcpy(user2.dob, "7 April 1980");
	strcpy(user2.phone, "087775863932");
	user2.age = 38;

	printUser(&user1);
	printUser(&user2);
}