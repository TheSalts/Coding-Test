import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.*;

public class Main {
    public static void main(String[] args) throws IOException {
        int count = 0;
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine(), " ");
        int n = Integer.parseInt(st.nextToken());
        int m = Integer.parseInt(st.nextToken());
        boolean[] visited = new boolean[101];
        Map<Integer, Integer> moveMap = new HashMap<>();
        for (int i = 0; i < n + m; i++) {
            st = new StringTokenizer(br.readLine(), " ");
            int start = Integer.parseInt(st.nextToken());
            int end = Integer.parseInt(st.nextToken());
            moveMap.put(start, end);
        }
        Queue<Integer> q = new LinkedList<>();
        q.add(1);
        List<Integer> list = new ArrayList<>();
        game:
        while (!q.isEmpty()) {
            int current = q.poll();
            if (moveMap.containsKey(current)) current = moveMap.get(current);
            for (int i = 1; i < 7; i++) {
                if (!visited[current+i] && current + i < 100) {
                    list.add(current + i);
                    visited[current+i] = true;
                } else if (current + i == 100) break game;
            }
            if (q.isEmpty()) {
                q.addAll(list);
                list.clear();
                count++;
            }
        }
        System.out.println(++count);
    }
}