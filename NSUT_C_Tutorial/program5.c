// Anilkumar (2020UCD2101)
#include<stdio.h>

int main(){
	int grades[3][30];
	//input
	for(int i = 0; i<3; i++){
		printf("Give grades for students in class %d\n",i + 1);
		for (int student = 0; student<30; student++){
			scanf("%d", &grades[i][student]);
		}
	}
	//output
	for(int i = 0; i<3; i++){
		printf("\nGrades of students in class %d are\n", i + 1);
		for (int student = 0; student<30; student++){
			printf("%d ", grades[i][student]);
		}
	}

	return 0;
}
/************OUTPUT**************
Give grades for students in class 1
23 34 54 67 89 90 87 76 54 57 68 79 65 32 34 56 67 89 91 86 64 59 73 58 63 52 61 66 88 99
Give grades for students in class 2
1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30
Give grades for students in class 3
100 99 98 97 96 95 94 93 92 91 90 89 88 87 86 85 84 83 82 81 80 79 78 77 76 75 74 73 72 71
*/


