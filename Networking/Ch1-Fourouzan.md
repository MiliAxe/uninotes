---
id: Ch1-Fourouzan
aliases: []
tags: []
---
## Definitions

**Telecommunication**: sending information over distance.
**Data**: information sent back and forth in form agreed by both parties.
**Data communication**: data exchanged through a medium

---

## Message properties

- **Delivery**: Message should reach receiver
- **Accuracy**: The exact message should be received
- **Timeliness**: message should arrive on time
- **Jitter**: the time at which the packets arrive should not vary a lot

---

## Data flow

The data can move in the medium in the following ways:

1. **Simplex**: data can only move in one direction only, i.e. from host to client
2. **Half-duplex:** data can only move in one direction _at a time_. Meaning that only one user can send data at a time.
3. **Full-duplex**: both machines can send data at any time.

---

## Network

A series of network-capable devices connected to each other via a link.

### Criteria

There are several ways to measure the quality of a network:

1. **Performance**: How _fast_ the network is. Usually Measured by elements like delay and throughput.
2. **Reliability**: how often the network _fails_. Usually Measured by availability and robustness (robustness refers to being able to function under extreme circumstances)
3. **Security**: keeping the data correct and not tampered. Don’t let third party actors corrupt data.

### Structure

Describes how the network is structured.

#### Connection

- **Point to point**: there is only one link between machines in the network
- **Multi-point:** many devices connect to a single machine through a single link.

#### Topology

How devices are connected to each other.

- **Mesh**: devices connected to each other in a graph manner. Can be partial or fully connected.
  ![[2025-04-03-19-06-07.png]]
- **Star**: Multiple devices connected to a center machine (i.e. a hub)
	![[Pasted image 20250403191056.png]]
- **Bus**: A link that is used by multiple devices.
	![[Pasted image 20250403192154.png]]
- **Ring**: A circular link that is used by devices around the ring.
	![[Pasted image 20250403192235.png]]

We can also mix the topologies. 

![[Pasted image 20250403192315.png]]
Here we have bus topologies that each bus is connected to a star topology.

### Categories

We have different types of networks based on their *scale*:

#### LAN

This network is for relatives small networks like a building network or even a home network.

#### WAN

Networks for more distances like a big area. This can either be:
- **Switched WAN**: A bunch of switches that are interconnected and clients connect to these:
	![[Pasted image 20250403192914.png]]
- **Point-to-point WAN**: Clients directly connect to the isp with a straight link:
	![[Pasted image 20250403192955.png]]


## Internet

Now, when we mix networks with networks. We get what we know as *internet*. It is basically a bunch of interwoven networks.

ISPs provide internet to users, and they have different scales. Including Regional and national ISPs. 

![[Pasted image 20250403194319.png]]

## Protocols

The messages that are exchanges need to follow certain rules to make sure that both sides understand each other. 

### Elements

- **Syntax**: how the data is structured. How should I read the fields?
- **Semantics**: what the bits that are received mean. what fields defines what action
- **Timing**: At what speed and time should the data be sent?

