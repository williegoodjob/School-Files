#include <cstdlib>
#include <iostream>

using namespace std;
// �w�q IBM �R�W�Ŷ�
namespace IBM	{
	class Notebook {

	};
}

// �w�q Compaq �R�W�Ŷ�
namespace Acer	{
	class Notebook  {

  };
}

int main(int argc, char** argv) {
	IBM::Notebook A;
	Acer::Notebook B;
    system("PAUSE");
    return 0;
}
