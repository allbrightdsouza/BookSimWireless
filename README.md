


# BookSimWireless
BookSim 2 modified to provide wireless support.


Presentation link for the project
https://drive.google.com/open?id=1XgY83m7TcSxcGHZ_wDXPDZ687dowWndr

## Simulate by modifying parameters in the src\examples\winoc
m : No. of Wireless Hubs in the Mesh. m = 0 uses basic mesh networking.
mcast_switch = 1; Uses Multicasting algorithm MDND. 
mcast_percent = 10; Refers to the concentration of Multicast Packets created given the total no. of packets created. 
Based on the injection rate.
num_mcast_dests = 8; Each multicast Packet can have upto 8 random destinations.
