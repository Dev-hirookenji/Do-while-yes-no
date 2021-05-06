#include <stdio.h>
#define p printf
#define s scanf

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*Mark Kenneth O. Ferrer DICT 1-3*/

int main()
{
		char fn[40], ln[40], ans;
		char status[5][20]={"SINGLE","MARRIED","ANNULLED","SEPARATED","WIDOW"};
		int i;
		
		do{
			p("\t\t\tCIVIL STATUS CHECKER ");
			p("\n\nENTER YOUR NAME:	");
			s("%s %s", fn,ln);
			p("\n\nSELECT YOUR CIVIL STATUS\n");
			p("1-SINGLE, 2-MARRIED, 3-ANNULLED, 4-SEPARATED,5-WIDOW: ");
			s("%d",&i);
			p("\nHI, %s %s YOU ARE %s", fn,ln,status[i-1]);
			p("\n\n\tDO YOU WANT TO CONTINUE (Y/N)?: ");
			s("%s",&ans);
} 
	while((ans=='Y')||(ans=='y'));
	p("\n\tTHANK YOU FOR USING THE SYSTEM");	

	return 0;
}
