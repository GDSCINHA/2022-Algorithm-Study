#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    
    for(int i = 0; i < commands.size(); i++)
    {
        vector<int> tmp;
        int start = commands[i][0] - 1;
        int end = commands[i][1];
        
        for(int i = start; i < end; i++)
            tmp.push_back(array[i]);
        sort(tmp.begin(), tmp.end());
        answer.push_back(tmp[commands[i][2] - 1]);
    }
    return answer;
}