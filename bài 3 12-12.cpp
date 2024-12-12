#include <stdio.h>

int main () {
	int a;
	float n;
	printf("====================CHUONG TRINH CHUYEN DOI TIEN TE====================\n");
	printf("1. USD to VND\n");
	printf("2. EUR to VND\n");
	printf("3. GBP to VND\n");
	printf("4. JPY to VND\n");
	printf("5. VND to USD\n");
	printf("6. VND to EUR\n");
	printf("7. VND to GBP\n");
	printf("8. VND to JPY\n");
	printf("Nhap don vi tien te ban muon chuyen doi (1-8) ?\n");
	scanf("%d", &a);
		switch (a) {
			case 1:
				printf("USD to VND, input : ");
				scanf("%f", &n);
				printf("%.2f USD = %.5f VND", n, n*23.500);
			break;
			case 2:
				printf("EUR to VND, input : ");
				scanf("%f", &n);
				printf("%.2f EUR = %.5f VND", n, n*25.000);
			break;
			case 3:
				printf("GBP to VND, input : ");
				scanf("%f", &n);
				printf("%.2f GBP = %.5f VND", n, n*28.000);
			break;
			case 4:
				printf("JPY to VND, input : ");
				scanf("%f", &n);
				printf("%.2f JPY = %.5f VND", n, n*0.180);
			break;
			case 5:
				printf("VND to USD, input : ");
				scanf("%f", &n);
				printf("%.2f VND = %.5f USD", n, n/23.500);
			break;
			case 6:
				printf("VND to EUR, input : ");
				scanf("%f", &n);
				printf("%.2f VND = %.5f EUR", n, n/25.000);
			break;
			case 7:
				printf("VND to GBP, input : ");
				scanf("%f", &n);
				printf("%.2f VND = %.5f GBP", n, n/28.000);
			break;
			case 8:
				printf("VND to JPY, input : ");
				scanf("%f", &n);
				printf("%.2f VND = %.5f JPY", n, n/0.180);
			break;
			default :
				printf("xin loi! lua chon cua ban khong duoc ho tro...");
			}
	return 0;
	}
