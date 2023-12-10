#include <stdio.h>
#include <stdlib.h>
#include <string.h>



struct Stock_t
{
    char Stock_Name[3][50];
    int Stock_Number[3];
    int (*Stock_Buy)(int,int);
    int (*Stock_Sell)(int,int);
};


typedef struct Stock_t Stock_t;

Stock_t Stock_Handle;

void Stock_Init();
void Stock_Print();
int Buy(int stock_index,int number_of_stocks);
int Sell(int stock_index,int number_of_stocks);

int main()
{
	
    int Stock_Index,Stock_Number,temp;
	
    printf("\nPortfolio:========================\n");
    
    Stock_Init();
    
    int choice;
    
    
    do{
    printf("\nMenu:========================\n");
    printf("1. Sell Stock\n");
    printf("2. Buy Stock\n");
    printf("3. Print Stock Details\n");	
    printf("Choice:");
    scanf("%d",&choice);
    
    switch(choice)
    {
    	case 1:
    		
    		printf("Choose 1.MRF 2.CEAT 3.BAJAJ\n");
    		scanf("%d",&Stock_Index);
    		printf("How many: ");
    		scanf("%d",&Stock_Number);
    		temp=Stock_Handle.Stock_Sell(Stock_Index-1,Stock_Number);
    		if(temp==-1)
    		printf("There is nothing to sell!!!\n");
    		else
    		printf("Total number of %s stock %d\n",Stock_Handle.Stock_Name[Stock_Index-1],temp);
    		break;
    	case 2:
    		
    		printf("Choose 1.MRF 2.CEAT 3.BAJAJ\n");
    		scanf("%d",&Stock_Index);
    		printf("How many: ");
    		scanf("%d",&Stock_Number);
    		temp=Stock_Handle.Stock_Buy(Stock_Index-1,Stock_Number);
    		printf("Total number of %s stock %d\n",Stock_Handle.Stock_Name[Stock_Index-1],temp);
    		break;
    		
    	case 3:
    		printf("\nPortfolio:========================\n");
    		Stock_Print();
    		break;
    	default: 
    		printf("Invalid Request!!!\n");
    		break;
    }
    
    }while(choice);
    
    
    
    //buy 10 MRF Stocks
    //Stock_Handle.Stock_Buy(0,10);
    //Stock_Print();

    

    return 0;
}
void Stock_Init()
{
    // Initialize the first stock
    strcpy(Stock_Handle.Stock_Name[0], "MRF");
    Stock_Handle.Stock_Number[0] = 51;

    // Initialize the second stock
    strcpy(Stock_Handle.Stock_Name[1], "CEAT");
    Stock_Handle.Stock_Number[1] = 72;

    // Initialize the third stock
    strcpy(Stock_Handle.Stock_Name[2], "BAJAJ");
    Stock_Handle.Stock_Number[2] = 12;

    // Print the stock information
    for (int i = 0; i < 3; i++)
    {
        printf("Name: %s,", Stock_Handle.Stock_Name[i]);
        printf("\t Number: %d\n", Stock_Handle.Stock_Number[i]);
    }
    
    Stock_Handle.Stock_Buy=Buy;
    Stock_Handle.Stock_Sell=Sell;

}

void Stock_Print()
{
for (int i = 0; i < 3; i++)
    {
        printf("Name: %s,", Stock_Handle.Stock_Name[i]);
        printf("\t Number: %d\n", Stock_Handle.Stock_Number[i]);
    }
}

int Buy(int Stock_Index,int Stock_Number)
{
Stock_Handle.Stock_Number[Stock_Index]+=Stock_Number;
return Stock_Handle.Stock_Number[Stock_Index];
}

int Sell(int Stock_Index,int Stock_Number)
{
if((Stock_Handle.Stock_Number[Stock_Index]-Stock_Number)>=0)
{
Stock_Handle.Stock_Number[Stock_Index]-=Stock_Number;
return Stock_Handle.Stock_Number[Stock_Index];
}
else
return -1;
}
