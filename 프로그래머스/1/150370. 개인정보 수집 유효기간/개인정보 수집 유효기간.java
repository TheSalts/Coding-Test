import java.util.ArrayList;
import java.util.HashMap;

class Solution {
    public int[] solution(String today, String[] terms, String[] privacies) {
        HashMap<String, Integer> term = new HashMap<>();
        for (String t : terms) {
            String[] termStr = t.split(" ");
            term.put(termStr[0], Integer.parseInt(termStr[1]) * 28);
        }
        ArrayList<Integer> ans = new ArrayList<>();
        int now = toDays(today);
        for (int i = 0; i < privacies.length; i++) {
            String p = privacies[i];
            String[] pSplit = p.split(" ");
            int day = toDays(pSplit[0]);
            String type = pSplit[1];
            if (now >= day + term.get(type)) {
                ans.add(i + 1);
            }
        }
        int[] answer = new int[ans.size()];
        for (int i = 0; i < ans.size(); i++) {
            answer[i] = ans.get(i);
        }
        return answer;
    }

    int toDays(String day) {
        String[] daySplit = day.split("\\.");
        int y = Integer.parseInt(daySplit[0]);
        int m = Integer.parseInt(daySplit[1]);
        int d = Integer.parseInt(daySplit[2]);
        return (y * 12 * 28) + (m * 28) + d;
    }
}