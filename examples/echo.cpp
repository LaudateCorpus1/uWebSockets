/* this is an echo server that properly passes every supported Autobahn test */

#include <iostream>
#include <string>
using namespace std;

#include <uWS.h>
using namespace uWS;

int main()
{
    EventSystem es(MASTER);
    Error err;
    Server server(es, &err, 3000, PERMESSAGE_DEFLATE, 0);
    if (err != ERR_NONE) {
      goto fail;
    }

    server.onConnection([](WebSocket socket) {

    });

    server.onMessage([](WebSocket socket, char *message, size_t length, OpCode opCode) {
        socket.send(message, length, opCode);
    });

    server.onDisconnection([](WebSocket socket, int code, char *message, size_t length) {

    });

    es.run();
    return 0;

fail:
    cerr << "ERR_LISTEN" << endl;
    return 0;
}
