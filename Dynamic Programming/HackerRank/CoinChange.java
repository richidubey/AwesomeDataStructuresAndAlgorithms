import java.util.HashMap;

public class CoinChange {

    public static long numWays(int n, long [] coins) {
        if (n < 0) {
            return 0;
        }
        return getWays(n, coins, 0, new HashMap<String, Long>());
    }

    public static long getWays(int n, long[] arr, int number, HashMap<String, Long> mem) {

        String key = n + "," + number;
        if (mem.containsKey(key)) {
            return mem.get(key);
        }

        if (number == arr.length - 1) {
            if (n % arr[number] == 0) {
                mem.put(key, 1L);
                return 1;
            } else {
                mem.put(key, 0L);
                return 0;
            }
        }

        long ways = 0;
        for (int i = 0; i <= n; i += arr[number]) {
            ways += getWays(n - i, arr, number + 1, mem);
        }

        mem.put(key, ways);
        return ways;
    }
}
