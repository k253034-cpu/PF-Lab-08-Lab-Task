#include<stdio.h>
int main(){
	int i, j, max=0, row, col;
	int matrix[][4] = {
		{10,22,35,47},
		{50,65,73,80},
		{91,10,11,12},
	};
	for(i=0;i<3;i++){
		for(j=0;j<4;j++){
			if(max<matrix[i][j]){
				max = matrix[i][j];
				row = i;
				col = j;
			}
		
			
			
			}
			}
		printf("The Maximium is %d at Index[%d, %d]", max, row, col);
			
	return 0;
}
