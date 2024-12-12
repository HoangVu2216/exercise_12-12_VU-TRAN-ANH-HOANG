#include <stdio.h>

int main() {
	int n;
	printf("nhap so gio lam viec tren mot thang = ");
	scanf("%d", &n);
	float tien_luong = 20.000*n;
		if (n>160) {
			printf("vi ban da lam tren 160h trong thang nay nen tien luong thang nay theo gio cung voi tro  cap la %.3f d", (tien_luong+(tien_luong*0.1)));
			}
		else {
			printf("tien luong thang nay theo gio la %.3f d", tien_luong);
			}

return 0;
}
