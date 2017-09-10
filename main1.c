     1	
     2	#include"pgmhead"
     3	
     4	/* 
     5	Function:
     6	Author: Yap Jia Hong
     7	*/
     8	
     9	struct Student a[max];
    10	
    11	int main()
    12	{
    13		
    14		int ChoiceNum;
    15		int QuitCtr;
    16		char QuitFlag;
    17		char ch;
    18	
    19		QuitFlag = 'n';
    20		QuitCtr = 0;
    21		
    22		while(QuitCtr < 2)
    23		{
    24			ChoiceNum = 0;
    25			printf("You have to following choices (1-8) \n");
    26			printf("1. initial - initialize \n");
    27			printf("2. Load -  \n");
    28			printf("3. Group insert \n");
    29			printf("4. Suspend \n");
    30			printf("5. Calculate Avg \n");
    31			printf("6. Print Grade(all student)\n");
    32			printf("7. Print Grade\n");
    33			printf("8. Quit \n\n");
    34	
    35			printf("Please enter your choice: \n");
    36			printf("must be a number between 1 - 8 \n");
    37			printf("select function: ");scanf("%d",&ChoiceNum);
    38			
    39			switch(ChoiceNum)
    40			{
    41				case 1:
    42					initial(a);
    43					break;
    44				case 2:
    45					load(a);
    46					break;
    47				case 3:
    48					GroupInsert(a);
    49					break;
    50				case 4:
    51					suspend(a);
    52					break;
    53				case 5:
    54					average(a);
    55					break;
    56				case 6:
    57					print_all(a);
    58					break;
    59				case 7:
    60					Print_Ind(a);
    61					break;
    62				case 8:
    63					printf("Do you want quit?\n");
    64					printf("Please enter 'y' or 'Y' for Yes\n");
    65					printf("Hit any key for No\n");
    66					scanf("%s",&QuitFlag);
    67					if((QuitFlag == 'y') || (QuitFlag == 'Y'))
    68					{
    69					QuitCtr = 2; }
    70					freenode(a);
    71					break;
    72				default:
    73					printf("...\n");
    74					break;
    75			}
    76			
    77			printf("Hit any key to countinu...\n");
    78			ch = getchar();
    79		}
    80	
    81		printf("Exit...\n");
    82	
    83		return 0;
    84	
    85	}
