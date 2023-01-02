class Solution {
    public String getHint(String secret, String guess) {
        int a[] = new int[10];
        int b[] = new int[10];
        int bulls = 0, cows = 0;
        for (int i = 0; i < secret.length(); i++) {
            if (secret.charAt(i) == guess.charAt(i))
                bulls++;
            else {
                a[secret.charAt(i) - '0']++;
                b[guess.charAt(i) - '0']++;
            }
        }
        for (int i = 0; i < 10; i++) {
            cows += Math.min(a[i], b[i]);
        }
        return Integer.toString(bulls) + 'A' + Integer.toString(cows) +'B';
    }
}

//Rum Time= 5ms
//Memory =42.8 MB
