import java.util.Locale;
import java.util.Scanner; 

public class App {
    public static void main(String[] args) throws Exception {
        Locale.setDefault(Locale.US);
        Scanner sc = new Scanner(System.in);
       
       System.out.print("Base do retangulo: ");
       double b = sc.nextDouble();
       System.out.print("Altura do retangulo: ");
       double h = sc.nextDouble();

       double area = b * h;
       double perimetro = 2 * (b + h);
       double diagonal = Math.sqrt(Math.pow(b, 2.0) + Math.pow(h, 2.0)); 

       System.out.println("Area: " + String.format("%.4f" , area));
       System.out.println("Perimetro: " + String.format("%.4f", perimetro));
       System.out.println("Area: " + String.format("%.4f", diagonal));
        sc.close();
    }
}
