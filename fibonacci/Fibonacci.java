public class Fibonacci{
    public int fibus(int termine) {
        if(termine==0)
            return 0;
        else if(termine==1)
            return 1;
        else
            return this.fibus(termine-2)+this.fibus(termine-1);
    }
}