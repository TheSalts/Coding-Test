class Solution {
    boolean[] visited;
    int answer = 0;

    public int solution(int n, int[][] computers) {
        visited = new boolean[n];
        for (int i = 0; i < n; i++) {
            if (!visited[i]) {
                answer++;
                dfs(computers, i);
            }
        }
        return answer;
    }

    void dfs(int[][] arr, int current) {
        visited[current] = true;
        for (int i = 0; i < arr.length; i++) {
            if (arr[current][i] == 1 && !visited[i]) dfs(arr, i);
        }
    }
}
