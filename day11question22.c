#include <stdio.h>
#include <stdlib.h>

// Function to calculate profit or loss percentage
void calculateProfitOrLoss(float costPrice, float sellingPrice)
{
    if (costPrice <= 0)
    {
        printf("Invalid input: Cost price must be greater than zero.\n");
        return;
    }

    if (sellingPrice > costPrice)
    {
        // Profit case
        float profit = sellingPrice - costPrice;
        float profitPercentage = (profit / costPrice) * 100;
        printf("Profit: %.2f\n", profit);
        printf("Profit Percentage: %.2f%%\n", profitPercentage);
    }
    else if (sellingPrice < costPrice)
    {
        // Loss case
        float loss = costPrice - sellingPrice;
        float lossPercentage = (loss / costPrice) * 100;
        printf("Loss: %.2f\n", loss);
        printf("Loss Percentage: %.2f%%\n", lossPercentage);
    }
    else
    {
        // No profit, no loss
        printf("No Profit, No Loss.\n");
    }
}

int main()
{
    float costPrice, sellingPrice;

    // Input cost price and selling price
    printf("Enter the Cost Price (CP): ");
    if (scanf("%f", &costPrice) != 1 || costPrice <= 0)
    {
        printf("Invalid input. Please enter a valid positive number for Cost Price.\n");
        return 1;
    }

    printf("Enter the Selling Price (SP): ");
    if (scanf("%f", &sellingPrice) != 1)
    {
        printf("Invalid input. Please enter a valid number for Selling Price.\n");
        return 1;
    }

    // Calculate and display profit or loss percentage
    calculateProfitOrLoss(costPrice, sellingPrice);

    return 0;
}
