#include <stdio.h>
#include <math.h>
 
int main(){
    int n;
    printf("\nNhap n = ");
    scanf("%d", &n);
    if(n < 2){
        printf("\n%d ko la so nguyen to", n);
        return 0;
    }
    int dem = 0;
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            dem++;
        }
    }
    if(dem == 0){
        printf("\n%d la so nguyen to", n);
    }else{
        printf("\n%d ko la so nguyen to", n);
    }
}
