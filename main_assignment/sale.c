#include <stdio.h>

int main() {
    // Land area per crop (80 acres divided into 5 segments)
    float totalLand = 80.0;
    float landPerCrop = totalLand / 5;

    // Crop yields and prices per acre
    float tomatoYield1 = 10.0, tomatoYield2 = 12.0;
    float potatoYield = 10.0, cabbageYield = 14.0;
    float sunflowerYield = 0.7, sugarcaneYield = 45.0;

    float tomatoPrice = 7.0, potatoPrice = 20.0, cabbagePrice = 24.0;
    float sunflowerPrice = 200.0, sugarcanePrice = 4000.0;

    // Area distribution for each crop
    float tomatoLand = landPerCrop, potatoLand = landPerCrop;
    float cabbageLand = landPerCrop, sunflowerLand = landPerCrop, sugarcaneLand = landPerCrop;

    // Sales for each crop
    float tomatoSales = 0.0, potatoSales = 0.0, cabbageSales = 0.0;
    float sunflowerSales = 0.0, sugarcaneSales = 0.0;

    // Tomatoes (30% and 70% yield)
    float tomatoLand30 = tomatoLand * 0.30;
    float tomatoLand70 = tomatoLand * 0.70;

    // Calculate sales for tomatoes
    tomatoSales = (tomatoLand30 * tomatoYield1 * 1000 * tomatoPrice) + 
                  (tomatoLand70 * tomatoYield2 * 1000 * tomatoPrice);

    // Calculate sales for potatoes
    potatoSales = potatoLand * potatoYield * 1000 * potatoPrice;

    // Calculate sales for cabbage
    cabbageSales = cabbageLand * cabbageYield * 1000 * cabbagePrice;

    // Calculate sales for sunflowers
    sunflowerSales = sunflowerLand * sunflowerYield * 1000 * sunflowerPrice;

    // Calculate sales for sugarcane
    sugarcaneSales = sugarcaneLand * sugarcaneYield * sugarcanePrice;

    // Overall sales from all crops
    float totalSales = tomatoSales + potatoSales + cabbageSales + sunflowerSales + sugarcaneSales;

    // Sales realization from chemical-free farming (only vegetables converted to chemical-free)
    // Tomato, Potato, and Cabbage are converted to chemical-free in the first 11 months
    float chemicalFreeSales = tomatoSales + potatoSales + cabbageSales;

    // Output the results
    printf("Overall Sales Achieved by Mahesh: Rs. %.2f\n", totalSales);
    printf("Sales Realisation from Chemical-Free Farming at the End of 11 Months: Rs. %.2f\n", chemicalFreeSales);

    return 0;
}
