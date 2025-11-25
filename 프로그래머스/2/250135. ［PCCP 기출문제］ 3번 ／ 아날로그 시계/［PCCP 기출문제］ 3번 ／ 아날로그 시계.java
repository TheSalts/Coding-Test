class Solution {
    final int HOUR12 = 60 * 60 * 12; // 43200
    final int HOUR1 = 60 * 60; // 3600
    final int MIN = 60;

    public int solution(int h1, int m1, int s1, int h2, int m2, int s2) {
        int startTime = h1 * HOUR1 + m1 * MIN + s1;
        int endTime = h2 * HOUR1 + m2 * MIN + s2;
        int count = 0;

        if (startTime % HOUR1 == 0) count++;
        for (int i = startTime; i < endTime; i++) {
            double[] current = getDegree(i);
            double[] next = getDegree(i + 1);
            boolean mHit = false, hHit = false;
            // 현재 초침 < 현재 시침 && 다음 초침 >= 다음 시침
            if (current[2] < current[0] && next[2] >= next[0]) {
                hHit = true;
            }
            if (current[2] < current[0] && next[2] == 0.0) {
                hHit = true;
            }
            if (current[2] < current[1] && next[2] >= next[1]) {
                mHit = true;
            }
            if (current[2] < current[1] && next[2] == 0.0) {
                mHit = true;
            }

            if (hHit) count++;
            if (mHit) count++;
            if (mHit && hHit && Double.compare(next[0], next[1]) == 0) count--;
        }
        return count;
    }

    double[] getDegree(int sec) {
        double degHour = (sec % HOUR12) * (360.0 / HOUR12);
        double degMin = (sec % HOUR1) * (360.0 / HOUR1);
        double degSec = (sec % 60) * (360.0 / MIN);
        return new double[]{degHour, degMin, degSec};
    }
}