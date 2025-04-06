---
tags:
  - Networking
---

In this chapter we will be talking about the underlying technologies networks.
# Wired LANs

### IEEE Standard
IEEE provides a standard for LAN. It provides some key elements corresponding to the [[Ch2-Fourouzan#Physical layer]] and the [[Ch2-Fourouzan#Data Link Layer]].

![[Pasted image 20250406105111.png]]

The LLC provides an interface between the network layer and the lower layers. Makes the network layer play nicely with the MAC sublayer. 

We will be mostly focusing on ethernet

### Ethernet
####  Frame
Each frame that is being sent out has several parts. One part is the preamble and SFD that is added in the physical layer:
- The preamble makes sure that both sides are synchronized. By sending a sequence of ones and zeros
- The SFD tells the receiver that the frame is about to start
Afterwards, we have the frame that contains the source and destination address, the length and type of the frame, the data and means of checking errors. 
![[Pasted image 20250406145112.png]]
The frames have a specific size:
![[Pasted image 20250406145718.png]]
#### Addresses
The MAC address is 6 bytes and is represented using 12 hexadecimals. If the first bit of the first byte is 1, the address is multicast and if it is 0 it is unicast.

The MAC address is sent byte by byte and each byte is sent starting from its LSB. 

#### Evolution 
Overtime, the Ethernet improved and got more features. Starting from 10mbps and going up to 10 gigabit over four evolutions. 

Standard -> Fast -> Gigabit -> Ten Gigabit

#### CSMA/CD
In old ethernet connections, there was a chance that two devices would transmit data at the same time, causing data to become unusable. This is because of the fact that data takes time to reach other devices and devices might start sending data while data is on its way. 
![[Pasted image 20250406182425.png]]

In order to solve this, the CSMA/CD mechanism came into play where the device checks if the channel is free before sending data and if it detects a collision while transmitting, it retries sending data after a while. It retries this until it makes it or reaches a certain limit. 
![[Pasted image 20250406182447.png]]
##### Full duplex  saving collision
We don’t need to worry about collision in full duplex scenarios because it allows for the sender and receiver to easily transmit and receive data at the same time. 
# Wireless LANs
Wireless networks are widely used in day to day lives like WiFis.

## Glossary
- **BSS**: A group of computers in a network. The basic service set. 
- **AP**: A device that provides network access to a bunch of devices. 
- **ESS**: A bigger group of network that 