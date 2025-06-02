//Multiple
#include <iostream>
using namespace std;
// Base class 1
class Cricketer {
public:
    void cric() {
        cout << "This player is cricketer." << endl;
    }
};
// Base class 2
class Batsmen {
public:
    void bat() {
        cout << "This player is a batter." << endl;
    }
};
// Base class 3
class Wicketkepper {
public:
    void wk() {
        cout << "This player is a wicketkepper." << endl;
    }
};
// Base class 4
class Bowler {
public:
    void ball() {
        cout << "This player is a Bowler." << endl;
    }
};
class Player : public Cricketer, public Batsmen, public Wicketkepper, public Bowler {
public:
    void display() {
        cout << "This player is an AllRounder(GOAT)." << endl;
    }
};
int main() {
    Player p;
    p.cric();
    p.bat();    
    p.wk();
    p.ball();
    p.display();    
    return 0;
}
