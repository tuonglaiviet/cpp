#include<stdio.h>
#include<string.h>
#include<time.h>
struct  tau{
      int tau_hour;
      int tau_min;
      int tau_wday;
      int tau_mon;
      int tau_year;
      char chuyentau[50];
      char nhaga[50];
};
int main(){
    struct tau e1,e2;
    e1.tau_hour = 7;
    e1.tau_min= 30;
    e1.tau_wday=2;
    e1.tau_mon=2;
    e1.tau_year =123;
   strcpy(e1.chuyentau, ”Ha Noi toi TP HCM”);
   strcpy(e1.nhaga, ”Ha Noi”);
   
   e2.tau_hour = 8;
    e2.tau_min= 45;
    e2.tau_wday=3;
    e2.tau_mon=2;
    e2.tau_year =123;
   strcpy(e2.chuyentau, ”TP HCM toi Ha Noi”);
   strcpy(e2.nhaga, ”TP HCM”);
 
  printf(“Chuyen tau 1: %s\n”, e1.chuyentau);
printf(“Nha ga 1 : %s\n”, e1.nhaga);


printf(“Chuyen tau 2: %s\n”, e2.chuyentau);
printf(“Nha ga 2: %s\n”, e2.nhaga);

puts(asctime(&t));

return 0;
}
