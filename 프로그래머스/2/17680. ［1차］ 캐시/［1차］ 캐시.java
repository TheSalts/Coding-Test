import java.util.LinkedList;
import java.util.Queue;

public class Solution {
    public int solution(int cacheSize, String[] cities) {
        if (cacheSize == 0) return cities.length * 5;
        int hit = 0, miss = 0;
        Queue<String> cache = new LinkedList<>();
        for (String c : cities) {
            String city = c.toLowerCase();
            if (cache.contains(city)) {
                cache.remove(city);
                hit++;
                cache.add(city);
            } else if (cache.size() < cacheSize) {
                cache.add(city);
                miss++;
            } else {
                miss++;
                cache.remove();
                cache.add(city);
            }
        }
        return hit + (miss * 5);
    }
}