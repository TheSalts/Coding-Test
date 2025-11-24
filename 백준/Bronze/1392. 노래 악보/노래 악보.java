
import java.util.HashMap;
import java.util.Map;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int q = sc.nextInt();
        Map<Integer, Integer> notes = new HashMap<>();
        Map<Integer, Integer> questions = new HashMap<>();
        for (int i = 0; i < n; i++) {
            notes.put(i, sc.nextInt());
        }
        for (int i = 0; i < q; i++) {
            questions.put(i, sc.nextInt());
        }
        questions.forEach((key, value) -> System.out.println(get(notes, value)));
    }

    public static int get(Map<Integer, Integer> notes, int q) {
        int index = 1;
        int question = q;
        for (int i = 0; i < notes.size(); i++) {
            int note = notes.get(i);
            if (question >= note) {
                index++;
                question -= note;
            } else return index;
        }
        return -1;
    }
}
