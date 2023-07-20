#include <iostream>

using namespace std;
class knight
{
public:
    void displayknight(pair<int, int> knp)
    {
        int move[8][2] = {{1, 2}, {1, -2}, {-1, 2}, {-1, -2}, {2, 1}, {2, -1}, {-2, 1}, {-2, -1}};
        int x = knp.first, y = knp.second;
        for (int i = 0; i < 8; i++)
        {
            if (x + move[i][0] < 8 && x + move[i][0] >= 0 && y + move[i][1] < 8 && y + move[i][1] >= 0)
                cout << "{" << x + move[i][0] << " " << y + move[i][1] << "}";
        }
    }
};
class quene
{
public:
    void displayquene(pair<int, int> qnp)
    {
        int move[8][2] = {{1, -1}, {1, 0}, {1, 1}, {0, -1}, {0, 1}, {-1, -1}, {-1, 0}, {-1, 1}};
        int x = qnp.first, y = qnp.second;
        for (int i = 0; i < 8; i++)
        {
            int a = x, b = y;
            while (a + move[i][0] < 8 && a + move[i][0] >= 0 && b + move[i][1] < 8 && b + move[i][1] >= 0)
            {
                a = a + move[i][0], b = b + move[i][1];
                // if encounter enemy piece then break
                // bool enemypiece(a,b); if true break,else
                cout << "{" << a << " " << b << "}";
            }
        }
    }
};
class king
{
public:
    void displayking(pair<int, int> Knp)
    {
        int move[8][2] = {{1, -1}, {1, 0}, {1, 1}, {0, -1}, {0, 1}, {-1, -1}, {-1, 0}, {-1, 1}};
        int x = Knp.first, y = Knp.second;
        for (int i = 0; i < 8; i++)
        {
            if (x + move[i][0] < 8 && x + move[i][0] >= 0 && y + move[i][1] < 8 && y + move[i][1] >= 0)
                cout << "{" << x + move[i][0] << " " << y + move[i][1] << "}";
        }
    }
};
class bishop
{
public:
    void displaybishop(pair<int, int> bnp)
    {
        int move[4][2] = {{1, -1}, {1, 1}, {-1, 1}, {-1, -1}};
        int x = bnp.first, y = bnp.second;
        for (int i = 0; i < 4; i++)
        {
            int a = x, b = y;
            while (a + move[i][0] < 8 && a + move[i][0] >= 0 && b + move[i][1] < 8 && b + move[i][1] >= 0)
            {
                // if encounter enemy piece then break
                // bool enemypiece(a,b); if true break,else
                a += move[i][0], b += move[i][1];
                cout << "{" << a << " " << b << "}";
            }
        }
    }
};
class rock
{
public:
    void displayrock(pair<int, int> rnp)
    {
        int move[4][2] = {{1, 0}, {-1, 0}, {0, -1}, {0, 1}};
        int x = rnp.first, y = rnp.second;
        for (int i = 0; i < 4; i++)
        {
            int a = x, b = y;
            while (a + move[i][0] < 8 && a + move[i][0] >= 0 && b + move[i][1] < 8 && b + move[i][1] >= 0)
            {
                // if encounter enemy piece then break
                // bool enemypiece(a,b); if true break,else
                a += move[i][0], b += move[i][1];
                cout << "{" << a << " " << b << "}";
            }
        }
    }
};
int main()
{
    int board[8][8];
    knight kn;
    quene qn;
    pair<int, int> knp;
    knp.first = 7;
    knp.second = 1;
    // kn.displayknight(knp);
    pair<int, int> qnp;
    qnp.first = 0;
    qnp.second = 3;
    // qn.displayquene(qnp);
    king Kn;
    pair<int, int> Knp;
    Knp.first = 0;
    Knp.second = 4;
    // Kn.displayking(Knp);
    bishop bn;
    pair<int, int> bnp;
    bnp.first = 0;
    bnp.second = 4;
    // bn.displaybishop(bnp);
    rock rn;
    pair<int, int> rnp;
    rnp.first = 0;
    rnp.second = 4;
    // rn.displayrock(rnp);
    cout << "comment out to see available posistion with provided co-ordinates";
    return 0;
}