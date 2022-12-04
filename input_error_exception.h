#ifndef __INPUT_ERROR_EXCEPTION_H
#define __INPUT_ERROR_EXCEPTION_H

#include <string>

class InputErrorException{
private:
    /* data */
public:
    InputErrorException(/* args */);
    ~InputErrorException();
    std::string report();
};

#endif