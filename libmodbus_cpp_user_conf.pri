LIBMODBUS_CPP_TARGET = modbus_cpp
LIBMODBUS_CPP_DESTDIR = $${PWD}/bin
LIBMODBUS_CPP_CONFIG = libmodbus_cpp_tests
LIBMODBUS_DIR_RELATIVE = ../libmodbus/include
LIBMODBUS_LIB = -L$${LIBMODBUS_CPP_DESTDIR} -lmodbus