     1	
     2	#include"pgmhead"
     3	
     4	void suspend(struct Student b[])
     5	{
     6		char id[max];
     7		int student_num = 0;
     8		struct Course *Ptr;
     9		Ptr = (struct Course*)malloc(sizeof(struct Course));
    10	
    11		printf("Student ID for make suspend> ");scanf("%s",&id);
    12		student_num = NameSearch(id,b);
    13		
    14		if(student_num != 100)
    15		{
    16			b[student_num].ActFlag[0] = 'n';
    17			
    18			Ptr = b[student_num].FirstCourse;
    19			while(Ptr != NULL)
    20			{
    21				struct Course *temp;
    22				temp = (struct Course*)malloc(sizeof(struct Course));
    23				temp = Ptr;
    24				Ptr = Ptr->NextCourse;
    25				free(temp);
    26			}
    27			free(Ptr);
    28			printf("Student id>  %s \n",b[student_num].StudentID);
    29			printf("\nStudent %s is already suspend.\n",b[student_num].StudentName);
    30			printf("\n");
    31			}
    32		else if(student_num == 100)
    33		{
    34			printf("student id %s isnt rigester\n\n",id);
    35		}
    36	}
