#include <boost/python.hpp>
#include "CommandInterface.h"

using namespace boost::python;

BOOST_PYTHON_MODULE(cmdItf) {
    def("init", cmdInit);
    def("setSpeed", setSpeed);
    def("setKick", setKick);
    def("sendCommands", sendCommands);
}
