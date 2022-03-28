#include <stdio.h>
int ver (int ab[3][2],int id, int pin){
    int flag = 0;
    for(int i = 0; i<3; i++){
        if(id == ab[i][0] && pin == ab[i][1]){
            flag = 1;
        }
    }
    return flag;
}
int main(){
    int ab[3][2] = {{1111,2222},{3333,4444},{5555,6666}};
    int id,pin;
    printf("ENTER ID NUNBER: ");
    scanf("%d",&id);
    printf("ENTER PIN: ");
    scanf("%d",&pin);
    if(ver(ab,id,pin)){
        printf("You have successfully logged in\nID#:%d",id);
    } else {
        printf("Invalid ID/PIN! Please Try Again.");
    }
    return 0;
}
