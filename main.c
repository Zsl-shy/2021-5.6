#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	//冒泡排序
	int arr[]={9,8,6,7,2,4,3,5,1,0};
	int i=0;
	int j=0;
	int num=0;
	int sz=sizeof(arr)/sizeof(arr[0]); 
	for(i=0; i<sz; i++){
	 	int dis=1;//假设数组是正确排序的 
	 	for(j=0; j<sz-i; j++){
	 		if(arr[j]>arr[j+1]){
	 			num=arr[j];
	 			arr[j]=arr[j+1];
	 			arr[j+1]=num;
	 			dis=0;//数组排序并不完全正确 
			}
		}
		if(dis==1){
			break;//数组排序已经正确了，中止无效循环，提高效率 
		}
	 }
	 
	 for(i=0; i<sz; i++){
	 	printf("%d",arr[i]);
	}
	
	return 0;
}
