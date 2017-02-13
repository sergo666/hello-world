#include <stdio.h>

int main()
{
	int srok,i;
	float vklad;

	printf("vvedi srok u summu vklada\n");
	scanf("%d %f",&srok,&vklad);

	if(vklad<=100000)
		if(srok<=30)
			vklad=vklad*0.9;
		if((srok>=31)&&(srok<=120))
			vklad=vklad*1.02;
		if((srok>=121)&&(srok<=240))
			vklad=vklad*1.06;
		if((srok>=241)&&(srok<=365))
			vklad=vklad*1.12;

	if(vklad>100000)
		if(srok<=30)
			vklad=vklad*0.9;
		if((srok>=31)&&(srok<=120))
			vklad=vklad*1.03;
		if((srok>=121)&&(srok<=240))
			vklad=vklad*1.08;
		if((srok>=241)&&(srok<=365))
			vklad=vklad*1.15;
	
	printf("%f",vklad);
	
	return 0;
}
