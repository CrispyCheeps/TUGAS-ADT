#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct date{
	int dd;
	int mm;
	int yyyy;
}date;

typedef struct time{
	int h;
	int m;
	int s;
}time;

typedef struct Login{
	int ID;
	date tglLogin;
	time waktuLogin;
}Login;


int main() {
	Login user1;
	
	printf("\t******************************************************\n");
	printf("\t\t    	ISHAK FEBRIANTO\n");
	printf("\t\t          19081010072 \n");
	printf("\t******************************************************\n\n");
	
	printf("\n\n");
	printf("\tUSER 1\n");
	printf("\tID\t:  "); scanf("%d",&user1.ID);
	system("cls");
	printf("Tanggal Login\n");
	printf("tanggal\t: "); scanf("%d",&user1.tglLogin.dd);
	printf("Bulan\t: "); scanf("%d",&user1.tglLogin.mm);
	printf("Tahun\t: "); scanf("%d", &user1.tglLogin.yyyy);
	system("cls");
	printf("Waktu Login\n");
	printf("Jam\t: "); scanf("%d", &user1.waktuLogin.h);
	printf("Menit\t: "); scanf("%d", &user1.waktuLogin.m);
	printf("Detik\t: "); scanf("%d", &user1.waktuLogin.s);
	printf("TERIMAKASIH\n");
	
	system("cls");
	printf("Data Anda:   \n");
	printf("ID\t: %d\n", user1.ID);
	printf("Date\t: %d-%d-%d \n", user1.tglLogin.dd, user1.tglLogin.mm, user1.tglLogin.yyyy);
	printf("Time\t: %d:%d:%d \n", user1.waktuLogin.h, user1.waktuLogin.m, user1.waktuLogin.s);
		
	return 0;
}
