# NXP Application Code Hub
[<img src="https://mcuxpresso.nxp.com/static/icon/nxp-logo-color.svg" width="100"/>](https://www.nxp.com)

## How to emulate UART with IRDA by using FlexIO
This software accompanies application note[AN14319], which describes how to implement emulating UART with IRDA by using FlexIO.

In this demo, one FRDM-MCXC242 simulates IRDA encoder. Another FRDM-MCXC242 IRDA decoder. Connect IRDA_TX pin of one board with IRDA_RX pin of another board. For debugging, the data received by IRDA_RX will be sent to USB2COM through pin UART_TX.

![hardware2](./images/architecture.png)


#### Boards: FRDM-MCXC242
#### Categories: Industrial, User Interface
#### Peripherals: GPIO, UART
#### Toolchains: MCUXpresso IDE

## Table of Contents
1. [Software](#step1)
2. [Hardware](#step2)
3. [Setup](#step3)
4. [Results](#step4)
5. [FAQs](#step5) 
6. [Support](#step6)
7. [Release Notes](#step7)

## 1. Software<a name="step1"></a>
\- [MCUXpresso IDE V11.10.0 or later](https://www.nxp.com/design/design-center/software/development-software/mcuxpresso-software-and-tools-/mcuxpresso-integrated-development-environment-ide:MCUXpresso-IDE).

\- SDK_2.16.000_FRDM-MCXC242

\- MCUXpresso for Visual Studio Code: This example supports MCUXpresso for Visual Studio Code, for more information about how to use Visual Studio Code please refer [here](https://www.nxp.com/design/training/getting-started-with-mcuxpresso-for-visual-studio-code:TIP-GETTING-STARTED-WITH-MCUXPRESSO-FOR-VS-CODE).

## 2. Hardware<a name="step2"></a>
- USB Type-C cable
- FRDM-MCXC242
- Personal Computer
- USB to TLL board

## 3. Setup<a name="step3"></a>
### 3.1 Step 1

Connect IRDA_TX pin of receiver board with IRDA_RX pin of transmitter board. For debugging, the data received by IRDA_RX will be sent to USB2COM through pin UART_TX on receiver board.

The block diagram as below:

![hardware1](./images/hardware1.png)

The board connection as below:

![hardware](./images/hardware.png)

### 3.2 Step 2

- Import the project to MCUXpresso IDE.

1. Open MCUXpresso IDE, in the Quick Start Panel, choose **Import from Application Code Hub**.

     ![](images/import_project_1.png)

2. Enter the demo name in the search bar.

   ![](images/import_project_2.png) 

3. Click **Copy GitHub link**, MCUXpresso IDE will automatically retrieve project attributes, then click **Next>**.

     ![](images/import_project_3.png)


4. Select **main** branch and then click **Next>**, Select the MCUXpresso project, click **Finish** button to complete import.

     ![](images/import_project_4.png)

- Connect the USB type-c cable between the PC host and the USB port (J9) on the board respectively.
- Connect the pin IRDA_TX of transmitter to the pin IRDA_RX of receiver.
- Connect one USB to UART board with pin UART_TX of Receiver board:

​		 J1-9, TX of USB2COM connected.

​		 J2-14, Ground of USB2COM connected.

- Open a serial terminal on PC for the serial device with these settings:
  - 115200 baud rate
  - 8 data bits
  - No parity
  - One stop bit
  - No flow control
- Compile and download to the board.
- Reset and run.

## 4. Results<a name="step4"></a>
When the demo runs successfully, the log would be seen on the UART Terminal port which connected to the USB2COM like:

**Flexio uart polling example**

**Board will send back received characters**

The characters sent by receiver on pin UART_TX would be seen on the UART Terminal port like:

**Flexio uart polling example**
**Board will send back received characters**
**123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ123456789:;<=>?**

## 5. FAQs<a name="step5"></a>
*Include FAQs here if appropriate. If there are none, then state "No FAQs have been identified for this project".*

## 6. Support<a name="step6"></a>
*Provide URLs for help here.*

#### Project Metadata
<!----- Boards ----->
[![Board badge](https://img.shields.io/badge/Board-FRDM&ndash;MCXC242-blue)](https://github.com/search?q=org%3Anxp-appcodehub+FRDM-MCXC242+in%3Areadme&type=Repositories)

<!----- Categories ----->
[![Category badge](https://img.shields.io/badge/Category-INDUSTRIAL-yellowgreen)](https://github.com/search?q=org%3Anxp-appcodehub+industrial+in%3Areadme&type=Repositories) [![Category badge](https://img.shields.io/badge/Category-USER%20INTERFACE-yellowgreen)](https://github.com/search?q=org%3Anxp-appcodehub+ui+in%3Areadme&type=Repositories)

<!----- Peripherals ----->
[![Peripheral badge](https://img.shields.io/badge/Peripheral-GPIO-yellow)](https://github.com/search?q=org%3Anxp-appcodehub+gpio+in%3Areadme&type=Repositories) [![Peripheral badge](https://img.shields.io/badge/Peripheral-UART-yellow)](https://github.com/search?q=org%3Anxp-appcodehub+uart+in%3Areadme&type=Repositories)

<!----- Toolchains ----->
[![Toolchain badge](https://img.shields.io/badge/Toolchain-MCUXPRESSO%20IDE-orange)](https://github.com/search?q=org%3Anxp-appcodehub+mcux+in%3Areadme&type=Repositories)

Questions regarding the content/correctness of this example can be entered as Issues within this GitHub repository.

>**Warning**: For more general technical questions regarding NXP Microcontrollers and the difference in expected funcionality, enter your questions on the [NXP Community Forum](https://community.nxp.com/)

[![Follow us on Youtube](https://img.shields.io/badge/Youtube-Follow%20us%20on%20Youtube-red.svg)](https://www.youtube.com/@NXP_Semiconductors)
[![Follow us on LinkedIn](https://img.shields.io/badge/LinkedIn-Follow%20us%20on%20LinkedIn-blue.svg)](https://www.linkedin.com/company/nxp-semiconductors)
[![Follow us on Facebook](https://img.shields.io/badge/Facebook-Follow%20us%20on%20Facebook-blue.svg)](https://www.facebook.com/nxpsemi/)
[![Follow us on Twitter](https://img.shields.io/badge/Twitter-Follow%20us%20on%20Twitter-white.svg)](https://twitter.com/NXP)

## 7. Release Notes<a name="step7"></a>
| Version | Description / Update                           | Date                        |
|:-------:|------------------------------------------------|----------------------------:|
| 1.0     | Initial release on Application Code Hub        | May 9<sup>th</sup> 2024 |

