#include<iostream>
using namespace std;
float Operation(char c,float n[],int num);
int main(){
    cout<<"############### Lala Calculator ##################";
    char c;
    int num;
    cout<<"\nEnter total numbers:";
    cin>>num;
    float *n=new float[num];
    for(int i=1;i<=num;i++){
        cin>>n[i];
    }
    cout<<"        Choice\n";
    cout<<"   --- --- --- ---   \n";
    cout<<"  | / | * | + | - |  \n";
    cout<<"   --- --- --- ---   \n";
    cin>>c;
    float arr=Operation(c,n,num);
    cout<<arr;

    return 0;
}
float Operation(char c,float n[],int num){
    float arr=0;
    switch(c){
        case '/':
            arr=1;
            for(int i=1;i<=num;i++){
                if(i==1){
                    arr=n[i]/arr;
                }
                else{
                    arr= 1/(n[i]/arr);
                }
            }
            break;
        case '*':
            arr=1;
            for(int i=1;i<=num;i++){
                arr=n[i]*arr;
            }
            break;
        case '+':
            arr=0;
            for(int i=1;i<=num;i++){
                arr=n[i]+arr;
            }
            break;
        case '-':
            /*for(int i=1;i<=num;i++){
                arr= n[i]-arr;
                break;
            }*/
            arr=0;
            for(int i=1;i<=num;i++){
                if(i==1){
                    arr=n[i]-arr;
                }
                else{
                    arr= -(n[i]-arr);
                }
            }
            break;

    }
    return arr;

}


