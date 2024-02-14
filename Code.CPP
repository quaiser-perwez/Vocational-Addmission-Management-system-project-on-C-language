#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<process.h>
#include<stdlib.h>
#include<graphics.h>
#include<dos.h>
struct record
{
    char nam[30];
    char cls[20];
    char don[20];
    char dat[20];
    int rol;

}s;
void add();
void dis();
void sort();
void about();
//SEARCHING***************
void search_na();
void search_cls();
void search_rl();

//MODIFYING****************
void modi_na();
void modi_cls();
void modi_rl();

//DELETING*******************
void del_na();
void del_cls();
void del_rl();
void modi_ps();

//************************
FILE *fp,*ftemp;
int f = 0;
int ch = 1,ch1=1, i, j, mh = 1, k = 0, dd,q=0,m=0;
int rol1;
char mn, del, name[30],clas[20],name1[20],class1[20],ps[20];
long int si = sizeof(s);
void main(){

//CODE FOR GRAPH*********

int gd=DETECT, gm;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
setcolor(RED);
rectangle(10,10,630,440);
rectangle(20,20,620,430);
setbkcolor(3);
setcolor(10);
settextstyle(7,0,4);
outtextxy(50,30,"MIRZA GHALIB COLLEGE, GAYA");
setcolor(RED);
settextstyle(7,0,7);
outtextxy(180,100,"WELCOME");
setcolor(1);
settextstyle(7,0,2);
outtextxy(245,170,"To My Project");
outtextxy(125,200,"Vocational Admission Management System");
setcolor(5);
settextstyle(7,0,3);
outtextxy(90,270,"Developed by QUAISER PERWEZ");
setcolor(12);
settextstyle(3,0,1);
outtextxy(200,320,"Project given by TAHSEEN AHMAD SIR");
setcolor(RED);
settextstyle(7,0,3);
outtextxy(180,370, "Press Enter To Continue");
 delay(100);
getch();
cleardevice();
//closegraph();

//initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");
setbkcolor(GREEN);
    do
    {     clrscr();
	mh = 1;
   //	initgraph(&gd,&gm, "C:\\TURBOC3\\BGI");
	setbkcolor(GREEN);
	 setcolor(1);
	 settextstyle(7,0,1);
	outtextxy(60,50,"\n\t|<><><><><><><><><><><><><><><><><><><><><><><><><>|\n");
	outtextxy(60,70,"\t|         MIRZA GHALIB COLLEGE, GAYA             |\n");
	outtextxy(60,90,"\t|       ***VOCATIONAL STUDENTS RECORD***          |\n");
	outtextxy(60,110,"\t|<><><><><><><><><><><><><><><><><><><><><><><><><>|\n\n");
	outtextxy(60,130,"\t   *****SELECT NUMBER TO PERFORM THE TASK*****\n");
	setcolor(RED);
	settextstyle(1,0,1);
	outtextxy(140,180,"\t\t-->1 ADD STUDENT RECORD\n");
	outtextxy(140,200,"\t\t-->2 DISPLAY STUDENT RECORD\n");
	outtextxy(140,220,"\t\t-->3 EXIT THE PROGRAM\n");
	outtextxy(140,240,"\t\t-->4 SORT THE LIST\n");
	outtextxy(140,260,"\t\t-->5 SEARCH STUDENT RECORD\n");
	outtextxy(140,280,"\t\t-->6 MODIFY STUDENT RECORD\n");
	outtextxy(140,300,"\t\t-->7 DELETE STUDENT RECORD\n");
	outtextxy(140,320,"\t\t-->8 ABOUT THIS PROJECT\n");
	outtextxy(150,380,"\t\t<**ENTER YOUR CHOICE**>  ");
	scanf("%d", &ch);
	cleardevice();
 //	closegraph();
       //	initgraph(&gd,&gm, "C:\\TURBOC3\\BGI");
	setbkcolor(GREEN);
	switch (ch)
	{
	case 1:
	    add();
	    break;
	case 2:
	    dis();
	    break;
	case 3:
	    exit(0);
	    break;
	    case 4:
	    sort();

	    break;
	    case 5:
		do{
		cleardevice();
	 //  closegraph();
	  // initgraph(&gd,&gm, "C:\\TURBOC3\\BGI");
		setbkcolor(RED);
		    printf("\n\n\n\n\n\n\t\t|<><><><><><><><><><><><><><><><><><><><>|\n");
		    printf("\t\t|        MIRZA GHALIB COLLEGE, GAYA      |\n");
		    printf("\t\t|******SEARCHING RECORD OF STUDENT*******|\n");
		    printf("\t\t|<><><><><><><><><><><><><><><><><><><><>|\n");
		    printf("\t\t\t-->1 Search on name\n");
		    printf("\t\t\t-->2 Search on class\n");
		    printf("\t\t\t-->3 Search on roll\n");
		    printf("\t\t\t-->4 Back to previous menu\n");
		    printf("\t\t\tEnter your choice ");
		    scanf("%d" ,&ch1);
		    switch(ch1){
			case 1:
			search_na();
			break;
			case 2:
			search_cls();
			break;
			case 3:
			search_rl();
			break;
			case 4:
			main();
			break;
			default:
			printf("Invalid choice\n");
		    }
			getch();
		}
		while(7<9);
		break;
		case 6:
		do{
		cleardevice();
	       //	closegraph();
	       //	initgraph(&gd,&gm, "C:\\TURBOC3\\GMI");
		setbkcolor(BLUE);
		    printf("\n\n\n\n\n\n\t\t|<><><><><><><><><><><><><><><><><><><><>|\n");
		    printf("\t\t|        MIRZA GHALIB COLLEGE, GAYA      |\n");
		    printf("\t\t|********MODIFYING STUDENT RECORD********|\n");
		    printf("\t\t|<><><><><<><><><><><><><><><><><><><><><|\n");
		    printf("\t\t\t-->1 Modify on name\n");
		    printf("\t\t\t-->2 Modify on class\n");
		    printf("\t\t\t-->3 Modify on roll\n");
		    printf("\t\t\t-->4 Modify Payment status\n");
		    printf("\t\t\t-->5 Back to previous menu\n");
		    printf("\t\t\tEnter your choice ");
		    scanf("%d" ,&ch1);
		    switch(ch1){
			case 1:
			modi_na();
			dis();
			break;
			case 2:
			modi_cls();
			dis();
			break;
			case 3:
			modi_rl();
			dis();
			break;
			case 4:
			modi_ps();
			dis();
			break;
			case 5:
			main();
			break;
			default:
			printf("Invalid choice\n");
		    }
			getch();
		}
		while(7<9);
		break;
		case 7:
		do{
		    printf("\n\n\n\n\n\n\t\t|<><><><><><><><><><><><><><><><><><><>|\n");
		    printf("\t\t|      MIRZA GHALIB COLLEGE, GAYA      |\n");
		    printf("\t\t|********DELETE STUDENT RECORD*********|\n");
		    printf("\t\t|<><><><><><><><><><><><><><><><><><><>|\n");
		    printf("\t\t\t-->1 Delete on name\n");
		    printf("\t\t\t-->2 Delete on class\n");
		    printf("\t\t\t-->3 Delete on roll\n");
		    printf("\t\t\t-->4 Back to previous menu\n");
		    printf("\t\t\tEnter your choice ");
		    scanf("%d" ,&ch1);
		    switch(ch1){
			case 1:
			del_na();
			dis();
			break;
			case 2:
			del_cls();
			dis();
			break;
			case 3:
			del_rl();
			dis();
			break;
			case 4:
			main();
			break;
			default:
			printf("Invalid choice\n");
		    }
			getch();
		}
		while(7<9);
		break;
		case 8:
		about();
		break;
	default:
	    printf("INVALID CHOICE\n");
	}
	getch();
    } while (3 > 2);
}
//**************************FUNCTION*************************
//INPUT RECORD********
void add()
{
    fp = fopen("quaiser12.txt", "ab");
    while (mh == 1)
    {
	printf("ENTER STUDENT NAME :\n");
	scanf("%s", s.nam);
	printf("ENTER CLASS :\n");
	scanf("%s", s.cls);
	printf("ENTER ROLL :\n");
	scanf("%d", &s.rol);
	printf("PAYMENT STATUS Done/Dues :\n");
	scanf("%s" ,s.don);
	printf("Enter date (dd/mm/yy):");
	scanf("%s" ,s.dat);

	fwrite(&s, sizeof(s), 1, fp);
	printf("\nDO YOU WNAT TO INSERT MORE RECORDS :\n");
	printf("\t1=Yes,    Else=No\n");
	scanf("%d", &mh);
    }
    fclose(fp);
}
//DISPLAY RECORD***********
void dis()
{
    fp = fopen("quaiser12.txt", "rb");
    printf("|=============|============|===========|=================|================|\n");
    printf("|  Name       |  class     |    Roll   | Payment status  |     Date       |\n");
    printf("|=============|============|===========|=================|================|\n");
    printf("<><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><>\n");
    while (fread(&s, sizeof(s), 1, fp) == 1)
    {
	printf("%s", s.nam);
	printf("\t\t%s", s.cls);
	printf("\t\t%d", s.rol);
	printf("\t\t%s" ,s.don);
	printf("\t\t%s\n\n" ,s.dat);
    }
    printf("<><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><>\n");
    printf("\n\n");
    fclose(fp);
}
//SORTING****************
void sort(){
    struct record st[50],temp;
    fp=fopen("quaiser12.txt" ,"rb");
    while(fread(&s,sizeof(s),1,fp)==1)
    st[q++]=s;
    for(i=0;i<q-1;i++){
	for(j=i+1;j<q;j++){
	    if(strcmpi(st[i].nam,st[j].nam)>0)
	    {
		temp=st[i];
		st[i]=st[j];
		st[j]=temp;
	    }
	}
    }
    printf("|=============|============|===========|=================|================|\n");
    printf("|  Name       |  class     |    Roll   | Payment status  |     Date       |\n");
    printf("|=============|============|===========|=================|================|\n");
    printf("<><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><>\n");
    for(i=0;i<q;i++){
	printf("%s", st[i].nam);
	printf("\t\t%s", st[i].cls);
	printf("\t\t%d", st[i].rol);
	printf("\t\t%s" ,st[i].don);
	printf("\t\t%s\n\n" ,st[i].dat);
}
    printf("<><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><>\n");
printf("\n");
fclose(fp);
q=0;
}
//SEARCHING***************
void search_na(){
    f=0;
    fp=fopen("quaiser12.txt" ,"rb");
    printf("Enter name which has to be search=");
    scanf("%s" ,name);
    while(fread(&s,sizeof(s),1,fp)==1){
	if(strcmpi(s.nam,name)==0){
	    f=1;
	    if(m==0){
	    printf("|=============|============|===========|=================|===============|\n");
	     printf("|  Name       |  class     |    Roll   | Payment status  |      Date     |\n");
	     printf("|=============|============|===========|=================|===============|\n");
	     m++;
	     }
	     printf("<><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><>\n");

	    printf("\%s", s.nam);
	    printf("\t\t%s", s.cls);
	    printf("\t\t%d", s.rol);
	    printf("\t\t%s" ,s.don);
	    printf("\t\t%s\n\n" ,s.dat);

	}
	}
	    printf("<><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><>\n");

    if(f==0){
	printf("Record not found\n");
    }
	else{
	    printf("Record found successfully\n");
	}
	fclose(fp);
	getch();
}
void search_cls(){
f=0;
    fp=fopen("quaiser12.txt" ,"rb");
    printf("Enter class which has to be search=");
    scanf("%s" ,clas);
    while(fread(&s,sizeof(s),1,fp)==1){
	if(strcmpi(s.cls,clas)==0){
	    f=1;
	    if(m==0){
	     printf("|=============|============|===========|=================|===============|\n");
	     printf("|  Name       |  class     |    Roll   | Payment status  |       Date    |\n");
	     printf("|=============|============|===========|=================|===============|\n");
	     printf("<><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><>\n");
		m++;
	    }
	    printf("%s", s.nam);
	    printf("\t\t%s", s.cls);
	    printf("\t\t%d", s.rol);
	    printf("\t\t%s" ,s.don);
	    printf("\t\t%s\n\n" ,s.dat);
	}
    }
    printf("<><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><>\n");
    if(f==0){
	printf("Record not found\n");
    }
	else{
	    printf("Record found successfully\n");
	}
	fclose(fp);
	getch();
}
void search_rl(){
f=0;
    fp=fopen("quaiser12.txt" ,"rb");
    printf("Enter roll which has to be search=");
    scanf("%d" ,&rol1);
    while(fread(&s,sizeof(s),1,fp)==1){
	if(s.rol==rol1){
	    f=1;
	    if(m==0){
	     printf("|=============|============|===========|=================|=============|\n");
	     printf("|  Name       |  class     |    Roll   | Payment status  |     Date    |\n");
	     printf("|=============|============|===========|=================|=============|\n");
	     printf("<><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><>\n");
		m++;
	    }
	    printf("%s", s.nam);
	    printf("\t\t%s", s.cls);
	    printf("\t\t%d", s.rol);
	    printf("\t\t%s", s.don);
	    printf("\t\t%s\n\n", s.dat);
	}
       }
	printf("<><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><>\n");
    if(f==0){
	printf("Record not found\n");
    }
	else{
	    printf("Record found successfully\n");
	}
	fclose(fp);
	getch();
}
//MODIFYING****************
void modi_na(){
k=0;
fp=fopen("quaiser12.txt" ,"rb+");
printf("Enter the name of student for modification\n");
scanf("%s" ,name);
while(fread(&s,sizeof(s),1,fp)==1){
    if(strcmpi(s.nam,name)==0){
	printf("Enter new student name\n");
	scanf("%s" ,s.nam);
	fseek(fp,-si,1);
	fwrite(&s,sizeof(s),1,fp);
	k=1;
	break;
    }
}
if(k==0){
    printf("Name not found\n");
}
    else{
	printf("Record modified\n");
    }
fclose(fp);
}
void modi_cls(){
k=0;
fp=fopen("quaiser12.txt" ,"rb+");
printf("Enter the class of student for modification\n");
scanf("%s" ,clas);
while(fread(&s,sizeof(s),1,fp)==1){
    if(strcmpi(s.cls,clas)==0){
	printf("Enter new class\n");
	scanf("%s" ,s.cls);
	fseek(fp,-si,1);
	fwrite(&s,sizeof(s),1,fp);
	k=1;
	break;
    }
}
if(k==0){
    printf("Class not found\n");
}
    else{
	printf("Record modified successfully\n");
    }
fclose(fp);
}
void modi_rl(){
k=0;
fp=fopen("quaiser12.txt" ,"rb+");
printf("Enter the roll of student for modification\n");
scanf("%d" ,&rol1);
while(fread(&s,sizeof(s),1,fp)==1){
    if(s.rol==rol1){
	printf("Enter new roll\n");
	scanf("%d" ,&s.rol);
	fseek(fp,-si,1);
	fwrite(&s,sizeof(s),1,fp);
	k=1;
	break;
    }
}
if(k==0){
    printf("Name not found\n");
}
    else{
	printf("Record modified\n");
    }
fclose(fp);
}
void modi_ps(){
	k=0;
fp=fopen("quaiser12.txt" ,"rb+");
printf("Enter the payment status(done/dues) for modification\n");
scanf("%s" ,ps);
while(fread(&s,sizeof(s),1,fp)==1){
    if(strcmpi(s.don,ps)==0){
	printf("Enter current payment status(done/dues)\n");
	scanf("%s" ,s.don);
	fseek(fp,-si,1);
	fwrite(&s,sizeof(s),1,fp);
	k=1;
	break;
    }
}
if(k==0){
    printf("Data not found\n");
}
    else{
	printf("Record modified\n");
    }
fclose(fp);
}

//DELETING**********************
void del_na(){
f=0;
fp=fopen("quaiser12.txt" , "rb");
printf("Enter name for delete\n");
scanf("%s" ,name1);
ftemp=fopen("temp1.txt" , "wb");
while(fread(&s,sizeof(s),1,fp)==1)
{
    if(strcmpi(s.nam,name1)!=0)
	fwrite(&s,sizeof(s),1,ftemp);
	else
	f=1;
    }
    fclose(fp);
    fclose(ftemp);
    remove("quaiser12.txt");
    rename("temp1.txt" , "quaiser12.txt");
    if(f==1){
	printf("Record deleted successfully\n");
    }
    else{
	printf("Record not found\n");
    }
}
void del_cls(){
f=0;
fp=fopen("quaiser12.txt" , "rb");
printf("Enter class for delete\n");
scanf("%s" ,class1);
ftemp=fopen("temp1.txt" , "wb");
while(fread(&s,sizeof(s),1,fp)==1)
{
    if(strcmpi(s.cls,class1)!=0)
	fwrite(&s,sizeof(s),1,ftemp);
	else
	f=1;
    }
    fclose(fp);
    fclose(ftemp);
    remove("quaiser12.txt");
    rename("temp1.txt" , "quaiser12.txt");
    if(f==1){
	printf("Record deleted successfully\n");
    }
    else{
	printf("Record not found\n");
    }
}
void del_rl(){
f=0;
fp=fopen("quaiser12.txt" , "rb");
printf("Enter roll for delete\n");
scanf("%d" ,&rol1);
ftemp=fopen("temp1.txt" , "wb");
while(fread(&s,sizeof(s),1,fp)==1)
{
    if(s.rol != rol1)
	fwrite(&s,sizeof(s),1,ftemp);
	else
	f=1;
    }
    fclose(fp);
    fclose(ftemp);
    remove("quaiser12.txt");
    rename("temp1.txt" , "quaiser12.txt");
    if(f==1){
	printf("Record deleted successfully\n");
    }
    else{
	printf("Record not found\n");
    }
}
void about(){
printf("\n\n\n\n\n I am pleased to acknowledge Tahseen Ahmad Sir for their invaluable guidance\n during the course of this project work. As my project VOCATIONAL ADMISSION\n MANAGEMENT SYSTEM which envelops the automation of all work. I have tried my\n level best to make our project as simple possible. I would also like to give\n special thanks to all the talented personalities of our institute who had given me a normal support completing my project\n");


printf("\n\n");
printf("\t\t\t\t\t\t\tTHANK YOU\n");
printf("\t\t\t\t\t\t\tTAHSEEN AHMAD SIR\n\n");
printf("\tDeveloped by- Quaiser Perwez\n");
printf("\tRoll number- 21\n");
printf("\tClass- BCA1\n");


}
