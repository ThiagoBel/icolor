#include <iostream>
#include "icolor.hpp"
using namespace std;
using namespace icolor;

int main()
{
    cout << icolor::error() << "Error" << icolor::finished() << endl;
    cout << icolor::sucess() << "Sucess" << icolor::finished() << endl;
    cout << icolor::warn() << "Warn" << icolor::finished() << endl;
    cout << icolor::info() << "Info" << icolor::finished() << endl;
    cout << icolor::fatal() << "Fatal error" << icolor::finished() << endl;
    icolor::Sayln{} << icolor::sucess() << "asdln" << icolor::finished();
    icolor::Sayln{} << icolor::sucess() << "asdln" << icolor::finished();
    icolor::Sayln{} << icolor::sucess() << "asdln" << icolor::finished();
    icolor::Say{} << icolor::error() << "asd" << icolor::finished();
    icolor::Say{} << icolor::error() << "asd" << icolor::finished();
    icolor::Say{} << icolor::error() << "asd" << icolor::finished();
}