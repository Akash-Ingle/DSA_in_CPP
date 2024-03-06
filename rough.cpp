#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);



/*
 * Complete the 'getMinimumChanges' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER_ARRAY fileSize
 *  2. INTEGER_ARRAY minSize
 */
#include <vector>
#include <algorithm>
int getMinimumChanges(vector<int> fileSize, vector<int> minSize) {

    int n = fileSize.size();
    int maxi = -10;
    int changes = 0, pos_sum =0, neg_sum = 0;
    vector<int> maxv;

    for(int i=0; i<n; i++) {
        int sub = fileSize[i] - minSize[i];
        if(sub>0) {
            maxi = max(maxi, sub);
            pos_sum += sub;
            maxv.push_back(sub);
        }
        else if(sub<0) {
            changes++;
            neg_sum += sub;
        }
        
    }
    if(pos_sum < abs(neg_sum)) return -1;
    if(neg_sum==0) return changes;
    int cnegsum = neg_sum;
    sort(maxv.rbegin(), maxv.rend());
    
    for(int i=0; i<maxv.size(); i++) {
        cnegsum = cnegsum + maxv[i];
        if(cnegsum<0) changes++;
        else if(cnegsum >= 0){
            changes++;
            break;
        }
    }
    return changes;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string fileSize_count_temp;
    getline(cin, fileSize_count_temp);

    int fileSize_count = stoi(ltrim(rtrim(fileSize_count_temp)));

    vector<int> fileSize(fileSize_count);

    for (int i = 0; i < fileSize_count; i++) {
        string fileSize_item_temp;
        getline(cin, fileSize_item_temp);

        int fileSize_item = stoi(ltrim(rtrim(fileSize_item_temp)));

        fileSize[i] = fileSize_item;
    }

    string minSize_count_temp;
    getline(cin, minSize_count_temp);

    int minSize_count = stoi(ltrim(rtrim(minSize_count_temp)));

    vector<int> minSize(minSize_count);

    for (int i = 0; i < minSize_count; i++) {
        string minSize_item_temp;
        getline(cin, minSize_item_temp);

        int minSize_item = stoi(ltrim(rtrim(minSize_item_temp)));

        minSize[i] = minSize_item;
    }

    int result = getMinimumChanges(fileSize, minSize);

    fout << result << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
