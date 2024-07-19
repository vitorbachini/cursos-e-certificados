import java.util.Locale;

public class App {
    public static void main(String[] args) throws Exception {
        Locale.setDefault(Locale.US);
        
        int x, y;
        double result;
        x = 5;
        y = 2;

        result = (double) x / y;
        System.out.println(result);
        
    }
}
