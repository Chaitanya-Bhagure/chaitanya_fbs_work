void main() {
	double=15000;
    double=da, ta, hra, total;

if(basic<=5000)
{
	da=basic * 0.10;
	ta=basic * 0.20;
	hra=basic * 0.25;
}else 
{
	da=basic * 0.15;
	ta=basic * 0.25;
	hra=basic * 0.30;
}

	
 total = basic + da + ta + hra;
printf("\nbasic salary=%.2f",basic);
printf("\nda=%.2f",da);
printf("\nta=%.2f",ta);
printf("\nhra=%.2f",hra);
 printf("\nTotal Salary: %.2f", total);

return 0;

}
