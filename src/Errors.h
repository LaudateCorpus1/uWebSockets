#ifndef ERRORS_H
#define ERRORS_H

namespace uWS {

enum Error {
    ERR_NONE = 0,
    ERR_LISTEN,
    ERR_SSL,
    ERR_ZLIB
};

}

#endif // ERRORS_H

