# Goldbach-conjecture
验证哥德巴赫猜想
#include<stdio.h>
#include<math.h>
int JudgePrime(int i);
int main(){
	int i,n=0,m,k=0;
	for(i=1;2*i<=2000;i++){
		for(m=2;m<=i;m++){
			if(JudgePrime(m)){
				if(JudgePrime(2*i-m)){
					printf("%4d=%4d+%4d",2*i,m,2*i-m);
					n++;
					k=1;
					break;
				}
			}
		}
		if(k){
			if(n%4==0){
				printf("\n");
			}
			else{
				printf(" ");
			}
		}
	}
	return 0;
}

int JudgePrime(int i){
	int j,m=1;
	if(i==2){
		m=1;
	}
	else{
		for(j=2;j<=sqrt(i);j++){
			if(i%j==0){
				m=0;
			}
		}
	}
	return m;
}
