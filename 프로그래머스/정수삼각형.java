import java.util.*;
class Solution {
    int[][] d = new int[501][501];
    public int solution(int[][] triangle) {
        int len = triangle.length;
        int answer = 0 ;
        d[0][0] = triangle[0][0];
        for(int i = 1 ;i < len;i++){
            int subLen = triangle[i].length;
            for(int j=0;j<subLen;j++){
                if(j==0){
                    d[i][j]= d[i-1][0] + triangle[i][j];
                }
                else if(i==j){
                    d[i][j]= d[i-1][j-1] + triangle[i][j];
                }
                else{
                    d[i][j] = Math.max(d[i-1][j],d[i-1][j-1]) + triangle[i][j];
                }
                answer = Math.max(answer, d[i][j]);
            }
        }
        
        return answer;
    }
}