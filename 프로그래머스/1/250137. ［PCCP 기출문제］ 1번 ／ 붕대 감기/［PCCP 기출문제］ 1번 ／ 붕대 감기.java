class Solution {
    public int solution(int[] bandage, int health, int[][] attacks) {
        int hp = health;
        int t = bandage[0], x = bandage[1], y = bandage[2];
        int doing = 0;
        int atkIndex = 0;
        for (int i = 0; i <= attacks[attacks.length - 1][0]; i++) {
            if (i == attacks[atkIndex][0]) {
                hp -= attacks[atkIndex][1];
                atkIndex++;
                doing = 0;
            } else {
                if (doing <= t) {
                    hp += x;
                    doing++;
                }
                if (doing == t) {
                    hp += y;
                    doing = 0;
                }
            }
            if (hp > health) hp = health;
            if (hp <= 0) return -1;
        }
        return hp;
    }
}
