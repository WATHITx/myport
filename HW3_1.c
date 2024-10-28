//Wathit Tritsananawakit 67070503495
#include <stdio.h>
int main() {
  int waterprice = 7;
  int sodaprice = 13;
  int juiceprice = 20;
    
  int drink;
  scanf("%d", &drink);
  float moneyinput;
  scanf("%f", &moneyinput);

    
  if (drink < 1 || drink > 3) {
    printf("Invalid choice!\n");
    return 0;
  }
  
  int drinkprice;
  const char* drinkname;

  switch (drink) {
      case 1:
          drinkprice = waterprice;
          drinkname = "Water";
          break;
      case 2:
          drinkprice = sodaprice;
          drinkname = "Soda";
          break;
      case 3:
          drinkprice = juiceprice;
          drinkname = "Juice";
          break;
  }
  float change;

  if (moneyinput < drinkprice) {
      printf("Insufficient funds\n");
  } 
  else if (moneyinput == drinkprice) {
      printf("Dispensing your drink: %s\n", drinkname);
      printf("No change\n");
  } 
  else { 
      change = moneyinput - drinkprice;
      printf("Dispensing your drink: %s\n", drinkname);
      printf("Here is your change: %.2f\n", change);
  }

  return 0;
}

  

  


  

