#include <stdio.h>

int main(){
	int n,m;
	int sum=0;
	int max,min;
	printf("nhap so hang la: ");
	scanf("%d",&n);
	printf("nhap so cot la: ");
	scanf("%d",&m);
	int ary[n][m];
	for (int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			printf("nhap so phan tu %d: ",i+1);
			scanf("%d",&ary[i][j]);
		}
	}
	for (int i=0;i<n;i++){
		for(int j=0;j<m;j++){
		if(i==j)
		sum=sum + ary[i][j];
			}

		}
	printf("tong duong cheo la: %d",sum);
	printf("\ntim boi chung lon nhat va uoc chung lon nhat\n");
	max = ary[0][0];
	min = ary[0][0];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(ary[i][j]>max){
				max=ary[i][j];
			}
			if(ary[i][j]<min){
				min=ary[i][j];
			}	
		}
	}
	printf("ucln la :%d\n",max);
	printf("bcnn la :%d",min);
}