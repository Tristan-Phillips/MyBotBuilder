#ifndef HANDLERIO_H
#define HANDLERIO_H

class HandlerIO
{
    /*
    * This class is the base
    * class for all input/output
    * handlers.
    * It is an abstract class,
    * so it cannot be instantiated.
    * It is meant to be inherited
    * by other classes.
    */

public:
    virtual void read() = 0;
    virtual void write() = 0;
    virtual void open() = 0;
    virtual void close() = 0;
};

#endif // HANDLERIO_H
