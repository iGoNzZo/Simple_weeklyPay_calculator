#include <stdio.h>

int payCode;
int hoursWorked;
int overTimeHours;
int numberOfItemsSold;

float pricePerItem;
float hourlyWage;
float grossSales;
float salary;
float salaryOT;
 
main(void)	{
	
	printf("Enter employee type pay code (-1 to Exit): ");
	scanf("%d", &payCode);
	
	while(payCode != (-1))	{
		
		switch (payCode)	{
		
		case 1:
			printf("Enter weekly salary for manager: ");
			scanf("%f", &salary);
			break;
			
		case 2:
			printf("Enter hours worked this week: ");
			scanf("%d", &hoursWorked);
			
			printf("Enter hourly wage (ex. 00.00): ");
			scanf("%f", &hourlyWage);
			
			if(hoursWorked > 40)	{
				overTimeHours = hoursWorked % 40;
				salary = (hoursWorked * hourlyWage) + (overTimeHours * (1.5 * hourlyWage));
			}
			else	{
				salary = (hoursWorked * hourlyWage);
			}
			break;
			
		case 3:
			printf("Enter gross weekly sales (ex. 00.00): ");
			scanf("%f", &grossSales);
			
			salary = 250 + (.057 * grossSales);
			break;
			
		case 4:
			printf("Enter the # of items sold this week: ");
			scanf("%d", &numberOfItemsSold);
			
			printf("Enter the price per item (ex. 00.00): ");
			scanf("%f", &pricePerItem);
			salary = numberOfItemsSold * pricePerItem;
			break;
			
		default: 
			printf("invalid pay code: %d", payCode);
		}
		
		printf("\n");
		printf("Weekly salary: $%.2f\n", salary);
		
		
		salary = 0.0;
		printf("\n");
		printf("Enter employee type pay code (-1 to Exit): ");
		scanf("%d", &payCode);
	}
}
