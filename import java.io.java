import java.io.*;
import java.util.*;

// Read only region start
class UserMainCode {
    public int schoolFundraiser(int[] input1, int input2) {
        // Use a HashMap to count occurrences of each coin value
        Map<Integer, Integer> coinCount = new HashMap<>();
        
        // Count each coin value
        for (int coins : input1) {
            coinCount.put(coins, coinCount.getOrDefault(coins, 0) + 1);
        }
        
        // Calculate the sum of unique coin values (appear only once)
        int sum = 0;
        for (Map.Entry<Integer, Integer> entry : coinCount.entrySet()) {
            if (entry.getValue() == 1) {
                sum += entry.getKey();
            }
        }
        
        return sum;
    }
}
// Read only region end