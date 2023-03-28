#include<stdio.h>

float add( float num1, float num2){
	return num1 + num2;
}
float sub( float num1, float num2){
	return num1 - num2;
}
float multi( float num1, float num2){
	return num1 * num2;
}
float divi( float num1, float num2){
	return num1 / num2;
}

int main(){
	
	char op;
	float num1,num2,Ans;
	
	while(1){
		
		printf("Enter Any operator(+,-,*,/):");
	    scanf(" %c",&op);
	
	    printf("Enter operator two value:");
	    scanf("%f %f",&num1,&num2);
	    
	    switch(op){
	    	case'+':
	    		Ans=add(num1,num2);
	    		printf("Addition= %2.f + %2.f = %2.f\n",num1,num2,Ans);
	    		break;
	    		
	    	case'-':
	    	    Ans=sub(num1,num2);
	   		    printf("Substration= %2.f - %2.f = %2.f\n",num1,num2,Ans);
	   		    break;
	   		    
	   		case'*':
	    		Ans=multi(num1,num2);
	    		printf("Multiplication= %2.f * %2.f = %2.f\n",num1,num2,Ans);
	    		break;
	    		
	    	case'/':
	    		if(num2==0){
	    			printf("Error: Division by zero\n");
				}else{
				   Ans=divi(num1,num2);
	    		   printf("Divition= %2.f / %2.f = %2.f\n",num1,num2,Ans);
	    		}
				break;
				
	    	default:
                printf("Invalid operator\n");
		}
	}
	return 0;
}
