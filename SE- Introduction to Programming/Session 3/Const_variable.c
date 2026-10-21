#include <stdio.h>

int main() {
    
    const int GST_RATE = 18; 
    
    int basePrice = 450; 
    int gstAmount = (basePrice * GST_RATE) / 100;
    int finalPrice = basePrice + gstAmount;

    printf("=== Zomato Order ===\n");
    printf("Base Price  : %d\n", basePrice);
    printf("GST Rate    : %d%%\n", GST_RATE);
    printf("GST Amount  : %d\n", gstAmount);
   
    printf("Final Price : %d\n", finalPrice);

    return 0;
}