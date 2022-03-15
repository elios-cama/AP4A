#include <iostream>
#include "hellow.h"
#include "hellowa.h"
#include "hellowb.h"
using namespace std;

int main()
{

    HelloW Instance;
    HellowA InstanceA;
    HellowB InstanceB;
    Instance.displayMessage();
    InstanceA.displayMessage();
    InstanceB.displayMessage();

    return 0;
}
