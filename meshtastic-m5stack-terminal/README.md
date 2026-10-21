# Meshtastic M5Stack Terminal

Experimental ESP-IDF project for a standalone LoRa messaging terminal using M5Stack CoreS3 Lite, Module13.2 LoRa-1262 (SX1262), and Unit CardKB2.

> **Status: planned / not validated.** Hardware stack compatibility has been identified in the M5Stack compatibility tool. SX1262 initialization, keyboard input, display and Meshtastic interoperability have **not** been validated.

## Goals

- Initialize and diagnose the SX1262 using ESP-IDF.
- Read keyboard input and render a minimal messaging UI.
- Investigate integration with existing Meshtastic nodes, without inventing a separate incompatible LoRa protocol.

## Hardware

| Device | Purpose |
|---|---|
| CoreS3 Lite | ESP32-S3 host and display |
| Module13.2 LoRa-1262 | SX1262 radio |
| Unit CardKB2 | Text input |

**Do not transmit without checking the antenna, regional frequency configuration and applicable rules.** Connect the antenna before radio transmission. DIP-switch positions and pin mapping must be confirmed on the physical device.

## Current implementation

Only a minimal ESP-IDF boot/logging scaffold is implemented. No radio or Meshtastic stack is included.

## Build

Install and activate an appropriate ESP-IDF version, then:

```sh
idf.py set-target esp32s3
idf.py build
idf.py -p PORT flash monitor
```

Replace `PORT` with the device's serial port. ESP-IDF version and board-specific flashing configuration remain to be validated.

## Documentation

- [Architecture](docs/architecture.md)
- [Hardware checklist](docs/hardware.md)
- [Meshtastic integration study](docs/meshtastic-integration.md)
- [Validation log](docs/validation-log.md)

## References

- https://docs.m5stack.com/en/module/Module13.2_LoRa-1262
- https://meshtastic.org/docs/

## License

Not yet selected. Do not assume permission to redistribute third-party firmware or libraries without checking their licenses.
