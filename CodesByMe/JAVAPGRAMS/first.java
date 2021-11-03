class MyClass {
    public static void main(String[] args)throws Exception {
   H h = new H();
   J h2 = new J();
   Thread j = new Thread(h);
   j.setName("11");

   Thread jj = new Thread(h2);
   jj.setName("22");
   j.start();
   jj.start();
    }
}
class H implements Runnable {
    public void run() {
        int t=10,sum=0;
        while(t>0) {
           sum+=t;
           t--;
           
        }
        System.out.println("Sum : " + sum);
    }
}
class J implements Runnable {
    public void run() {
        int t=10,product=1;
        while(t>0) {
           product*=t;
           t--;
           
        }
        System.out.println("product : " + product);
    }
}