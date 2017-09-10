     1	
     2	#include"pgmhead"
     3	
     4	void print_all(struct Student b[])
     5	{
     6	
     7		int num = 0;
     8		int IDFlag = 0;
     9		char ID[] = "D9999999";
    10		
    11		printf("\nStudentID:\tName:\t\tTotPoint:   Credits:   Avg:   CourseCode/Points:\n");
    12		while(num<max)
    13		{
    14			if(b[num].ActFlag[0] == 'y')
    15			{
    16				IDFlag = strcmp(b[num].StudentID,ID);
    17				if(IDFlag != 0)
    18				{
    19				printf("%s\t%s\t\t%d\t%d\t%3.2f\t",b[num].StudentID,b[num].StudentName,b[num].TotCoursePoints,b[num].TotCredits,b[num].Average);
    20				
    21				struct Course *head;
    22				head = (struct Course*)malloc(sizeof(struct Course));
    23				head = b[num].FirstCourse;
    24				while(head!=NULL)
    25				{
    26					printf("%s%3d\n",head->CourseCode,head->Score);
    27					head = head->NextCourse;
    28				}
    29				printf("\n");
    30				free(head);
    31				}
    32			}	
    33			num = num + 1;
    34		}
    35		printf("\n");
    36	}
