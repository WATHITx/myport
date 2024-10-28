//Wathit Tritsananawakit 67070503495
#include <stdio.h>

int main(void) {
  
  float(price);
  scanf("%f",&price);
  if (price<0){
    printf("price is negative!");
    return 0;
  }

  int(pro);
  scanf("%d",&pro);

  int product;
  scanf("%d",&product);

  float priceafterdis;
  
  if(pro == 1){
    if(product==1 || product==2){
      if(price>=5000){
        priceafterdis=price*0.75;
      }
      else if(price>=2000){
        priceafterdis=price*0.85;
      }
      else if(price<2000){
        priceafterdis=price*0.90;
      }
    }else if(product==3){
      if(price>=5000){
        priceafterdis=price*0.80;
      }
      if(price>=2000){
        priceafterdis=price*0.90;
      }
      if(price<2000){
        priceafterdis=price*0.95;
      }
      
    }
       
        
    
  }else priceafterdis=price*1;
  float netprice;
  netprice=priceafterdis*1.07;
  
    printf("Net price after discount and tax: %.2f Baht\n",netprice);
  
}

  


  

