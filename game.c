#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
	int n,y,a,count=0;
	char r;
	printf("<-----------GUESSING GAME-------------->\n");
	printf("Select a number between 1 to 15\n");
	printf("if yes='y' if no='n'\n");
	printf("is it available in 1,3,5,7,9,11,13,15\n");
	a=getche();
	if(a=='y' || a=='Y'){
		count=count+1;
	}
	else if (a=='n' || a=='N'){
		count=count;
	}
	else{
		printf("enter y or n\n");
		if(a=='y' || a=='Y'){
		count=count+1;
		}
		else if (a=='n' || a=='N'){
			count=count;
		}
	}
	printf("is the number available in  2,3,6,7,10,11,14,15\n");
	a=getche();
	if(a=='y' || a=='Y'){
		count=count+2;
	}
	else if (a=='n' || a=='N'){
		count=count;
	}
	else{
		printf("enter y or n\n");
		if(a=='y' || a=='Y'){
		count=count+2;
		}
		else if (a=='n' || a=='N'){
			count=count;
		}
	}
	printf("is the number available in 4,5,6,7,12,13,14,15\n");
	a=getche();
	if(a=='y' || a=='Y'){
		count=count+4;
	}
	else if (a=='n' || a=='N'){
		count=count;
	}
	else{
		printf("enter y or n\n");
		if(a=='y' || a=='Y'){
		count=count+4;
		}
		else if (a=='n' || a=='N'){
			count=count;
		}
	}
	printf("is the number available in 8,9,10,11,12,13,14,15\n");
	a=getche();
	if(a=='y' || a=='Y'){
		count=count+8;
	}
	else if (a=='n' || a=='N'){
		count=count;
	}
	else{
		printf("enter y or n\n");
		if(a=='y' || a=='Y'){
		count=count+8;
		}
		else if (a=='n' || a=='N'){
			count=count;
		}
	}
	printf("the number you selected is = %d",count);
	return 0;
}
