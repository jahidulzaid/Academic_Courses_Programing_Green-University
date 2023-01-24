#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct student{
	char n[20];
	int id;
	char dep[20];
    unsigned long long int phn;
	float cg;
	struct su{
	char sub[20];
	float m;
	}s2[15];
}s[100];
	int ch,i,j,n1,n2,n3,n4,n5,n6,n7,n8,x,y,z,r,i1,r,p;
	float c,c1,sum=0,tc=0;
	char a[20];
    int input();

	front() {
	printf("                                   DISPLAY                                    ");
	printf("\n\n---------------------------------------------------------------------------------");
	printf("\n\tSTUDENT NAME\t\t|\tSTUDENT ID\t|\tSTUDENT DEPT\t|\tSTUDENT PHONE NO.\t\t|");
	printf("\n---------------------------------------------------------------------------------\n");}
	display(){
	printf("     %s\t\t|%d\t\t|%s\t\t|%llu\t\t|\n",s[i].n,s[i].id,s[i].dep,s[i].phn);
	printf("---------------------------------------------------------------------------------\n");}

	modify()  {
	printf("Name of the student(between 3 to 9 character): ");
    getchar();
	gets(s[i].n);
	printf("id of the student: ");
	scanf(" %d",&s[i].id);
	printf("department of the student: ");
	getchar();
	gets(s[i].dep);
	printf("phone number of the student(11 digit): ");
	scanf("%llu",&s[i].phn);
	printf("\nIf you were going back to main menu type 'm'");
	scanf("%s",&a);
	if (strcmp(a,"m")==0)
	input();  }

void delet(int pos)
	{
		 for(i1=pos+1;i1<n5;i1++)
        s[i1-1]=s[i1];
	printf("\nIf you were going back to main menu type 'm' ");
	scanf("%s",&a);
	if (strcmp(a,"m")==0)
	input();	}

	add()  {
		printf("Enter present number of student ");
		scanf("%d",&n6);
	printf("How many students record you want to add ");
	scanf("%d",&y);
	p=n6+y;
	for(i=n6;i<p;i++)
{
	printf("Name of the student(between 3 to 9 character): ");
    getchar();
	gets(s[i].n);
	printf("id of the student: ");
	scanf(" %d",&s[i].id);
	printf("department of the student: ");
	getchar();
	gets(s[i].dep);
	printf("phone number of the student(11 digit): ");
	scanf("%llu",&s[i].phn);	}
   printf("\nIf you were going back to main menu type 'm' ");
	scanf("%s",&a);
	if (strcmp(a,"m")==0)
	input();	}
	cgpa() {
	printf("enter how many sub course ");
	scanf("%d",&n2);
	for(j=1;j<=n2;j++)	{
	printf("enter subject name\n");
	getchar();
	scanf("%s",&s[i].s2[j].sub);
	printf("enter subject subject marks out of 100 \n");
	scanf("%f",&s[i].s2[j].m);
	printf("enter credit of that course \n");
	scanf("%f",&c);
	if(	s[i].s2[j].m>=80 && s[i].s2[j].m<=100)
	c1=c*4;
	if(	s[i].s2[j].m>=75 && s[i].s2[j].m<80)
	c1=c*3.75;
	if(	s[i].s2[j].m>=70 && 	s[i].s2[j].m<75)
	c1=c*3.5;
	if(	s[i].s2[j].m>=65 && 	s[i].s2[j].m<70)
	c1=c*3.25;
	if(	s[i].s2[j].m>=60 && 	s[i].s2[j].m<65)
	c1=c*3;
	if(	s[i].s2[j].m>=55 && 	s[i].s2[j].m<60)
	c1=c*2.75;
	if(	s[i].s2[j].m>=50 && 	s[i].s2[j].m<55)
	c1=c*2.5;
	if(	s[i].s2[j].m>=45 && 	s[i].s2[j].m<50)
	c1=c*2.25;
	if(	s[i].s2[j].m>=40 && 	s[i].s2[j].m<45)
	c1=c*2;
	if(	s[i].s2[j].m>=0 && 	s[i].s2[j].m<40)
	c1=c*0;
	sum=sum+c1;
	tc=tc+c;}
	s[i].cg=sum/tc;
	printf("If you were going back to main menu type 'm' ");
	scanf("%s",&a);
	if (strcmp(a,"m")==0)
	input();}

	cgshow() {
		printf("enter id no that you want to see with cgpa ");
	scanf("%d",&r);
		printf("                                         DISPLAY                                          ");
	printf("\n------------------------------------------------------------------------------------------------");
	printf("\n\tSTUDENT NAME\t\t|\tSTUDENT ID\t|\tSTUDENT DEPT\t|\tSTUDENT PHONE NO.\t\t|\tSTUDENT CGPA\t|");
	printf("\n-------------------------------------------------------------------------------------------------\n");
	 if(s[i].id==r){
   	printf("     %s\t\t|%d\t\t|%s\t\t|%llu\t\t|%f\t|\n",s[i].n,s[i].id,s[i].dep,s[i].phn,s[i].cg);
   			   printf("\n\n\tsubject grade ");
   		for(j=1;j<=n2;j++)	{
	printf("\n\t%s:-\t",s[i].s2[j].sub);
		if(	s[i].s2[j].m>=80 && s[i].s2[j].m<=100)
	    printf("A+");
	if(	s[i].s2[j].m>=75 && s[i].s2[j].m<80)
		printf("A");
	if(	s[i].s2[j].m>=70 && 	s[i].s2[j].m<75)
		printf("A-");
	if(	s[i].s2[j].m>=65 && 	s[i].s2[j].m<70)
		printf("B+");
	if(	s[i].s2[j].m>=60 && 	s[i].s2[j].m<65)
		printf("B");
	if(	s[i].s2[j].m>=55 && 	s[i].s2[j].m<60)
		printf("B-");
	if(	s[i].s2[j].m>=50 && 	s[i].s2[j].m<55)
		printf("C+");
	if(	s[i].s2[j].m>=45 && 	s[i].s2[j].m<50)
	printf("C");
	if(	s[i].s2[j].m>=40 && 	s[i].s2[j].m<45)
		printf("D");
	if(	s[i].s2[j].m>=0 && 	s[i].s2[j].m<40)
		printf("F");
	}
	printf("\n");
	printf("----------------------------------------------------------------------------------------------------\n");
}
	printf("\nIf you were going back to main menu type 'm' ");
	scanf("%s",&a);
	if (strcmp(a,"m")==0)
	input(); }
	input() {
		printf("*********************************************\n");
		printf("WELCOME TO STUDENT DATABASE MANAGEMENT SYSTEM\n");
		printf("*********************************************\n\n\n");
		printf("\n       MAIN MENU      ");
    
    printf("\n\n1. Create students record ");
    printf("\n2. Modify student record ");
    printf("\n3. Add student record ");
    printf("\n4. Delete student  record ");
    printf("\n5. Search student  record ");
    printf("\n6. Display records of the student ");
    printf("\n7. Calculate CGPA from the stored student record ");
    printf("\n8. Show student record with cgpa ");
    printf("\n9. Exit\n");
    printf("\nplease enter your option: ");
    scanf("%d",&ch);
	switch(ch) {
	case 1:
	printf("Enter the amount of the students: ");
    scanf("%d",&n1);
    for(i=0;i<n1;i++) {
	printf("Name of the student(between 3 to 9 character): ");
    getchar();
	gets(s[i].n);
	printf("id of the student: ");
	scanf(" %d",&s[i].id);
	printf("department of the student : ");
	getchar();
	gets(s[i].dep);
	printf("phone number of the student(11 digit): ");
	scanf("%llu",&s[i].phn); }
	printf("\nIf you were going back to main menu type 'm' ");
	scanf("%s",&a);
	if (strcmp(a,"m")==0)
	input();
	break;
	case 2:
		printf("Enter total number of students ");
		scanf("%d",&n4);
		printf("Enter the students id you want to modify record ");
			scanf("%d",&x);
			 for(i=0;i<n4;i++){
			if(s[i].id==x)
			{
            modify();
	break;}}
	case 3:
		add();
		break;
    case 4:
    	printf("Enter total number of student ");
    	scanf("%d",&n5);
    	 printf("Enter the id you want to delete : ");
        scanf("%d",&x);
       for(i=0;i<n5;i++)
    {
        if(x==s[i].id) {
		delet(i);
            break; }}
    case 5:
		printf("Enter total number of students ");
		scanf("%d",&n3);
			printf("Enter the students id you want to search  record: ");
			scanf("%d",&x);
			front();
    for(i=0;i<n3;i++){
        if(s[i].id==x)
            display();}
        printf("\nIf you were going back to main menu type 'm' ");
	scanf("%s",&a);
	if (strcmp(a,"m")==0)
	input();
            break;
    case 6:
            	printf("Enter toal number of student ");
            	scanf("%d",&n7);
            	front();
			    for(i=0;i<n7;i++)
			    display();
			    printf("\nIf you were going back to main menu type 'm' ");
	scanf("%s",&a);
	if (strcmp(a,"m")==0)
	input();
	        break;
	case 7:
					printf("Enter total number of student ");
			scanf("%d",&n8);
		printf("Enter  that student id you want to store record with cgpa  ");
			scanf("%d",&z);
			 for(i=0;i<n8;i++){
			if(s[i].id==z)
			{
            cgpa();
		break;}}
		case 8:
            cgshow();
		break;
	case 9:
		exit(0);
		break;
    default:
    	break;}}
int main()
{
	input();}
