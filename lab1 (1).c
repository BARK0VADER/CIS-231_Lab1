#include <stdio.h>
#define PI 3.14159

int main()
	{
	double innerDiam, innerRad, outerDiam, outerRad, density, thickness, quantity, rArea, tWeight, uWeight;

	printf("Please enter the inner diameter in centimeters: ");
	scanf("%lf", &innerDiam);
	printf("Please enter the outer diameter in centimeters: ");
	scanf("%lf", &outerDiam);
	printf("Please enter the thickness in centimeters: ");
	scanf("%lf", &thickness);
	printf("Please enter the density in grams/cm^3: ");
	scanf("%lf", &density);
	printf("Please enter the quantity manufactured: ");
	scanf("%lf", &quantity);


	if (innerDiam >= outerDiam)
	{
	  printf("Inner radius must be smaller than the outer radius. \n");
  	  return 1;	  
	}	
	
	innerRad = innerDiam / 2.0;
	outerRad = outerDiam / 2.0;
	rArea = PI * outerRad * outerRad - PI * innerRad * innerRad;
	
	printf("The rim area of the washer is: %f\n", rArea);
	

	uWeight = rArea * thickness * density;
	printf("The weight of a flat washer is: %f\n",uWeight);

	tWeight = uWeight * quantity;
	printf("The weight of the batch of washers is: %f\n", tWeight);

	return (0);
	}	
		

