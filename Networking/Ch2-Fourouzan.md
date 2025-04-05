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
