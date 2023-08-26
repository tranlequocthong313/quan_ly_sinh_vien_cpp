#include <string>

using namespace std;

class Formatter
{
private:
    static bool isValidDate(int day, int month, int year);

public:
    static string formatDate(int day, int month, int year);
};
