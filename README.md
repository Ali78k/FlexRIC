# Fork of OpenAirInterface's FlexRIC

This repository is a fork of [OAI's FlexRIC](https://gitlab.eurecom.fr/oai/flexric), an advanced RAN Intelligent Controller (RIC) framework designed for O-RAN-compliant xApps. For a complete understanding of the project and installation process, please refer to the [main README.md](https://github.com/Ali78k/FlexRIC/blob/br-flexric/Official_README.md).

## Installation Notes

To install this fork, follow the instructions from the main project, but note the following considerations:

### CMake Command
Use the following command when running CMake:
```bash
cmake -DCMAKE_C_COMPILER=gcc-12 -DXAPP_DB=MYSQL_XAPP ..
`````

### Recompilation Steps
To recompile the project, use the following commands:
```bash
cmake clean ..
make uninstall
cmake -DCMAKE_C_COMPILER=gcc-12 -DXAPP_DB=MYSQL_XAPP ..
make -j```nproc`
make install
```

### Database Setup for xApp
Ensure that the xApp user is created and configured in MySQL:
```bash
mysql -u root -p
CREATE USER 'xapp'@'localhost' IDENTIFIED BY 'eurecom';
GRANT ALL PRIVILEGES ON *.* TO 'xapp'@'localhost' WITH GRANT OPTION;
FLUSH PRIVILEGES;
`````

To delete a database, you can use:
```bash
DROP DATABASE testdb;
`````
For more information, see this [Gist](https://gist.github.com/Ali78k/f24cbf6552970574611a2306cfc8a2be).

## Enhancements in This Fork

This fork introduces the addition of the RSRP KPI to the xApp. The main differences can be found in the following files:

- [`examples/emulator/agent/sm_kpm.c`](https://github.com/Ali78k/FlexRIC/blob/br-flexric/examples/emulator/agent/sm_kpm.c#L78-L92)
- [`conf_files/xapp_oran_sm.conf`](https://github.com/Ali78k/FlexRIC/blob/br-flexric/conf_files/xapp_oran_sm.conf#L34-L35)

Feel free to explore these changes to better understand the modifications and their impact.
---
For any questions or further clarifications, please open an issue or contact the repository maintainer.
