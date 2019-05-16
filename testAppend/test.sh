#!/bin/bash

# Display WWPNs on a Linux server.
<<<<<<< HEAD
# Add my commands
=======
>>>>>>> 7105b45a8e96a473acc38de38a30051e7dea8005

[ -d "/sys/class/fc_host" ] && cat /sys/class/fc_host/*/port_name | sed 's/^0x//; s/\(.\{2\}\)/&:/g; s/:$//'

