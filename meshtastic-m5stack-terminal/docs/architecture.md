# Architecture (planned)

```text
CardKB2 --I2C--> CoreS3 Lite --SPI/control--> Module13.2 SX1262
                       |
                   Display/UI
                       |
          Meshtastic integration (unresolved)
```

This is a target architecture, not a validated software implementation. The module may require an I2C expander for power/reset control. Driver design and pin mappings require confirmation.

## Engineering decisions

- ESP-IDF as the application framework.
- FreeRTOS for eventual input, UI and communications tasks.
- No claims of Meshtastic interoperability until verified against existing nodes.
