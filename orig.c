


















 

 


#include <stdio.h>

int main(int argc, char **argv)
{
	
	int m[5][5] = { {0, 0, 0, 0, 0},
					{0, 0, 0, 0, 0},
					{0, 0, 0, 0, 0},
					{0, 0, 0, 0, 0},
					{0, 0, 0, 0, 0} };
	int i = 0;
	int j = 0;
	int cont = 1;
	
	m[0][2] = 1;
	
		for(i = 0; i < 5; ++i){
			for(j = 2; j < 5; ++j){
					if(m[i][j] != 0){ 
						
						if(m[0][j]){										// -6 se i == 0
							m[4][j-1] = cont;
							++cont;
							printf("%d%d = %d\n",i, j, cont); 
						}else if(m[i][0] && cont % 5 == 0){
								m[i-1][4] = cont; 							// -1 
								++cont;
								printf("%d%d = %d\n",i, j, cont);
						}else if(cont % 5 == 0){							// -5
								m[i+1][j] = cont;
								++cont;
								printf("%d%d = %d\n",i, j, cont);
						}
						
					}
					else{													// -6			
						m[i-1][j-1] = cont;
						++cont;
						printf("%d%d = %d\n",i, j, cont);
					}
					
			}
					
		}
		
		for(i = 0; i < 5; ++i){
			for(j = 0; j < 5; ++j){
				printf("%d ", m[i][j]);
			}
			printf("\n");
		}
		
		return 0;
	}
