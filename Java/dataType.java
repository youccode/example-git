import java.util.ArrayList;

public class dataType {

  public static void main(String[] args) {
    ArrayList pitches = new ArrayList<String>();
    pitches.add("138");
    pitches.add("129");
    pitches.add("142");

    System.out.println(pitches.remove("138"));
    System.out.println(pitches.remove("139"));

    int testInt = 10;
    float testFloat = 3.1415f;

    System.out.println(testFloat + testInt);

    int b = 0;
    int a = 1;
    a &= b;

    boolean test = (boolean) a;

    System.out.println(a);
  }
  // 3 == 011 / 5 = 101   ==> 001 / 111 == 7
}
