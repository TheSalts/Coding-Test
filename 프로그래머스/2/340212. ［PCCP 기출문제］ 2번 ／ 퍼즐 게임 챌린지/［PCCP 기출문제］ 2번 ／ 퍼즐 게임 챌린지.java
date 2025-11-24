class Solution {
    public int solution(int[] diffs, int[] times, long limit) {
        int low = 1;
        int high = 100001;
        int answer = high;
        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (isSolvable(mid, diffs, times, limit)) {
                answer = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return answer;
    }

    private boolean isSolvable(int level, int[] diffs, int[] times, long limit) {
        long totalTime = 0;
        totalTime += times[0];
        for (int i = 1; i < diffs.length; i++) {
            long diff = diffs[i];
            long time_cur = times[i];
            long time_prev = times[i - 1];
            if (diff <= level) {
                totalTime += time_cur;
            } else {
                long failures = diff - level;
                long timePerFailure = time_cur + time_prev;
                long failureTime = failures * timePerFailure;

                totalTime += failureTime + time_cur;
            }
            if (totalTime > limit) {
                return false;
            }
        }
        return totalTime <= limit;
    }
}