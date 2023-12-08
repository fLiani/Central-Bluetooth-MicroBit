#include "btstack_config.h"
#include "bluetooth.h"
#include "btstack_memory.h"
#include "btstack_run_loop.h"
#include "btstack_run_loop_embedded.h"
#include "btstack_debug.h"
#include "btstack_event.h"
#include "hci.h"
#include "hci_dump.h"
#include "hci_transport.h"
#include "hci_transport_h4.h"
#include "l2cap.h"

int main()
{
    btstack_memory_init();
}