#include<stdio.h>
#include<conio.h>
int is_prime(int);
int main(){
	int n1,n2,ones,tens,hundreds,thousands,itr,N=0,count=0;
	printf("enter value of n1,n2");
	scanf("%d%d",&n1,&n2);
	if(n1<1||n1>19999)
	printf("invalid num");	
	for(itr=n1;itr<=n2;itr++){
		if(is_prime(itr)){
		thousands=itr/1000;
		hundreds=(itr%1000)/100;
		tens=(itr%100)/10;
		ones=itr%10;
		/*if(thousands==1||thousands==2||thousands==6)
			count=12;
		if(thousands==5||thousands==4||thousands==9)
			count=13;
		else
		count=14;*/
		switch(thousands){
			case 0:
				count=0;
				break;
			case 1:
			case 2:
			case 6:
				count=11;
				break;
			case 5:
			case 4:
			case 9:
				count=12;
				break;
			case 3:
			case 7:
			case 8:
				count=14;
				break;
		}
		/*	if(hundreds==1||hundreds==2||hundreds==6)
			count=count+14;
			if(hundreds==5||hundreds==4||hundreds==9)
			count=count+15;
			else
			count=count+16;*/
		switch(hundreds){
			case 0:
				count=count+0;
				break;
			case 1:
			case 2:
			case 6:
				count+=13;
				break;
			case 5:
			case 4:
			case 9:
				count+=14;
				break;
			case 3:
			case 7:
			case 8:
				count+=15;
				break;
		}
			
			if(tens==1){
				switch(ones){
			case 0:count=count+3;
			break;
			case 1:
			case 2:
				count=count+6;
			break;
			case 3:count=count+8;
			break;
			case 4:
			case 5:
			case 6:
			case 9:
				count=count+7;
			break;
			case 7:
			case 8:
				count=count+9;
			break;
			}
		}
		else{
		/*if(tens==2||tens==3||tens==4||tens==8)
		 count=count+6;
		if(tens==5||tens==6||tens==9)
		 count=count+5;
		 else
		 count=count+7;*/
		 switch(tens){
			case 2:
			case 3:
			case 8:
				count+=6;
				break;
			case 5:
			case 4:
			case 6:
			case 9:
				count+=5;
				break;
			case 7:
			count+=7; 
		 }
		 /*
		 if(ones==1||ones==2||ones==6)
		count=count+3;
		if(ones==4||ones==5||ones==9)
			count=count+4;
		else
		count=count+5;
		}*/
		switch(ones){
			case 1:
			case 2:
			case 6:
				count+=3;
				break;
			case 5:
			case 4:
			case 9:
				count+=4;
				break;
			case 3:
			case 7:
			case 8:
				count+=5;
				break;
		}
		}
		if(is_prime(count)){
			if(thousands==0)
				printf("");
			
			else{
				switch(thousands){
					case 1:printf("ONE thousand");
						break;
					case 2:printf("TWO thousand");
						break;
					case 3:printf("THREE thousand");
						break;
					case 4:printf("FOUR thousand");
						break;
					case 5:printf("FIVE thousand");
						break;
					case 6:printf("SIX thousand");
						break;
					case 7:printf("SEVEN thousand");
						break;
					case 8:printf("EIGHT thousand");
						break;
					case 9:printf("NINE thousand");
						break;
					case 10:printf("TEN thousand");
					break;
					case 11:printf(" ELEVEN thousand");
					break;
					case 12:printf(" TWELVE thousand");
					break;
					case 13:printf(" THIRTEEN thousand");
					break;
					case 14:printf(" FORTEEN thousand");
					break;
					case 15:printf(" FIFTEEN thousand");
					break;
					case 16:printf(" SIXTEEN thousand");
					break;
					case 17:printf(" SEVENTEEN thousand");
					break;
					case 18:printf(" EIGHTTEEN thousand");
					break;
					case 19:printf(" NINTEEN thousand");
					break;
				}
			}
			if(hundreds==0)
				printf("");
			
			else{
				switch(hundreds){
					case 1:printf(" ONE hundred AND");
						break;
					case 2:printf(" TWO hundred AND");
						break;
					case 3:printf(" THREE hundred AND");
						break;
					case 4:printf(" FOUR hundred AND");
						break;
					case 5:printf(" FIVE hundred AND");
						break;
					case 6:printf(" SIX hundred AND");
						break;
					case 7:printf(" SEVEN hundred AND");
						break;
					case 8:printf(" EIGHT hundred AND");
						break;
					case 9:printf(" NINE hundred AND");
						break;	
			}
		}
			if(tens==1){
				switch(ones){
					case 0:printf(" TEN\n");
					break;
					case 1:printf(" ELEVEN\n");
					break;
					case 2:printf(" TWELVE\n");
					break;
					case 3:printf(" THIRTEEN\n");
					break;
					case 4:printf(" FORTEEN\n");
					break;
					case 5:printf(" FIFTEEN\n");
					break;
					case 6:printf(" SIXTEEN\n");
					break;
					case 7:printf(" SEVENTEEN\n");
					break;
					case 8:printf(" EIGHTTEEN\n");
					break;
					case 9:printf(" NINTEEN\n");
					break;	
				}
			}
			else{
			
				switch(tens){
					case 2:printf(" TWENTY");
						break;
					case 3:printf(" THIRTY");
						break;
					case 4:printf(" FORTY");
						break;
					case 5:printf(" FIFTY");
						break;
					case 6:printf(" SIXTY");
						break;
					case 7:printf(" SEVENTY");
						break;
					case 8:printf(" EIGHTY");
						break;
					case 9:printf(" NINTY");
						break;	
				}
			
				switch(ones){
					case 0:printf("");
					break;
					case 1:printf(" ONE\n");
					break;
					case 2:printf(" TWO\n");
					break;
					case 3:printf(" THREE\n");
					break;
					case 4:printf(" FOUR\n");
					break;
					case 5:printf(" FIVE\n");
					break;
					case 6:printf(" SIX\n");
					break;
					case 7:printf(" SEVEN\n");
					break;
					case 8:printf(" EIGHT\n");
					break;
					case 9:printf(" NINE\n");
					break;	
				}
			}
		if(is_prime(count)&&is_prime(itr))
			N++;
		}
	}
}
printf("Number of elements -> %d",N);
return 0;
}
int is_prime(int val){
	int i,flag=0;
	for(i=2;i<val;i++){
		if(val%i==0)
			flag=flag+1;
	}
if(flag==0)
	return 1;
else
	return 0;
}
