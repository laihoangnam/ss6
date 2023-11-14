#include<stdio.h>
int main(){
	int number1,number2,number3,e,sum,average,max,min;
	printf("nhap so nguyen thu nhat: ");
	scanf("%d",&number1);
	printf("nhap so nguyen thu hai: ");
	scanf("%d",&number2);
	printf("nhap so nguyen thu ba: ");
	scanf("%d",&number3);
	do{
		printf("CACULATOR\n");
		printf("1,tong\n");
		printf("2,trung binh cong\n");
		printf("3,so lon nhat, nho nhat\n");
		printf("4,thoat\n");
		printf("lua chon cua ban la: ");
		int choice;
		scanf("%d",&choice);
		switch(choice){
			case 1:
				sum=number1+number2+number3;
				printf("tong: %d\n",sum);
				break;
			case 2:
				average=(number1+number2+number3)/3;
				printf("trung binh cong: %d\n",average);
				break;
			case 3:
				max=number1;
				min=number1;
				if(max<number2){
					max=number2;
					if(max<number3){
						max=number3;
					}
				}else if(max<number3){
					max=number3;
				}
				if(min>number2){
					min=number2;
					if(min>number3){
						min=number3;
					}
				}else if(min>number3){
					min=number3;
				    }
				printf("so lon nhat va nho nhat: %d %d\n",max,min);
				break;
			case 4:
				exit(e);
		    default:
			printf("vui long chon so tu 1-4\n");
		}
	}while("vui long chon so tu 1-4\n");
}
