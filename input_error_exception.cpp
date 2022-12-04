#include "input_error_exception.h"

InputErrorException::InputErrorException(/* args */) {
}

InputErrorException::~InputErrorException() {
}

std::string InputErrorException::report() {
    return "Input Error Occurred\n";
}
