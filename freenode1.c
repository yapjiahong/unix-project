     1	#include"pgmhead"
     2	
     3	void freenode(struct Student b[])
     4	{
     5		int num = 0;
     6		int flag = 0;
     7		char id[] = "D0999999";
     8		
     9		struct Course *Ptr,*Nptr;
    10	
    11		while(num<max)
    12		{
    13			flag = strcmp(b[num].StudentID,id);
    14			if((b[num].ActFlag[0] == 'y') && (flag != 0))
    15			{
    16				Ptr = (struct Course*)malloc(sizeof(struct Course));
    17				Ptr = b[num].FirstCourse;
    18				while(Ptr != NULL)
    19				{
    20					Nptr = (struct Course*)malloc(sizeof(struct Course));
    21					Nptr = Ptr;
    22					Ptr = Ptr->NextCourse;	
    23					free(Nptr);
    24				}
    25			}
    26			free(Ptr);
    27			num = num + 1;
    28		}
    29	}
