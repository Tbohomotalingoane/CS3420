/*
Author:			 Teboho Motalingoane
Stundent ID:	202001038
Email:			motalingoaneteboho21@gmail.com
Contacts:		63464373/59802261
Date:			30 October 2022
Task:			Finding reversible prime squares
*/

#include <stdio.h>


// The function reverses/*
Author:			Teboho Motalingoane
Stundent ID:	202001038
Email:			motalingoaneteboho21@gmail.com
Contacts:		63464373/59802261
Date:			30 October 2022
Task:			Finding reversible prime squares
*/

#include <stdio.h>


// The function reverses the number
int reverse(int number){
	int  reverse = 0, remainder;					
	while(num != 0)										
	{
		remainder = number % 10;
		reverse = reverse * 10 + remainder;				
		number = number / 10;								
	}
 	return reverse;
}

// The function determines prime numbers
int is_prime(int num)
{
	// For every number less than 2 the function returns 0
	if(number < 2)
	{
		return 0;
	}
	
	for(int i = 2; i < num; i++)
	{
		if(number % i == 0)								// Checking whether num has factors 
		{
			return 0;									// If num has a factor the function returns 0
		}
	}
	return 1;
}

// Finds and displays reversible prime squares
void reversible_prime_sqrs()
{
	// Number and conut are initialised to zero
	for(int num = 0, count = 0; count < 10; num++){

		if(is_prime(num) == 1)						
		{
			int square = num*num;					
			int reversed = reverse(square);				
			if(square != reversed)						
			{
				for(int i = 0; i < reversed/2; i++)
				{
					if(i*i == reversed)					
					{
						if(is_prime(i) == 1)			
						{
							printf("\n%d",square);		
							count ++;					
						}
					}
				}
			}
		}
	}
}

int main()
{
    reversible_prime_sqrs();
    
    return 1;
}
 the number
int reverse(int num){
	int  reverse = 0, remainder;						
	while(num != 0)										
	{
		remainder = num % 10;
		reverse = reverse * 10 + remainder;				
		num = num / 10;									
	}
 	return reverse;
}

// The function determines prime numbers
int is_prime(int num)
{
	// For every number less than 2 the function returns 0
	if(num < 2)
	{
		return 0;
	}
	
	for(int i = 2; i < num; i++)
	{
		if(num % i == 0)							
		{
			return 0;									
		}
	}
	return 1;
}

// Finds and displays reversible prime squares
void reversible_prime_sqrs()
{
	// Number and conut are initialised to zero
	for(int number = 0, count = 0; count < 10; number++){

		if(is_prime(number) == 1)						
		{
			int square = number*number;					
			int reversed = reverse(square);				
			if(square != reversed)				
			{
				for(int i = 0; i < reversed/2; i++)
				{
					if(i*i == reversed)				
					{
						if(is_prime(i) == 1)		
						{
							printf("\n%d",square);		
							count ++;					
						}
					}
				}
			}
		}
	}
}

int main()
{
    reversible_prime_sqrs();
    
    return 1;
}
