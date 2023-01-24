#include <stdio.h>

main(){
int variable1, variable2;
int swap_position2, swap_position1;
printf("Enter two variable using space to swap: ");
scanf("%d %d", &variable1,  &variable2);

swap_position1 = variable2;
swap_position2 = variable1;
printf("%d ",swap_position1);
printf("%d ",swap_position2);

}
