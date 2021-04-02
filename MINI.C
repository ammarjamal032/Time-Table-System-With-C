//mini project
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<graphics.h>


/* Call Functions*/
	void deal();
	void t_ar();
	void fare();
	void pasd();
	void oman();

// day by class
	void mond();
	void tues();
	void wedness();
	void thur();
	void frid();
// Decoration
	void sunsat();
	void star();
	void equl();
	void dada();
	void flin();
//switch case uses in sllybus
	void file1();
	void file2();
	void file3();
	void file4();
	void file5();

// CSA
	void unit1();
	void unit2();
	void unit3();
	void unit4();
	void unit5();
	void textb();
//CPP
	void cppp1();
	void cppp2();
	void cppp3();
	void cppp4();
	void cppp5();
	void cpptx();

// os
	void os1();
	void os2();
	void os3();
	void os4();
	void os5();
	void ostxt();
//DS
	void dss1();
	void dss2();
	void dss3();
	void dss4();
	void dss5();
	void dsstx();
//csc
	void cscd1();
	void cscd2();
	void cscd3();
	void cscd4();
	void cscd5();
	void cscdt();

/* main body*/

	void main()
	{

		char user[10],pass[10],ch,ch1,sl,sa;
		int i,days,kh,p,flag=1;
		int n,t,w=10;
		float r,c,b=0;

		clrscr();
		printf("\n");
		do
		{
		dada();
		printf("\n\t\t\tEnter Username \t:");
		gets(user);                       //login form
		printf("\t\t\tEnter password\t:");
		for(p=0;p<7;p++)                    //P<7 lentgh
	{
		ch1=getch();
		pass[p]=ch1;
		ch1='*' ;
		printf("%c",ch1);
	}
		pass[p]='\0';
						   /*password section*/
		if (strcmp(user,"manuu")==0)              //User Id
		{                                     //password
			if(strcmp(pass,"mca2sem")==0)
		{
				flag=0;
				printf("\n");
				printf("\t\t\tWelcome...\n");
				clrscr();
		do
		{

		equl();
	printf("\t\t\tMaulana Azad National Urdu University\n");
		equl();
     printf("\t\tDepartment of Computer Science and Information Technology\n");
     printf("\t\t\tTime Table of MCA IInd Semester 2K19\n ");
		star();
		printf("\n\t\tSelect your choice\n\n");
		printf("\t1.Saturday\n");
		printf("\t2.Sunday\n");                    //day wise table
		printf("\t3.Monday\n");
		printf("\t4.Tuseday\n");
		printf("\t5.Wednessday\n");
		printf("\t6.thurseday\n");
		printf("\t7.friday\n");
		printf("\t8.For other information\n");
		printf("\t9.Exit\n");

		scanf("%d",&days);

		clrscr();
		switch (days)
		{
		case 1:
			sunsat();
			break;

		case 2:
			sunsat();
			break;

		case 3:
			mond();
			break;

		case 4:
			tues();
			break;

		case 5:
			wedness();
			break;

		case 6:
			thur();
			break;

		case 7:
			frid();
			break;

		case 8:             /* Classes by prof*/
		{      printf("\n");
			equl();
			printf("\tChoose Professor name.\n");
			equl();
			printf("\n\t1.Prof.Abdul Wahid\n");
			printf("\t2.Ms.T.Arurandhati\n");
			printf("\t3.Ms.Fareeha Rasheed\n");
			printf("\t4.Mr.Md.Omar\n");
			printf("\t5.Mr.Mohetashim Pasha Quadri\n");
			equl();
			printf("\tOther information\n");
			equl();
			printf("\n\t6.Sallybus\n");
			printf("\t7.Know your attendence percentage\n");
			printf("\t8.Claculate your marks CGPA to Percentage\n");
			printf("\t9.Know.. who am I ??\n");
			printf("\t10.Do you want to exit\n");
			scanf("%d",&kh);
			clrscr();
			switch (kh)

			{
				case 1:
				{
					deal();
					break;
				}
				case 2:
				{
					t_ar();
					break;
				}
				case 3:
				{
					fare();
					break;
				}
				case 4:
				{
					oman();
					break;
				}
				case 5:
				{
					pasd();
					break;
				}
				case 6:
				star();
			      printf( " Know Your Sllaybus\n\n");
			      star();
			      printf("\n");
		   printf("1.Computer sysytem architecture\n");
		   printf("2.C++ programing\n");
		   printf("3.Operating System\n");
		   printf("4.Data structure\n");
		   printf("5.Cleint Server Computing\n");
		   printf("6.Do you want to close\n");
		   star();
		   printf("\n");

		   scanf("%d",&sl);
		   switch(sl)
		   {
		   case 1:
		   file1();
		   break;
		   case 2:
		   file2();
		   break;
		   case 3:
		   file3();
		   break;
		   case 4:
		   file4();
		   break;
		   case 5:
		   file5();
		   break;
		   case 6:
		   exit(0);

		   }

			      break ;
			      case 7:
			      star();
			      printf("\nEnter Your attanded class\t:");
			      scanf("%d",&n);
			      printf("Enter your total classes\t:");
			      scanf("%d",&t);
			      r=(n*100)/t;
			      printf("Your attendence percentage:%1.2f\n",r);
			      star();
			      break;
			      //CGPA calculater
		 case 8:
		 star();
		 printf("\nEnter your CGPA marks :");
		 scanf("%f",&c);
		 b=w*c;
		 printf("Your marks in percentage :%1.2f \n",b);
		 star();

		 break;

				case 9:

			{
			equl();
			printf("\t\t\t\tDeveloped by\n");
			star();
			printf("\t\t\t\t\t Ammar Jamal \n\t\t\t\t(MCA IInd sem)\n");
			star();
			printf("\n");
			equl();
			break;
			}
			case 10:
			exit(0);
			default:printf("\n\t\tThere is no one like this\n\n");
			}
			break;
		case 9:
		exit(0);
		}
		default:printf("\tThere is no days\n");


			}//for switch loop
		      //printf("Do you want to know other information");
			printf("\tDo you want to continue???? (y/n)\t:");
		scanf("%c",ch);


		ch=getchar();
		  }    //do loop
		while(ch=='y'|| ch=='Y');

			}  //strcmp(Pass)

			else
			printf("\t\t\n\nTry Again\n");
		}      //strcmp(user)
		else
		printf("\t\t\nInvalid user\n\n");
		getch();
		 clrscr();
		}
		while(flag==1);
			 getch();
	//	getchar();

		clrscr();
}
///main end here
		/************* Funtion Defination****************/
void equl()
{      int i;
	for (i=0;i<80;i++)
		{
		printf("=");
		}
}
//front page login
void dada()
{

	star();
	printf("\n\t\t\t   Time table management system\n");
	star();
	printf("\n\n\n\n");
	printf("\t\t\t\tEnter your credential\n");


}
 void deal()
 {

       star();
	printf("\t\tComputer System Architecture by Prof.Abdul Wahid sir\nd");
	printf("\n");
	printf("\tMonday\t\t:\tIst\tClass\t9:00\tAM\n");
	printf("\tTuseday\t\t:\tIst\tClass\t9:00\tAM\n");
	printf("\tWednesday\t:\tIst\tClass\t9:00\tAM\n");
	printf("\tThurseday\t:\t5th\tClass\t2:00\tPM\n");
	printf("\tFriday\t\t:\t\tNo Class\n");
	printf("\tSaturday\t:\t\tHoliday\n");
	printf("\tSunday\t\t:\t\tHoliday\n");
       star();
 }
 void t_ar()
 {

	star();
	printf("\t\tC-Prog by Ms. T.Arunrandhati\n");

	printf("\n");
	printf("\tMonday\t\t:\t2nd\tClass\t10:00\tAM\n");
	printf("\tTuseday\t\t:\t2nd\tClass\t10:00\tAM\n");
	printf("\tWednesday\t:\t3rd\tClass\t11:00\tAM\n");
	printf("\tThurseday\t:\tIst\tClass\t9:00\tAM\n");
	printf("\tFriday\t\t:\t1st\tClass\t9:00\tAM\tLAB I\n");
	printf("\tSaturday\t:\t\tHoliday\n");
	printf("\tSunday\t\t:\t\tHoliday\n");
	star();
 }
 void fare()

 {  	star();

	printf("\t\tOperating Sysytem by Ms.Fareeha Rasheed\n");
	printf("\n");
	printf("\tMonday\t\t:\t3rd\tClass\t11:00\tAM\n");
	printf("\tTuseday\t\t:\t4th\tClass\t12:00\tPM\n");
	printf("\tWednesday\t:\t\tNo Class\n");
	printf("\tThurseday\t:\t2nd\tClass\t10:00\tAM\n");
	printf("\tFriday\t\t:\tIst\tClass\t9:00\tAM\n");
	printf("\tSaturday\t:\t\tHoliday\n");
	printf("\tSunday\t\t:\t\tHoliday\n");
	star();
 }
 void oman()

 {

	star();

	printf("\t\tC++ by Mr.Md. Omar\n");
	printf("\n");
	printf("\tMonday\t\t:\t4th\tClass\t12:00\tPM\n");
	printf("\tTuseday\t\t:\t3rd\tClass\t11:00\tAM\n");
	printf("\tWednesday\t:\t2nd\tClass\t10:00\tAM\n");
	printf("\tThurseday\t:\t3rd & 5th \tClass\t11:00\tAM & 2:00PM\t\n");
	printf("\tFriday\t\t\t: No Class\n");

	printf("\tSaturday\t:\t\tHoliday\n");
	printf("\tSunday\t\t:\t\tHoliday\n");
	star();
 }
 void pasd()
 {
	star();

	printf("\t\tCleint Server Computing by Mr.Mohetashim pasha Quadri\n");
	printf("\n");
	printf("\tMonday\t\t:\t5th\tClass\t2:00PM\n");
	printf("\tTuseday\t\t:\t5th\tClass\t2:00\tPM\n");
	printf("\tWednesday\t:\t4th\tClass\t12:00\tPM\n");
	printf("\tThurseday\t:\t4th\tClass\t12:00\tPM\n");
	printf("\tFriday\t\t:\t\t No Class\n");
	printf("\tSaturday\t:\t\tHoliday\n");
	printf("\tSunday\t\t:\t\tHoliday\n");
	star();
 }
void flin()
{
	int i;
	for(i=0;i<80;i++)
	{
	printf("-");
	}
}


 void mond()
 {
	flin();
	printf("\t********************\tMonday\t\t*******************\n");
	printf(" \n");
	printf("1st\tClass\t(9:00\tAM to 10:00 AM)\t: C.S.A.\tby Prof.Abdul Wahid\n");
	printf("2nd\tClass\t(10:00\tAM to 11:00 AM)\t: D.S.\t\tby Ms. T.Arurandhati\n");
	printf("3rd\tClass\t(11:00\tAM to 12:00)\t: O.S\t\tby Ms. Fareeha Rasheed\n");
	printf("4th\tClass\t(12:00\tPM to 1:00)\t: C++\t\tby Mr.Md. Omar\n\n");
	printf("***\t****\t(1:00\tPM to 2:00 PM)\t:\t******** Lunch break********\n\n");
	printf("5th\tClass\t(2:00\tPM to 2:55 PM)\t: C.S.C.\tby Mr.M.Pasha Quadri\n");
	printf("6th\tClass\t(2:55\tPM to 3:50 PM)\t: No Class\n");
	printf("7th\tClass\t(3:50\tPM to 4:45 PM)\t: No Class\n");
	printf("8th\tClass\t(4:45\tPM to 5:40 PM)\t: AEC\n");
	flin();

 }

 void tues()
 {       flin();
	 printf("\t********************\tTuseday\t\t*******************\n");
	 printf(" \n");
	 printf("1st\tClass\t(9:00\tAM to 10:00 AM)\t: C.S.A.\tby Prof.Abdul Wahid\n");
	 printf("2nd\tClass\t(10:00\tAM to 11:00 AM)\t: D.S.\t\tby Ms.T.Arurandhati\n");
	 printf("3rd\tClass\t(11:00\tAM to 12:00)\t: C++\t\tby Mr. Md.Omar\n");
	 printf("4th\tClass\t(12:00\tPM to 1:00)\t: O.S.\t\tby Ms.Fareeha Rasheed\n\n");
	 printf("***\t****\t(1:00\tPM to 2:00 PM)\t:\t******** Lunch break********\n\n");
	 printf("5th\tClass\t(2:00\tPM to 2:55 PM)\t: C.S.C.\tby Mr.M.Pasha Quadri\n");
	 printf("6th\tClass\t(2:55\tPM to 3:50 PM)\t: No Class\n");
	 printf("7th\tClass\t(3:50\tPM to 4:45 PM)\t: No Class\n");
	 printf("8th\tClass\t(4:45\tPM to 5:40 PM)\t: No Class\n");

	 flin();
 }


 void wedness()

 {
	flin();
	printf("\t********************\tWednesday\t\t*******************\n");
     printf(" \n");
     printf("1st\tClass\t(9:00\tAM to 10:00 AM)\t: C.S.A.\tby Prof. Abdul Wahid\n");
     printf("2nd\tClass\t(10:00\tAM to 11:00 AM)\t: C++\t\tby Mr.Md.Omar\n");
     printf("3rd\tClass\t(11:00\tAM to 12:00)\t: D.S.\t\tby Ms.T.Arurandhati\n");
     printf("4th\tClass\t(12:00\tPM to 1:00)\t: O.S.\t\tby Ms.Fareeha Rasheed\n");
     printf("***\t****\t(1:00\tPM to 2:00 PM)\t:\t******** Lunch break********\n");
     printf("5th\tClass\t(2:00\tPM to 2:55 PM)\t: C++ Lab\n");
     printf("6th\tClass\t(2:55\tPM to 3:50 PM)\t: C++ Lab\n");
     printf("7th\tClass\t(3:50\tPM to 4:45 PM)\t: C++ Lab\n");
     printf("8th\tClass\t(4:45\tPM to 5:40 PM)\t: No Class\n");

     flin();
 }
void thur()
{              flin();
				printf("\t********************\tThurseday\t\t*******************\n");
			printf(" \n");
			printf("1st\tClass\t(9:00\tAM to 10:00 AM)\t: D.S.\t\tby Ms.T.Arurandhati\n");
			printf("2nd\tClass\t(10:00\tAM to 11:00 AM)\t: O.S.\t\tby Ms.Fareeha Rasheed\n");
			printf("3rd\tClass\t(11:00\tAM to 12:00)\t: C++\t\tby Mr.Md.Omar\n");
			printf("4th\tClass\t(12:00\tPM to 1:00)\t: C.S.C.\tby Mr.M.pasha Quadri\n");
			printf("***\t****\t(1:00\tPM to 2:00 PM)\t:\t******** Lunch break********\n");
			printf("5th\tClass\t(2:00\tPM to 2:55 PM)\t: C.S.A.\tby Prof.Abdul Wahid \n");
			printf("6th\tClass\t(2:55\tPM to 3:50 PM)\t: No Class\n");
			printf("7th\tClass\t(3:50\tPM to 4:45 PM)\t: No Class\n");
			printf("8th\tClass\t(4:45\tPM to 5:40 PM)\t: No Class\n");

			flin();
			}
void frid()
{
			flin();
				printf("\t********************\tFriday\t\t*******************\n");
			printf(" \n");
			printf("1st\tClass\t(9:00\tAM to 10:00 AM)\t: O.S.\t\tby Ms. Fareeha Rasheed\n");
			printf("2nd\tClass\t(10:00\tAM to 11:00 AM)\t: Data Struture Lab\n");
			printf("3rd\tClass\t(11:00\tAM to 12:00)\t: Data Struture Lab\n");
			printf("4th\tClass\t(12:00\tPM to 1:00)\t: Data Struture Lab\n");
			printf("***\t****\t(1:00\tPM to 2:00 PM)\t:\t******** Lunch break********\n");
			printf("5th\tClass\t(2:00\tPM to 2:55 PM)\t: No Class\n");
			printf("6th\tClass\t(2:55\tPM to 3:50 PM)\t: No Class\n");
			printf("7th\tClass\t(3:50\tPM to 4:45 PM)\t: No Class\n");
			printf("8th\tClass\t(4:45\tPM to 5:40 PM)\t: No Class\n");

			flin();
      }
      void sunsat()
      {
			flin();
			printf("Here is a smile for you cuz today is holiday\n");
			flin();
			}
void star()
{                int i;
	for( i=1;i<80;i++)
		{
		printf("*");

		}
}
void file1()
{


		 char sa;
		 clrscr();
		 printf("Enter your unit\n");
		 printf("\t1.Unit\t\t\t\t\t2.Unit\n");
		 printf("\t3.Unit\t\t\t\t\t4.Unit\n");
		 printf("\t5.Unit\t\t\t\t\t6.Text Book\n");
		   scanf("%d",&sa);
		   switch(sa)
		   {
			case 1:
			unit1();
			break;
			case 2:
			unit2();
			break;
			case 3:
			unit3();
			break;
			case 4:
			unit4();
			break;
			case 5:
			unit5();
			break;
			case 6:
			textb();
			break;
			default:printf("You're wrong\n ");
			}
			}


 void unit1()
  {

	FILE *p1=fopen("csa1.txt","r");
       //	int line=0;

	char input[512];
	clrscr();
	while (fgets(input,512,p1))
	{
	printf("%s",input);
	}
	printf("\n\nEnd\n");
	fclose(p1);


  }
void unit2()
  {

	FILE *p1=fopen("csa2.txt","r");

	char input[512];
	clrscr();
	while (fgets(input,512,p1))
	{
	printf("%s",input);
	}
	printf("\n\nEnd\n");
	fclose(p1);


	}
       void unit3()
  {

	FILE *p1=fopen("csa3.txt","r");

	char input[512];
	clrscr();
	while (fgets(input,512,p1))
	{
	printf("%s",input);
	}
	printf("\n\nEnd\n");
	fclose(p1);


	}

 void unit4()
  {

	FILE *p1=fopen("csa4.txt","r");
	char input[512];
	clrscr();
	while (fgets(input,512,p1))
	{
	printf("%s",input);
	}
	printf("\n\nEnd\n");
	fclose(p1);


	}
 void unit5()
  {

	FILE *p1=fopen("csa5.txt","r");

	char input[512];
	clrscr();
	while (fgets(input,512,p1))
	{
	printf("%s",input);
	}
	printf("\n\nEnd\n");
	fclose(p1);


	}
	void textb()
  {

	FILE *p1=fopen("csatext.txt","r");

	char input[512];
	while (fgets(input,512,p1))
	{
	printf("%s",input);
	}
	printf("\n\nEnd\n");
	fclose(p1);


	}

/*****************  function defination    *********************/


void file2()

{


		 char sa;
		 clrscr();
		 printf("Enter your unit\n");
		 printf("\t1.Unit\t\t\t\t\t2.Unit\n");
		 printf("\t3.Unit\t\t\t\t\t4.Unit\n");
		 printf("\t5.Unit\t\t\t\t\t6.Text Book\n");
		   scanf("%d",&sa);
		   switch(sa)
		   {
			case 1:
			cppp1();
			break;
			case 2:
			cppp2();
			break;
			case 3:
			cppp3();
			break;
			case 4:
			cppp4();
			break;
			case 5:
			cppp5();
			break;
			case 6:
			cpptx();
			break;
			default:printf("You're wrong\n ");
			}
			}


 void cppp1()
  {

	FILE *p1=fopen("cpp1.txt","r");

	char input[512];
	clrscr();
	while (fgets(input,512,p1))

	{
	printf("\t%s",input);
	}
	printf("\n\nEnd\n");
	fclose(p1);



	}
void cppp2()
  {

	FILE *p1=fopen("cpp2.txt","r");

	char input[512];
	clrscr();
	while (fgets(input,512,p1))
	{
	printf("%s",input);
	}
	printf("\n\nEnd\n");
	fclose(p1);


	}
       void cppp3()
  {

	FILE *p1=fopen("cpp3.txt","r");

	char input[512];
	clrscr();
	while (fgets(input,512,p1))
	{
	printf("%s",input);
	}
	printf("\n\nEnd\n");
	fclose(p1);


	}

 void cppp4()
  {

	FILE *p1=fopen("cpp4.txt","r");

	char input[512];
	clrscr();
	while (fgets(input,512,p1))
	{
	printf("%s",input);
	}
	printf("\n\nEnd\n");
	fclose(p1);


	}
 void cppp5()
  {

	FILE *p1=fopen("cpp5.txt","r");

	char input[512];
	clrscr();
	while (fgets(input,512,p1))
	{
	printf("%s",input);
	}
	printf("\n\nEnd\n");
	fclose(p1);


	}
	void cpptx()
  {

	FILE *p1=fopen("cpptext.txt","r");

	char input[512];
	clrscr();
	while (fgets(input,512,p1))
	{
	printf("%s",input);
	}
	printf("\n\nEnd\n");
	fclose(p1);


	}
/***************** Fucntion defination of Operating sysytem ***************/

void file3()
{


		 char sa;
		 clrscr();
		 printf("Enter your unit\n");
		 printf("\t1.Unit\t\t\t\t\t2.Unit\n");
		 printf("\t3.Unit\t\t\t\t\t4.Unit\n");
		 printf("\t5.Unit\t\t\t\t\t6.Text Book\n");
		   scanf("%d",&sa);
		   switch(sa)
		   {
			case 1:
			os1();
			break;
			case 2:
			os2();
			break;
			case 3:
			os3();
			break;
			case 4:
			os4();
			break;
			case 5:
			os5();
			break;
			case 6:
			ostxt();
			break;
			default:printf("You're wrong\n ");
			}
			}


 void os1()
  {

	FILE *p1=fopen("os1.txt","r");

	char input[512];
	clrscr();
	while (fgets(input,512,p1))
	{
	printf("\t %s",input);
	}
	printf("\n\nEnd\n");
	fclose(p1);


	}
void os2()
  {

	FILE *p1=fopen("os2.txt","r");

	char input[512];
	clrscr();
	while (fgets(input,512,p1))
	{
	printf("%s",input);
	}
	printf("\n\nEnd\n");
	fclose(p1);


	}
void os3()
  {

	FILE *p1=fopen("os3.txt","r");

	char input[512];
	clrscr();
	while (fgets(input,512,p1))
	{
	printf("%s",input);
	}
	printf("\n\nEnd\n");
	fclose(p1);


  }

 void os4()
  {

	FILE *p1=fopen("os4.txt","r");

	char input[512];
	clrscr();
	while (fgets(input,512,p1))
	{
	printf("%s",input);
	}
	printf("\n\nEnd\n");
	fclose(p1);


	}
 void os5()
  {

	FILE *p1=fopen("os5d.txt","r");

	char input[512];
	clrscr();
	while (fgets(input,512,p1))
	{
	printf("%s",input);
	}
	printf("\n\nEnd\n");
	fclose(p1);


	}
  void ostxt()
  {

	FILE *p1=fopen("ostxt.txt","r");

	char input[512];
	clrscr();
	while (fgets(input,512,p1))
	{
	printf("%s",input);
	}
	printf("\n\nEnd\n");
	fclose(p1);


	}
	/* *************Function defination of Data Structrue************** */
void file4()
{


		 char sa;
		 clrscr();
		 printf("Select your unit\n");
		 printf("\t1.Unit\t\t\t\t\t2.Unit\n");
		 printf("\t3.Unit\t\t\t\t\t4.Unit\n");
		 printf("\t5.Unit\t\t\t\t\t6.Text Book\n");
		   scanf("%d",&sa);
		   switch(sa)
		   {
			case 1:
			dss1();
			break;
			case 2:
			dss2();
			break;
			case 3:
			dss3();
			break;
			case 4:
			dss4();
			break;
			case 5:
			dss5();
			break;
			case 6:
			dsstx();
			break;
			default:printf("You're wrong\n ");
			}
			}


 void dss1()
  {

	FILE *p1=fopen("ds1.txt","r");
	char input[512];
	clrscr();
	while (fgets(input,512,p1))
	{
	printf("%s",input);
	}
	printf("\n\nEnd\n");
	fclose(p1);


	}
void dss2()
  {

	FILE *p1=fopen("ds2.txt","r");

	char input[512];
	clrscr();
	while (fgets(input,512,p1))
	{
	printf("%s",input);
	}
	printf("\n\nEnd\n");
	fclose(p1);


	}
       void dss3()
  {

	FILE *p1=fopen("ds3.txt","r");

	char input[512];
	clrscr();
	while (fgets(input,512,p1))
	{
	printf("%s",input);
	}
	printf("\n\nEnd\n");
	fclose(p1);


	}

 void dss4()
  {

	FILE *p1=fopen("ds4.txt","r");
	char input[512];
	clrscr();
	while (fgets(input,512,p1))
	{
	printf("%s",input);
	}
	printf("\n\nEnd\n");
	fclose(p1);


	}
 void dss5()
  {

	FILE *p1=fopen("ds5.txt","r");

	char input[512];
	clrscr();
	while (fgets(input,512,p1))
	{
	printf("%sd",input);
	}
	printf("\n\nEnd\n");
	fclose(p1);


	}
void dsstx()
  {

	FILE *p1=fopen("dstxt.txt","r");

	char input[512];
	clrscr();
	while (fgets(input,512,p1))
	{
	printf("%s",input);
	}
	printf("\n\nEnd\n");
	fclose(p1);


	}
void file5()
{


		 char sa;
		 clrscr();
		 printf("Enter your unit\n");
		 printf("\t1.Unit\t\t\t\t\t2.Unit\n");
		 printf("\t3.Unit\t\t\t\t\t4.Unit\n");
		 printf("\t5.Unit\t\t\t\t\t6.Text Book\n");
		   scanf("%d",&sa);
		   switch(sa)
		   {
			case 1:
			cscd1();
			break;
			case 2:
			cscd2();
			break;
			case 3:
			cscd3();
			break;
			case 4:
			cscd4();
			break;
			case 5:
			cscd5();
			break;
			case 6:
			cscdt();
			break;
			default:printf("You're wrong\n ");
			}
}


 void cscd1()
  {

	FILE *p1=fopen("csc1.txt","r");

	char input[512];
	clrscr();
	while (fgets(input,512,p1))
	{
	printf("\t %s",input);
	}
	printf("\n\nEnd\n");
	fclose(p1);


	}
void cscd2()
  {

	FILE *p1=fopen("csc2.txt","r");

	char input[512];
	clrscr();
	while (fgets(input,512,p1))
	{
	printf("%s",input);
	}
	printf("\n\nEnd\n");
	fclose(p1);


	}
       void cscd3()
  {

	FILE *p1=fopen("csc3.txt","r");
	char input[512];
	clrscr();
	while (fgets(input,512,p1))
	{
	printf("%s",input);
	}
	printf("\n\nEnd\n");
	fclose(p1);


	}

 void cscd4()
  {

	FILE *p1=fopen("csc4.txt","r");

	char input[512];
	clrscr();
	while (fgets(input,512,p1))
	{
	printf("%s",input);
	}
	printf("\n\nEnd\n");
	fclose(p1);


	}
 void cscd5()
  {

	FILE *p1=fopen("cscd5.txt","r");

	char input[512];
	clrscr();
	while (fgets(input,512,p1))
	{
	printf("%s",input);
	}
	printf("\n\nEnd\n");
	fclose(p1);


	}
	void cscdt()
  {

	FILE *p1=fopen("csctxt.txt","r");

	char input[512];
	clrscr();
	while (fgets(input,512,p1))
	{
	printf("%s",input);
	}
	printf("\n\nEnd\n");
	fclose(p1);


	}