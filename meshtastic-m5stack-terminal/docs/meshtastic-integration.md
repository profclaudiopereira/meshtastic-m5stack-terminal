# Meshtastic integration investigation

**Status: not implemented.**

The goal is interoperability with an existing functioning Meshtastic network. Raw LoRa packets are not equivalent to Meshtastic packets.

Evaluate:
1. Whether an upstream board variant already supports the CoreS3 Lite + Module13.2 combination.
2. Requirements for the SX1262, I2C expander, GPIOs and display/keyboard integration.
3. Feasibility of using upstream Meshtastic firmware while keeping ESP-IDF as the development foundation.
4. A fallback design in which this terminal communicates with a separate existing Meshtastic node via a supported client API.
5. Third-party licensing obligations before copying firmware or libraries.

**Decision pending:** native Meshtastic port versus terminal client architecture.
