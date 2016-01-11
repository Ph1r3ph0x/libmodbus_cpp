#ifndef MASTERTCPBACKEND_H
#define MASTERTCPBACKEND_H

#include <QTcpSocket>
#include "backend.h"

namespace libmodbus_cpp {

class MasterTcpBackend : public AbstractBackend
{
    Q_OBJECT

public:
    MasterTcpBackend(const char *address, int port = MODBUS_TCP_DEFAULT_PORT);
    ~MasterTcpBackend();

    bool connect();
    void disconnect();
};

}

#endif // MASTERTCPBACKEND_H
