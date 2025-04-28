## Appendix
### Decibel
$$
N_{db}= 10\log_{10}\frac{P_2}{P_1}
$$
### dBW
Put P1 = 1 Watt
### dBm
Put P1 = 1 mWatt
### conversion between two
Dbw is bigger. If you want to concert to dbm add 30 and vice versa 
### Thermal noise
$$
N=-228.6+10\log T + 10\log B
$$
### SNR 
Ratio of power of signal to the noise
If we want the db version, we just take the 10 log of it
### Bandwidth efficiency 
How well we are using the bandwidth
$$
BE=\frac{C}{B}
$$
### Nyquist
Maximum theoretical channel data rate in a noiseless transmission medium
$$
C=2B\log_2M
$$
### Shannon
Now, with a medium that has noise 
$$
C=B\log_2(1+\text{SNR})
$$
### $\frac{E_b}{N_0}$
Two formulas generally:
#### Normal
$$
\frac{S}{kTR}
$$
Or
$$
\text{SNR}(\frac{B}{R})
$$
#### dBW version
Just take the 10log of it. 

#### Shannon status
$$
\frac{1}{BE}(2^{BE}-1)
$$
