#include <stdio.h>

int main() {
    
    char*productName = "Wireless Mouse";
    float price = 699.50;
    double rating = 4.5;

    printf("=== Flipkart Product ===\n");
    printf("Product Name : %s\n", productName);
    printf("Price  : %f\n", price);
    printf("Rating : %lf\n", rating);

    return 0;
}