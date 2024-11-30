// Meia Richelle Go, Yesha Llorando

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

// order of registers: rcx, rdx, r8
// return register: rax

extern int imgCvtGrayFloatToInt(int size, double* float_pixel_vals, unsigned char* int_pixel_vals);

int main()
{
	int height, width;
	int size; 
	int i, j;

	// input
	scanf("%d", &height);
	scanf("%d", &width);

	size = height * width;

	double* float_pixel_vals = (double*)malloc(size * sizeof(double));
	unsigned char* int_pixel_vals = (unsigned char*)malloc(size * sizeof(unsigned char)); // so max can be 255

	if (float_pixel_vals == NULL || int_pixel_vals == NULL)
	{
		printf("Memory allocation failed.\n");
		return -1;
	}
		
	// input all float pixel values
	for (i = 0; i < size; i++)
			scanf("%lf", &float_pixel_vals[i]);

	// converting in asm
	imgCvtGrayFloatToInt(size, float_pixel_vals, int_pixel_vals);

	printf("\n");

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			printf("%u ", int_pixel_vals[i * width + j]);
		}
		printf("\n");
	}

	free(float_pixel_vals);
	free(int_pixel_vals);
	
	return 0;

}
