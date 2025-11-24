
import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int m = sc.nextInt();
        int r = sc.nextInt();
        Map<Integer, List<Integer>> map = new HashMap<>();
        boolean[] visited = new boolean[n + 1];
        for (int i = 0; i < m; i++) {
            int u = sc.nextInt();
            int v = sc.nextInt();
            if (map.containsKey(u)) {
                List<Integer> list = map.get(u);
                list.add(v);
                map.replace(u, list);
            } else map.put(u, new ArrayList<>(List.of(v)));
            if (map.containsKey(v)) {
                List<Integer> list = map.get(v);
                list.add(u);
                map.put(v, list);
            } else map.put(v, new ArrayList<>(List.of(u)));
        }

        Queue<Integer> q = new LinkedList<>();
        q.add(r);
        Map<Integer, Integer> counts = new HashMap<>();
        int count = 0;

        while (!q.isEmpty()) {
            int current = q.poll();
            if (visited[current]) continue;
            if (map.containsKey(current)) {
                List<Integer> list = map.get(current);
                Collections.sort(list);
                q.addAll(list);
            }
            visited[current] = true;
            count++;
            if (!counts.containsKey(current)) {
                counts.put(current, count);
            }
           
        }
        for (int i = 1; i <= n; i++) {
            if (counts.get(i) == null) {
                System.out.println(0);
                continue;
            }
            System.out.println(counts.get(i));
        }

    }
}