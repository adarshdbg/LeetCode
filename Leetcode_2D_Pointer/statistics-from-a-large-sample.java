class Solution {
    public double[] sampleStats(int[] count) {
        double min = -1, max = 256;
        double sum = 0;
        int l = 0, lcnt = 0, r = count.length - 1, rcnt = 0;
        double mode = -1, modeCnt = 0;
        
        while (l <= r) {
            if (lcnt <= rcnt) {
                if (count[l] > modeCnt) {
                    mode = l;
                    modeCnt = count[l];
                }
                sum += count[l] * l;
                if (min == -1 && count[l] > 0) {
                    min = l;
                }
                lcnt += count[l];
                l++;
            } else {
                if (count[r] > modeCnt) {
                    mode = r;
                    modeCnt = count[r];
                }
                sum += count[r] * r;
                if (max == 256 && count[r] > 0) {
                    max = r;
                }
                rcnt += count[r];
                r--;
            }
        }
        double mean = sum / (lcnt + rcnt);
        double median = lcnt == rcnt ? (l + r) / 2.0 : lcnt > rcnt ? l - 1 : r + 1;
        return new double[] {min, max, mean, median, mode};
    }
}