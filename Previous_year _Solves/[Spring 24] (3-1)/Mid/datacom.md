

### Question 1.a
**Problem:** A network with a bandwidth of 1 Mbps. A message of size 1000 bytes has to be sent. Each packet contains a header of 100 bytes. Calculate the number of packets so that the total time taken is minimum.

**Solution:**
- **1 packet:** The total size of the packet = 1000 bytes + 100 bytes (header) = 1100 bytes.
- **10 packets:** Each packet will be of size (1000 bytes / 10) + 100 bytes (header) = 100 bytes (message) + 100 bytes (header) = 200 bytes. Total data to send = 10 packets * 200 bytes = 2000 bytes.
- **20 packets:** Each packet will be of size (1000 bytes / 20) + 100 bytes (header) = 50 bytes (message) + 100 bytes (header) = 150 bytes. Total data to send = 20 packets * 150 bytes = 3000 bytes.

**Calculation:**
- **1 packet:** Transmission time = (1100 * 8) bits / (1 Mbps) = 8800 bits / 1,000,000 bits per second = 0.0088 seconds.
- **10 packets:** Transmission time = (2000 * 8) bits / (1 Mbps) = 16000 bits / 1,000,000 bits per second = 0.016 seconds.
- **20 packets:** Transmission time = (3000 * 8) bits / (1 Mbps) = 24000 bits / 1,000,000 bits per second = 0.024 seconds.

**Conclusion:** The minimum time is achieved with **1 packet**, which takes 0.0088 seconds.

### Question 1.b
**Problem:** What network topologies should be considered for optimizing the connectivity and performance of the CSE department at the UAP campus? How can the best solution be identified?

**Solution:**
- **Star Topology:** Each device is connected to a central hub. It is easy to manage and expand, and failure of one device doesn’t affect others.
- **Mesh Topology:** Every device is connected to every other device. It provides high redundancy and reliability but is complex and expensive.
- **Hybrid Topology:** Combines elements of star, mesh, and other topologies to provide a flexible and scalable solution.

**Best Solution Identification:**
- Conduct a thorough needs analysis to determine the required bandwidth, reliability, and budget constraints.
- Perform a cost-benefit analysis of different topologies.
- Consider future scalability and ease of maintenance.
- Implement a pilot project to test the proposed topology before full deployment.

### Question 2
**Problem:** Construct digital signal diagrams using Manchester, Differential Manchester, and NRZ-I coding schemes for the data packets 11111111 and 10101010. Briefly compare these line coding schemes.

**Solution:**
- **Manchester Coding:** Each bit is represented by a transition. '1' is low to high, '0' is high to low.
- **Differential Manchester Coding:** Each bit has a transition at the beginning. '1' has no transition in the middle, '0' has a transition in the middle.
- **NRZ-I (Non-Return-to-Zero Inverted):** A '1' is represented by a transition at the beginning of the bit period, and a '0' has no transition.

**Comparison:**
- **Manchester:** Provides synchronization but doubles the bandwidth requirement.
- **Differential Manchester:** Provides synchronization and is more robust to signal degradation.
- **NRZ-I:** Efficient in terms of bandwidth but lacks synchronization.

### Question 3.a
**Problem:** Specify the data communication model's architecture or its individual components.

**Solution:**
- The OSI (Open Systems Interconnection) model is a standard for network communications.
  - **Layers:**
    1. Physical Layer
    2. Data Link Layer
    3. Network Layer
    4. Transport Layer
    5. Session Layer
    6. Presentation Layer
    7. Application Layer
  - Each layer has specific protocols and functions.

### Question 3.b
**Problem:** Describe the OSI networking model, including an overview of each layer and the associated protocols.

**Solution:**
- **Physical Layer:** Deals with the physical connection between devices. Protocols: Ethernet, USB.
- **Data Link Layer:** Manages data frames between devices. Protocols: PPP, Ethernet.
- **Network Layer:** Manages data routing. Protocols: IP, ICMP.
- **Transport Layer:** Ensures error-free data delivery. Protocols: TCP, UDP.
- **Session Layer:** Manages sessions between applications. Protocols: NetBIOS, RPC.
- **Presentation Layer:** Translates data formats. Protocols: SSL, TLS.
- **Application Layer:** Interfaces with user applications. Protocols: HTTP, FTP, SMTP.

### Question 4
**Problem:** In wireless local area networks (WLANs), outline the major protocols in the IEEE 802.11 standard to promote effective communication in terms of data rate, bandwidth, and frequency comparison.

**Solution:**
- **IEEE 802.11a:** 5 GHz, 54 Mbps, 20 MHz bandwidth.
- **IEEE 802.11b:** 2.4 GHz, 11 Mbps, 20 MHz bandwidth.
- **IEEE 802.11g:** 2.4 GHz, 54 Mbps, 20 MHz bandwidth.
- **IEEE 802.11n:** 2.4/5 GHz, up to 600 Mbps, 20/40 MHz bandwidth.
- **IEEE 802.11ac:** 5 GHz, up to 3.46 Gbps, 20/40/80/160 MHz bandwidth.
- **IEEE 802.11ax (Wi-Fi 6):** 2.4/5 GHz, up to 9.6 Gbps, 20/40/80/160 MHz bandwidth.

Each protocol has different characteristics regarding data rate, bandwidth, and frequency, which impact the overall performance and suitability for specific use cases.