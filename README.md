# Mac Address Randomiser 
Created by SaEeD, modified by autumn

This is a C++ program that assigns random MAC addresses to all network adapters on a Windows system. It uses Windows Registry to modify the MAC addresses and disable/enable network interfaces to apply changes.

## Prerequisites

- Windows operating system
- C++ compiler (Visual Studio recommended)

## Usage

1. Clone the repository to your local machine.
2. Compile the `main.cpp` file using a C++ compiler (e.g., Visual Studio).
3. Run the compiled executable.

**Note:** Ensure that you have administrative privileges to modify the Windows Registry and network interfaces.

## How It Works

The program performs the following steps:

1. Retrieves a list of network adapters available on the system.
2. Generates random MAC addresses for each adapter.
3. Modifies the Windows Registry to set the new MAC addresses.
4. Disables and re-enables each network interface to apply changes.

## Disclaimer

Modifying MAC addresses can have unintended consequences and may violate network policies or terms of service. Use this program responsibly and only on systems you have permission to modify.

## License

This project is licensed under the [MIT License](LICENSE).

