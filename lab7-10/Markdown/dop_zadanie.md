# Звіт до додаткового завдання 

Реалізувати функцію, що визначає скільки серед заданої послідовності чисел таких пар, у котрих перше число меньше наступного, 
використовуючи функцію з варіативною кількістю аргументів

###1. Функція couples


	int couples(int var, ...) <- передача змінних у функцію couples
	{
		int count = 0;       <- ініціалізація змінної, ща рахує кількість пар
		va_list vl;          <- ініціалізація кількості змінних, що були передані функції
		va_start(vl, var);   <- ініціалізація першої змінної, переданої у функцію
		int mass[var];       <- ініціалізація масиву, розмір якого дорівнює кількості змінних

		for (int i = 0; i < var; i++)   <- цикл, що перебирає змінні, передані функції та записує їх у масив
		{
			mass[i] = va_arg(vl, int);  
		}
	
	
		for (int i = 0; i < var - 1; i++) <- цикл, що попарно порівнює числа, та додає 1 до count, якщо перша число меньше 		наступного 
		  {
		if (mass[i] < mass [i+1])
			{
			count++;             <- додає 1 до count
			}
		}
	

		va_end(vl);                 <- кінець роботи з змінними, переданими в функці.
		return count;               <- функція повертає кількість пар
		}

###2. main функція

	int main(void)
	{
		printf("%d\n",  couples(3,1,2,3));  <- викликає та виводить результат функуії couples

	}
### 3. блок-схема програми


![text](file:///home/andreii/lab/lab07/Markdown/img/otschetdopzad)
























