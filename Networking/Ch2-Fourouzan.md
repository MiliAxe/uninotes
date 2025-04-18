---
id: Ch2-Fourouzan
aliases:
  - Ch2-Fourouzan
tags:
  - Networking
---
In this chapter, we generally talk about the OSI model and the layers and their responsibilities.

## Why layers?
Layers enable us to separate each responsibility to its own layer. Each layer does its own job and a specific task. This makes our job flexible and easy to do.

# OSI Model
![[Pasted image 20250405222422.png]]
This is the overall structure of the OSI model. We have 7 layers.

Extra data is added to the data at layers *6, 5, 4, 3, 2* (Basically every mid layer) and the last layer adds a trailer too (at the end).
![[Pasted image 20250405222546.png]]

Now, it's a good idea to talk about what each layer does, this is super important and we are going to have a question about this.

## Physical layer
This layer, which is the last layer, is responsible for moving the bits over the physical medium we have. It makes the data we have from 0 and 1s to signals. basically digital to signal. It does not care about the data:

### Tasks
- Physical medium type: WiFi, Fiber, Ethernet etc.
- Transforming digital data to signal
- Data rate: How fast the data is being sent (bandwidth)
- Synchronization: Make sure the sender and receiver are synced, they now when a bit starts and when it ends.
- Line configuration (multi-point or point-to-point): is the user connected directly to one person or more?
- [[Ch1-Fourouzan#Topology|Physical Topology]]: How is the network laid out?
- [[Ch1-Fourouzan#Data flow|Transmission Mode]]: Are we in simplex, half-duplex...?
## Data Link Layer
This layer is responsible for making sure that the data moves across close neighborhoods, namely your local area network or a single physical link. The packet tends to go over many steps and locations before it gets received at the end receiver. This is called **node-to-nod or hop-to-hop** delivery.
### Tasks
- Framing: breaking packets into manageable chunks called *frames* which includes the MAC address and some error detection chunks for fine delivery of data.
- Physical addressing: this layer is mainly concerned with the MAC address. uses it for node-to-node delivery.
- Flow control: it manages the data being sent to the connected node. Making sure that they are exchanging data at an appropriate speed. 
- Error control and correction: by using error detection and correcting them with certain methods, message is ensured to be exchanged correctly in the physical link.
- Access control: since the physical medium is going to be used by multiple devices, this layer determines which device gets to use the medium at any given moment. handling conflicts between devices.
## Network Layer
This layer is responsible for making sure that the packet reaches its actual receiver. It makes sure that the packet reaches its intended receiver on *another network. (If wanted)*. 

### Tasks
- Logical addressing: by using IP addresses, this layer identifies devices on different networks
- Routing: makes sure that the packet successfully *moves* towards the intended target and makes sure it moves in the best route possible.
- Fragmentation: breaking down the packets to make sure the underlying networks can handle it. 
## Transport Layer
This layer is responsible for **end-to-end delivery** meaning that it makes sure that the message gets to the correct application in the target. And aside from that, it makes sure that the message arrives absolutely correctly and without errors.
### Tasks
- Segmentation (and reassembly): breaking the application data (which can often be huge). To smaller chunks for the network to handle. 
- Ordering packets: makes sure that the messages that were broken into segments get reordered properly. 
- Service point addressing: with the use of application ports, this layer makes sure the messages arrive to the correct application. 
- Connection control: handling setups and needed steps for connection-oriented (TCP) or connectionless (UDP) connections. 
- Flow control: this makes sure that end-to-end services can handle the data flow being sent (this is more of a concern in TCP. UDP doesn’t care). 
- Error control: making sure that the device reached its end-to-end destination correctly without corruption
## Session Layer
This layer is responsible for handling the communication sessions happening between applications. 
### Tasks
- Session management: creates, maintains and manages sessions. 
- Synchronization: uses so-called checkpoints so if the transfer drops, it can resume from these checkpoints. Useful for big file transfers. 
## Presentation Layer
This layer ensures that the format of the message is being sent is exactly what application wants it to be like to be able to understand it. 
### Tasks
- Translation: makes sure that the data is correctly formatted and the semantics for it is correct
- Compression: the data is compressed so that bandwidth is saved if necessary 
- Encryption/Decryption: does security measures if needed to make sure data cannot be read across the network. Like SSL/TLS. 
## Application layer
This layer is basically the interface of the user with the network. It provides means to user interfaces to interact with the internet. Handles protocol related functionality. For example the protocol might be SMTP, DNS, HTTP and so on. 
# TCP/IP Model
This model is simply said, the simplified version of the [[#OSI Model]]. 

It simplifies the top three layers into a single application layer. ([[#Application layer]], [[#Presentation Layer]], [[#Session Layer]])

The transport layer is the same as [[#Transport Layer]]

Internet layer is the same as the [[#Network Layer]]

The network interface layer corresponds to the bottom two layers. ([[#Physical layer]] and [[#Data Link Layer]]). 