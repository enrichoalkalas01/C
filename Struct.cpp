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

	printf ("%s, %s, %s, %s, %d\n", user1.username, user1.email, user1.dob, user1.phone, user1.age);
	printf ("%s, %s, %s, %s, %d\n", user2.username, user2.email, user2.dob, user2.phone, user2.age);

}