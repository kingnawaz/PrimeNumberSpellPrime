import java.util.Arrays;
import java.util.Scanner;
public class SubSetSum{
    public static void main(String... args){
        Scanner in=new Scanner(System.in);
        //input the number of elements in array
        int N=in.nextInt();
        //input array
        int[] arr=new int[N];
        for(int i=0;i<N;i++)
        	arr[i]=in.nextInt();
        System.out.println("enter the sum to be obtained");
        //input the sum to be obtaned
        int S=in.nextInt();
        //create a viited array initialize with zero
        int[] sub_sum=new int[N];
        Arrays.fill(sub_sum,0);
        //call subset sum function from zero'th index
        subSet(arr,sub_sum,0,N,S);
        in.close();
    }
    public static  void subset(int[] arr,int[] sub_sum,int i,int N,int S){
        //create two more arrays and copy sub_sum array
        int[] sub_sum1=new int[N],sub_sum2=new int[N];
        sub_sum1=Arrays.copyOf(sub_sum,N);
        sub_sum2=Arrays.copyOf(sub_sum,N);
        //if S is zero sub_sum is our array
         if(S==0)
            System.out.println(Arrays.toString(sub_sum));
        //else two possiblities with i'th element and without i'th element
        //this is checked recursively
        if(i<N && S>0){
            int sum=S-arr[i];
            sub_sum1[i]=1;
            sub_sum2[i]=0;
            subSet(arr,sub_sum1,i+1,N,sum);
            subSet(arr,sub_sum2,i+1,N,S);
        }

    }
}
