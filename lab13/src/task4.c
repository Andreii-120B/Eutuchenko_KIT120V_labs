#include <string.h>
#include <stdio.h>



int main(void)
{
	char text[] = {"Пример текста 4 с  числами 42  1 9 "};

	char copytext[sizeof(text)];
	strcpy(copytext, text);

	char mass[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', };

	char *find;
	
	for (int i = 0; i < 10; i++)
	{
		for(int j = 0; j < sizeof(text); j++)
		{
			find = strchr(copytext, mass[i]);
			if (find != NULL)
			{
			
				if (*find == text[j])
				{
				printf("%c", text[j]);
				for (int q = 0; q < 10; q++)
				{
				if (text[j + 1] == mass[q] )
					{
					printf("%c\n", text[j + 1]);
					}
				}
				
						printf("\n");
				}
			}	
		}

	}

	return 0;
}
