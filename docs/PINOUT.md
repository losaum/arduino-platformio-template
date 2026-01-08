Arduino Uno                                
                                
                                +-----+
         +----[PWR]-------------------| USB |--+
         |                            +-----+  |
         |         GND/RST2  [ ][ ]            |
         |       MOSI2/SCK2  [ ][ ]  A5/SCL[ ] |    
         |          5V/MISO2 [ ][ ]  A4/SDA[ ] |    
         |                             AREF[ ] |
         |                              GND[ ] |
         | [ ]N/C                    SCK/13[x] |   
         | [ ]IOREF                 MISO/12[ ] |   
         | [ ]RST                   MOSI/11[ ]~|   
         | [ ]3V3    +---+               10[ ]~|   
         | [ ]5v    -| A |-               9[ ]~|   
         | [ ]GND   -| R |-               8[ ] |   
         | [ ]GND   -| D |-                    |
         | [ ]Vin   -| U |-               7[ ] |   
         |          -| I |-               6[ ]~|   
         | [ ]A0    -| N |-               5[ ]~|   
         | [ ]A1    -| O |-               4[ ] |   
         | [ ]A2     +---+           INT1/3[ ]~|   
         | [ ]A3                     INT0/2[x] |   
         | [ ]A4/SDA  RST SCK MISO     TX>1[ ] |   
         | [ ]A5/SCL  [ ] [ ] [ ]      RX<0[ ] |   
         |            [ ] [ ] [ ]              |
         |  UNO_R3    GND MOSI 5V  ____________/
          \_______________________/
		  
		  http://busyducks.com/ascii-art-arduinos

# Mapa de Ligações 

| Componente      | Pino  | Observação                        |
|-----------------|-------|-----------------------------------|
| LED Status      | 13    | Interno                           |
| Botão 1         | 2     | Pull-up interno, botao para o GND |
|                 |       |                                   |




Arduino Mega 2560

                               +-----+
         +----[PWR]-------------------| USB |--+
         |                            +-----+  |
         |           GND/RST2  [ ] [ ]         |
         |         MOSI2/SCK2  [ ] [ ]  SCL[ ] |   
         |            5V/MISO2 [ ] [ ]  SDA[ ] |   
         |                             AREF[ ] |
         |                              GND[ ] |
         | [ ]N/C                        13[ ]~|   
         | [ ]IOREF                      12[ ]~|   
         | [ ]RST                        11[ ]~|   
         | [ ]3V3      +----------+      10[ ]~|   
         | [ ]5v       | ARDUINO  |       9[ ]~|   
         | [ ]GND      |   MEGA   |       8[ ]~|   
         | [ ]GND      +----------+            |
         | [ ]Vin                         7[ ]~|   
         |                                6[ ]~|   
         | [ ]A0                          5[ ]~|   
         | [ ]A1                          4[ ]~|   
         | [ ]A2                     INT5/3[ ]~|   
         | [ ]A3                     INT4/2[ ]~|   
         | [ ]A4                       TX>1[ ]~|   
         | [ ]A5                       RX<0[ ]~|   
         | [ ]A6                               |   
         | [ ]A7                     TX3/14[ ] |   
         |                           RX3/15[ ] |   
         | [ ]A8                     TX2/16[ ] |       
         | [ ]A9                     RX2/17[ ] |   
         | [ ]A10               TX1/INT3/18[ ] |       
         | [ ]A11               RX1/INT2/19[ ] |   
         | [ ]A12           I2C-SDA/INT1/20[ ] |       
         | [ ]A13           I2C-SCL/INT0/21[ ] |   
         | [ ]A14                              |     
         | [ ]A15                              |   Ports:
         |                RST SCK MISO         |    22=A0  23=A1   
         |         ICSP   [ ] [ ] [ ]          |    24=A2  25=A3   
         |                [ ] [ ] [ ]          |    26=A4  27=A5   
         |                GND MOSI 5V          |    28=A6  29=A7   
         | G                                   |    30=C7  31=C6   
         | N 5 5 4 4 4 4 4 3 3 3 3 3 2 2 2 2 5 |    32=C5  33=C4   
         | D 2 0 8 6 4 2 0 8 6 4 2 0 8 6 4 2 V |    34=C3  35=C2   
         |         ~ ~                         |    36=C1  37=C0   
         | @ # # # # # # # # # # # # # # # # @ |    38=D7  39=G2    
         | @ # # # # # # # # # # # # # # # # @ |    40=G1  41=G0   
         |           ~                         |    42=L7  43=L6   
         | G 5 5 4 4 4 4 4 3 3 3 3 3 2 2 2 2 5 |    44=L5  45=L4   
         | N 3 1 9 7 5 3 1 9 7 5 3 1 9 7 5 3 V |    46=L3  47=L2   
         | D                                   |    48=L1  49=L0    SPI:
         |                                     |    50=B3  51=B2     50=MISO 51=MOSI
         |     2560                ____________/    52=B1  53=B0     52=SCK  53=SS 
          \_______________________/         
         
         http://busyducks.com/ascii-art-arduinos