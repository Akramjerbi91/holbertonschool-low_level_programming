#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */


int main(void)
{
	int x, y;
	int arr[2];
	
for (x = 0; x < 2; x++)
    {
        for (y = 0; y < 2; y++)
        {
            
            if (x != y )
                
                    
                printf("[%d %d]\n", arr[x], arr[y]);
             
    }
	}

	return (0);
}
