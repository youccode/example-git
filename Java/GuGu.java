public class GuGu{ 
    public void dan(int n)
    {
    /* public static void main(String[] args)
    {
        /* int n; // 다른 것과 동일하게 항상 세미 콜론이 존재해야함.
        n = 5; */ 

        System.out.println(n*1);
        System.out.println(n*2);
        System.out.println(n*3);
        System.out.println(n*4);
        System.out.println(n*5);
        System.out.println(n*6);
        System.out.println(n*7);
        System.out.println(n*8);
        System.out.println(n*9);
    }
 
    public static void main(String[] args)
    {
        GuGu gugu = new GuGu(); //main method에 구현 내용이 들어감
        for(int n=2; n<10; n++)
        {
            gugu.dan(n); // dan은 정수값을 하나 입력으로 받음
    
        }

    }
}