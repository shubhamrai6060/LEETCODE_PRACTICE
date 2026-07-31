class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0  || (x % 10 == 0 && x != 0)){
            return false;
        }

        int half = 0;
        while(x > half){
            int digit = x % 10;
            half = (half * 10) + digit;
            x = x / 10;
        }

        return (x == half || x == half / 10);
    }
};





// class Solution {
// public:
//     bool isPalindrome(int x) {
//         int actual = x;

//         int answer = 0;
        
//         while (actual > 0) {
//             int digit = actual % 10;
//             answer = (answer * 10) + digit;
//             actual = actual / 10;
//         }
//         return (answer == x);
//     }
// };