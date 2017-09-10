     1	
     2	#include"pgmhead"
     3	
     4	void Print_Ind(struct Student b[])
     5	{
     6		char id[max];
     7		int flag = 0;
     8		struct Course *Ptr;
     9	
    10		printf("Please input student id for searching> ");scanf("%s",&id);
    11		flag = NameSearch(id,b);
    12	
    13		if(b[flag].ActFlag[0] == 'y')
    14		{
    15			if((flag != 100))
    16			{
    17				printf("\nName> %s\n",b[flag].StudentName);
    18				printf("Student id> %s\n",b[flag].StudentID);
    19				printf("Total Credit> %d\n",b[flag].TotCredits);
    20				printf("Total Points> %0.2f\n",b[flag].Average);
    21				printf("Course Code\tScore\n");
    22				
    23				Ptr = (struct Course*)malloc(sizeof(struct Course));
    24				Ptr = b[flag].FirstCourse;
    25				while(Ptr != NULL)
    26				{
    27					printf("%s\t\t%d\n",Ptr->CourseCode,Ptr->Score);
    28					Ptr = Ptr->NextCourse;
    29				}
    30				free(Ptr);
    31				printf("\n");
    32			}
    33		}
    34			if((flag == 100) || (b[flag].ActFlag[0] == 'n'))
    35			{
    36				printf("\nStudent id %s isnt regiseterd yet or suspended\n",id);
    37			}
    38			printf("\n");
    39	}
