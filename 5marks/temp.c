#include <stdio.h>

int main(){
  char name[10];
  printf("enter your name \n");
  scanf("%s",&name);

  int shirts,pants,socks,belts;
  printf(" enter the number of shirts  \n ");
  scanf("%d",&shirts);

  printf(" enter the number of pants \n");
  scanf("%d",&pants);

  printf(" enter the number of socks \n");
  scanf("%d",&socks);

  printf(" enter the number of belts \n");
  scanf("%d",&belts);


  int Rs = 500 * shirts;
  
  int Rp = 800 * pants;
  
  int Rsoc = 300 * socks;
 
  int RBelt = 1000 * belts;


  //int total  = Rs + Rp + Rsoc + RBelt;
  int total = 1300;

  printf("total is %d", total);

  int discount ;

  if(total > 2500){
     discount  = 0.2*total;
  }
  else{
     discount = 0.05 *  total; 
  }

  printf("discount is %d \n", discount );

  int finalPrice = total - discount ;
  printf(" so the final price after dicount is  %d \n", finalPrice);


return 0;
}