#include <stdio.h>
#define m 5
#define n 5
int magara[m][n] = {
    {1, 0, 0, 0, 0},
    {1, 1, 9, 1, 1},
    {0, 1, 0, 0, 1},
    {1, 1, 1, 9, 1},
    {0, 0, 1, 1, 7}
};
int ex[m][n]={0};

int mons(int arr[m][n],int satır,int sütun) {//ikiye bölmemizin sebebi daha büyük matrislerde hata vermemesi
    if (satır<0||sütun<0||satır>=m||sütun>=n) return 0;
    if (arr[satır][sütun]==0||arr[satır][sütun]==9||ex[satır][sütun]==1) return 0;

    if (arr[satır][sütun]==7) {
        ex[satır][sütun]=7;
        for (int i=0;i<m;i++) {
            for (int j=0;j<n;j++) {
                printf("%3d",ex[i][j]);
            }printf("\n");
        }
    }


    if (arr[satır][sütun]==1) {
        ex[satır][sütun]=1;
        if (mons(arr,satır,sütun+1)) return 1;
        if (mons(arr,satır+1,sütun)) return 1;
        if (mons(arr,satır,sütun-1)) return 1;
        if (mons(arr,satır-1,sütun)) return 1;
    }
    ex[satır][sütun]=0;
    return 0;

}
int main() {
    mons(magara,0,0);
}
