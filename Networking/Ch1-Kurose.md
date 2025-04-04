---
tags:
  - Networking
---
## [[Ch1-Fourouzan#Internet|Internet]] [[Ch1-Fourouzan#Structure|Structure]]
Internet is made of different types of devices
### Network edge
These devices are the end-users where they might be receiving data or sending data. This can be either hosts or servers.
### Access networks
These devices enable network edges to connect to the internet. they are the gate to the outer world.

These can be either cellular networks, personal/public networks and WiFi. The data centers use high-bandwidth networks to provide service to their clients. There are several technologies that enable users to connect to the internet:

#### Digital subscriber line (DSL)
This technology provides [[Ch1-Fourouzan#WAN|WAN access]] to users via telephone lines. A device called DSLAM at the ISP office splits telephone and internet data to its corresponding paths.
![[Pasted image 20250404135343.png]]

### Network Core
These are basically the backbones of the internet. They are usually interconnected routers that route the packets that the devices from the network edge send out.
## Sending packets
Packets can be sent in ways:
### Packet switching
In this approach, data is split into *packets* and the packets are sent to the wild. The packets go through different routers and through different routes. The packets reach the destination and the destination reassembles them to understand what was going on.
#### Store and forward
In packet switching, the router that receives the packet completely stores it, does error checking on it and then decides where to pass it. This means that the data should be completely stored and cannot be passed on before passing it on to the next router.
#### Queuing
Since routers need to [[#Store and forward]], They have a limited queue in which they can store the packets and process them one by one. If this queue is full, the router is forced to drop it. causing packet loss.
### Circuit switching
Another approach that we might consider is circuit switching. In this approach, links get completely dedicated to a pair of clients so that they can communicate without any issues. This ensures that the data being sent is received reliably. In this approach 