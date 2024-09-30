import java.util.HashMap;
import java.util.Map;

public class OrderedArray2 {
    


    public static int getfreqmap(int[] arr) {
        if (arr == null || arr.length == 0) {
            System.out.println("Error: Array is empty or null");
           
        }

        Map<Integer, Integer> freqmap = new HashMap<>();

        
        for (int num : arr) {
            freqmap.put(num, freqmap.getOrDefault(num, 0) + 1);
        }

        int mostFrequentNumber = arr[0]; 
        int maxFrequency = freqmap.get(arr[0]); 

     
        for (Map.Entry<Integer, Integer> entry : freqmap.entrySet()) {
            int currentFrequency = entry.getValue();
            if (currentFrequency > maxFrequency) {
                mostFrequentNumber = entry.getKey();
                maxFrequency = currentFrequency;
            }
        }

        return mostFrequentNumber;
    }

    public static void main(String[] args) {
        int[] arr = {2, 5, 6, 2, 5, 2};
        int freqmap = getfreqmap(arr);
        System.out.println("Most frequent number: " + freqmap);
    }
}
