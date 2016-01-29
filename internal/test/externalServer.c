#include "czmq.h"

void startExternalServer()
{
    zsock_t *server = zsock_new (ZMQ_SERVER);
    assert (server);
    zsock_bind (server, "tcp://127.0.0.1:31337");
    char *msg = zstr_recv (server);
    printf ("msg: %s", msg);
    zsock_destroy (&server);
}