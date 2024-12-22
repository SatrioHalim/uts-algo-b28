#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void transactionMutation(){
	
	printf("+===============================+\n");
	printf("  Transaction Mutation Question\n");
	printf("+===============================+\n");
	printf("\n");
	
	int saldo;
	int x;
	
	printf("Input your account balance : ");
	scanf("%d",&saldo);
	getchar();
	printf("Input many transaction [1-100]: ");
	scanf("%d",&x);
	getchar();
	system("cls");
	
	for(int i = 0; i < x; i++){
		
		char type;
		int money;
		
		printf("Transaction %d\n",i+1);
		printf("===============\n");
		printf("\n");
		
		do{
			printf("Transaction type ['D' for Debit/'K' for Credit]: ");
			scanf("%c",&type);
			getchar();
		}while(type != 'D' && type != 'd' && type != 'K' && type != 'k'); 

		printf("Nominal : ");
		scanf("%d",&money);
		getchar();
		
		if(type == 'D' || type == 'd'){
			saldo += money;
		} else if(type == 'K' || type == 'k'){
			if(saldo - money < 0){
				printf("Sorry, your balance is insufficient\n");
				printf("\n");
				printf("Press enter to continue...");
				getchar();
			} else {
				saldo -= money;
			}
		}
		
		system("cls");
		
	}
	
	printf("Your final account balance is : %d\n",saldo);
	printf("\n");
	printf("Press enter to continue...");
	getchar();
}

void simplification(){
	
	printf("+=========================================================+\n");
	printf("  Simplification Question\n");
	printf("+=========================================================+\n");
	printf("\n");
	
	int N;
	printf("Enter the number of strings you want to simplify : ");
	scanf("%d",&N);
	getchar();
	
	for(int i = 0; i< N; i++){
		
		system("cls");
		char sandi[105];
		char simplified[105];
		printf("String - %d\n",i+1);
		printf("=======================\n");
		printf("Input string [no space] : ");
		scanf("%s",sandi);
		getchar();
		int len = strlen(sandi);
		int index = 0;
		
		for(int j = 0; j < len; j++){
			if(sandi[j] >= 65 && sandi[j] <= 90){
				simplified[index] = sandi[j];
				index++;
			} else if(sandi[j] >= 97 && sandi[j] <= 122){
				simplified[index] = sandi[j];
				index++;
			} else if(sandi[j] >= 48 && sandi[j] <= 57){
				simplified[index] = sandi[j];
				index++;
			} 
		}
		
		if(strlen(simplified) > 0){
			printf("\nSimplification result : %s\n",simplified);
			int l = strlen(simplified);
			for(int p = 0; p < l; p++){
				simplified[p] = '\0';
			}
			printf("\nPress enter to continue...");
			getchar();
		} else {
			printf("Sandi Kosong!\n");
			printf("\nPress enter to continue...");
			getchar();
		}
	}
}

void amongus(){
	
	printf("+===============================================+\n");
	printf("  Among Us Question\n");
	printf("+===============================================+\n");
	printf("\n");
	
	int n;
	int x[15];
	
	do{
		printf("Input total person [Must an odd number] : ");
		scanf("%d",&n);
		getchar();
	}while(n % 2 == 0);
	
	printf("Fill %d person separated by spaces [values 0-9]: ");
	for(int i = 0; i < n; i++){
		int temp;
		scanf("%d",&temp);
		getchar();
		x[temp]++;
	}
	for(int i = 0; i < 10; i++){
		if(x[i] % 2 == 1){
			printf("\nThe impostor is %d\n",i);
			break;
		}
	}
	
	printf("\nPress enter to continue....");
	getchar();
	
}

void hello(){
	
	printf("+========================+\n");
	printf("  Sanity Check Question\n");
	printf("+========================+\n");
	printf("\n");
	printf("Hello World!\n");
	printf("\nAowkowko gitu doang\n");
	printf("\nPress enter to continue...");
	getchar();
}

void swap(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

void artMuseum(){
	
	int N; // ukuran papan
	
	printf("+========================+\n");
	printf("  Art Museum Question\n");
	printf("+========================+\n");
	printf("\n");
	printf("Input size of board : ");
	scanf("%d",&N);
	getchar();
	int board[N+5][N+5];
	
	printf("Fill the board [%d x %d]:\n",N,N);
	for(int i = 0; i < N; i++){
		for(int j = 0; j < N; j++){
			scanf("%d",&board[i][j]);
			getchar();
		}
	}
	
	printf("\nPress enter to continue...");
	getchar();
	
	system("cls");
	int T;
	printf("Input many rotation do you wish : ");
	scanf("%d",&T);
	getchar();
	
	for(int i = 0; i < T; i++){
		int axis;
		printf("\nRotation %d\n",i+1);
		printf("==================\n");
		printf("Which row & column to rotate[1-%d]: ",N);
		scanf("%d",&axis);
		getchar();
		axis -= 1;
		
		for(int j = 0; j < N; j++){
			swap(&board[axis][j],&board[j][axis]);
		}
		printf("\n");
	}	
	
	system("cls");
	printf("The output board : \n");
	for(int i = 0; i < N; i++){
		for(int j = 0; j < N; j++){
			if(j == N-1){
				printf("%d",board[i][j]);
			} else {
				printf("%d ",board[i][j]);
			}
		}
		printf("\n");
	}
	
	printf("\nPress enter to continue...");
	getchar();
}

void opening(){
	printf("\n");
	printf("+================================+\n");
	printf("|                                |\n");
	printf("|   Jawaban soal uts Algo B28    |\n");
	printf("|                                |\n");
	printf("|              by                |\n");
	printf("|         Silver Bullet          |\n");
	printf("|                                |\n");
	printf("+================================+\n");
	printf("\n");
	printf("Press enter to continue...");
	getchar();
}

void closing(){
	
	system("cls");
	printf("\n");
	printf("Thank you\n");
	printf("\n");
}

int main(){
	
	int menu;
	opening();
	do{
		system("cls");
		printf("+=====================================+\n");
		printf("|Pilih Jawaban Soal algo UTS B28      |\n");
		printf("+=====================================+\n");
		printf("1. Account Mutation\n");
		printf("2. Simplification\n");
		printf("3. Among us\n");
		printf("4. Art museum\n");
		printf("5. Sanity check\n");
		printf("6. Exit\n");
		printf("[1-6] >> ");
		scanf("%d",&menu);
		getchar();
		
		switch(menu){
			case 1 :
				system("cls");
				transactionMutation();
				break;
			case 2 :
				system("cls");
				simplification();
				break;
			case 3 :
				system("cls");
				amongus();
				break;
			case 4 :
				system("cls");
				artMuseum();	
				break;
			case 5 :
				system("cls");
				hello();
				break;
		}	
	}while(menu != 6);
	
	closing();
	
	return 0;
}
