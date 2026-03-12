#include <stdio.h>

#define satır 6
#define sütün 12

int labirent[satır][sütün] = {
    {1,0,1,1,1,0,0,1,0,1,1,0},
    {1,0,1,1,1,1,1,0,1,0,0,0},
    {1,1,1,1,1,1,0,1,0,1,0,0},
    {0,1,0,1,0,1,0,1,1,1,1,1},
    {0,1,0,1,1,1,1,1,0,0,0,1},
    {1,1,1,0,1,1,1,1,1,1,1,1}
};

int yol[satır][sütün] = {0};

int labçöz(int x, int y) {
    if (x < 0 || y < 0 || x >= satır || y >= sütün || labirent[x][y] == 0 || yol[x][y] == 1) {
        return 0;
    }

    yol[x][y] = 1;

    if (x == satır - 1 && y == sütün - 1) {
        return 1;
    }


    if (labçöz(x, y + 1)) return 1; // Sağ
    if (labçöz(x + 1, y)) return 1; // Aşağı
    if (labçöz(x, y - 1)) return 1; // Sol
    if (labçöz(x - 1, y)) return 1; // Yukarı

    yol[x][y] = 0;
    return 0;
}

int main() {
    printf("--Labirentten Cikis--\n\n");

    if (labçöz(0, 0)) {
        for (int m = 0; m < satır; m++) {
            for (int j = 0; j < sütün; j++) {
                printf("%d ", yol[m][j]);
            }
            printf("\n");
        }
    } else {
        printf("Cikis yolu bulunamadi!\n");
    }

    return 0;
}
