#ifndef SLAVE_TCP_H
#define SLAVE_TCP_H

#include <QTcpServer>
#include <QSet>
#include <QTcpSocket>
#include "abstract_slave.h"
#include "slave_tcp_backend.h"

namespace libmodbus_cpp {

class SlaveTcp : public AbstractSlave
{
public:
    SlaveTcp(SlaveTcpBackend *backend);
    ~SlaveTcp();

    bool startListen(int maxConnectionCount = 1);
    void stopListen();

protected:
    inline SlaveTcpBackend *getBackend() override {
        return static_cast<SlaveTcpBackend*>(AbstractSlave::getBackend());
    }
};

}

#endif // SLAVE_TCP_H
