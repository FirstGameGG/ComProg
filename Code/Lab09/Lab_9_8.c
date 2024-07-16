#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct _product {
    char name[30];
    int amount;
    double totalCost;
} Product;

void printStock(Product stock[], int nStock)
{
    int i;
    printf("%-20s|%6s|%-10s\n", "    Product Name", "Amount", "     Total");
    for (i = 0; i < nStock; i++) {
        printf("%-20s|%6d|%10.2lf\n",
            stock[i].name, stock[i].amount, stock[i].totalCost);
    }
}

void reportStock(char *filename)
{
    FILE *file = fopen(filename, "r");

    int nProduct = 0, find = 0, amount = 0, endpoint = 0;
    double cost = 0;
    char name[100];    
    fscanf(file, "%d", &nProduct);

    Product *stock = (Product *)malloc(nProduct * sizeof(Product));
    for (int i = 0; !feof(file); i++) {
        fscanf(file ,"%*[^,],%*[^,],%[^,],%d,%lf\n", name, &amount, &cost);
        find = 0;
        for(int j = 0; j < endpoint; j++){
            if(strcmp(name,stock[j].name) == 0){
                stock[j].amount += amount;
                stock[j].totalCost += cost;
                find = 1;
                break;
            }
        }
        if (!find){
            strcpy(stock[endpoint].name,name);
            stock[endpoint].amount = amount;
            stock[endpoint].totalCost = cost;
            endpoint++;
        }
    }

    printStock(stock, nProduct);
    free(stock);
    fclose(file);
}


int main()
{
    char filename[20];
    scanf("%s", filename);
    reportStock(filename);
}