#include <stdio.h>
#include <string.h>

typedef struct Users
{
	char username[50];
	char email [50];
	char phone [20];
} User;

User createUser(char username[], char email[], char phone[])
{
	User u;

	strcpy(u.username, username);
	strcpy(u.email, email);
	strcpy(u.phone, phone);

	return u;
}

void printUser(struct Users *user)
{
	printf ("username: %s\n", user->username);
	printf ("email: %s\n", user->email);
	printf ("phone: %s\n", user->phone);
}


int main () {

	User user1;

	user1 = createUser("Enricho Alkalas", "enrichoalkalas01@gmail.com", "087882820337");

	printUser(&user1);
}