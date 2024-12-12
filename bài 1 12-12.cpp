#include <stdio.h>

int main() {
    char *ho_ten[] = {
        "Nguyen Van A", "Nguyen Van B", "Nguyen Van C"
    };
    char *Toan[] = {
        "7.5", "7.0", "6.5"
    };
    char *Vat_Ly[] = {
        "7.0", "8.5", "7.2"
    };
    
    char *Hoa[] = {
        "5.5", "9.0", "6.5"
    };
    char *Sinh[] = {
        "8.5", "5.0", "10.0"
    };
    char *Van[] = {
        "7.5", "6.5", "5.5"
    };
	char *Diem_TB[] = {
        "7.4", "7.7", "7.2"
    };
    printf("------------------------------------------------------------------------------------\n");
    printf("| %-3s | %-20s | %6s | %6s | %6s | %6s | %6s | %7s|\n", "STT", "Ho va ten", "Toan", "Vat Ly", "Hoa", "Sinh", "Van", "Diem TB");
    printf("------------------------------------------------------------------------------------\n");

    for (int i = 0; i < 3; i++) {
        printf("| %-3d | %-20s | %6s | %6s | %6s | %6s | %6s | %6s |\n", i + 1, ho_ten[i], Toan[i], Vat_Ly[i], Hoa[i], Sinh[i], Van[i], Diem_TB[i]);
        printf("------------------------------------------------------------------------------------\n");
    }

    return 0;
}

