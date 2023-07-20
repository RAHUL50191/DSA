
bool findtarget(vector<vector<char>> &mat, string target, int i, int j)
{
    int n = target.length();
    if (target == "")
        return true;
    // if(mat[i][j]!=target[0]){ cout<<"e"<<i<<j<<"\n";return false;}

    int move[4][2] = {{1, 0}, {-1, 0}, {0, 1}, {-1, 0}};
    bool f = false;
    for (int k = 0; k < 4; k++)
    {

        int a = i + move[k][0];
        int b = j + move[k][1];
        if (a >= 0 && b >= 0 && a < mat.size() && b < mat[0].size() && mat[a][b] == target[0])
        {
            f = findtarget(mat, target.substr(1), a, b);
            cout << a << b << "\n";
        }
    }
    return f;
}
int findOccurrence(vector<vector<char>> &mat, string target)
{
    int r = mat.size();
    int c = mat[0].size();
    int ans = 0;
    int n = target.length();
    // cout<<target.substr(1)<<"\n";
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {

            if (mat[i][j] == target[0] && findtarget(mat, target, i, j))
                ans++;
        }
    }
    cout << mat[0][0];
    return ans;