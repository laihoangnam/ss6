#include<stdio.h>
int main(){
	int a,b,i,e;
	printf("nhap so nguyen duong a : ");
	scanf("%d",&a);
	printf("nhap so nguyen duong b : ");
	scanf("%d",&b);
while(a<0||b<0);
	do{
		printf("CACULATOR\n");
	    printf("1,tong\n");
	    printf("2,hieu\n");
	    printf("3,tich\n");
	    printf("4,thuong\n");
	    printf("5,so du phep chia 2 so\n");
	    printf("6,UCLN\n");
	    printf("7,BCNN\n");
	    printf("8,thoat\n");
	    printf("lua chon cua ban la: ");
	    int choice;
	    float sum,difference,product,quotient,remainder_division,gcd,lcm;
	    scanf("%d",&choice);
	    switch(choice){
		    case 1:
			    sum=a+b;
			    printf("tong cua %d va %d la: %.1f\n",a,b,sum);
			    break;
		    case 2:
			    difference=a-b;
			    printf("hieu cua %d va %d la: %.1f\n",a,b,difference);
			    break;
		    case 3:
			    product=a*b;
			    printf("tich cua %d va %d la: %.1f\n",a,b,product);
			    break;
		    case 4:
		        quotient=a/b;
			    printf("thuong cua %d va %d la: %f\n",a,b,quotient);
		        break;
		    case 5:
		        remainder_division=a%b;
			    printf("so du khi chia 2 so %d va %d la: %.1f\n",a,b,remainder_division);
			    break;
		    case 6:
		    	for( i = 1; i <= a || i <= b; i++) {
                    if( a%i == 0 && b%i == 0 )
                        gcd = i;
                }
		    	printf("UCLN cua 2 so %d va %d la: %d\n",a,b,gcd);
		    	break;
		    case 7:
		    	
				for( i = 1; i <= a || i <= b; i++) {
                    if( a%i == 0 && b%i == 0 )
                        gcd = i;
                }
                lcm=a*b/gcd;
                printf("BCNN cua 2 so %d va %d la: %d\n",a,b,lcm);
                break;
			case 8:
				exit(e);
		default:
			printf("vui long chon tu 1-8: \n");	
	    }
    }while(choice<1||choice>8){
    	printf("vui long nhap tu 1 den 8");
	}
    return 0;
}
	
