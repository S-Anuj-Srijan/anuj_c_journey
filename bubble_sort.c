int sort(int arr[],int no){
    for(int i =0; i<no;i++){
        for(int j = 0; j+1<no;i++){
            if(arr[j]<arr[j+1]){
                arr[j]=arr[j]^arr[j+1];
                arr[j+1]=arr[j]^arr[j+1];
                arr[j]=arr[j]^arr[j+1];
            }
        }
    }
    
}
int main(){
    int arr[10]={1,3,2,5,4,6,8,7,0,9};
    int size=10;
    sort(arr,size);


}