#include <stdio.h>
#define m 3
#define n 3

int treasure[m][n]={
    {1,2,3},
    {4,5,6},
    {7,8,9}};
int hunt[m][n]={0};
int treasurehunt(int arr[m][n],int satır,int sütun) {
    if (satır>=m) {printf("Hazine bulunamadı");return 0;}
    if (sütun>=n) return treasurehunt(arr,satır+1,0);
    if (arr[satır][sütun]==7){printf("Hazine Bulundu !!\n\n");
        hunt[satır][sütun]=7;
        for (int i=0;i<n;i++) {
            for (int j=0;j<m;j++) {
                printf("%3d",hunt[i][j]);
            }
            puts("\n");
        }
        return 0;
    }
    return treasurehunt(arr,satır,sütun+1);

}
int main() {
    treasurehunt(treasure,0,0);
}
