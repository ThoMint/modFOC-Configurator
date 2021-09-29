![modFOC](misc/modFOC-Logo-Outline.png)
A Configuration and Monitoring App for [modFOC Motor Controllers](https://github.com/ThoMint/modFOC)  
This Software is derived from the [serialplot](https://github.com/hyOzd/serialplot) project by [Hasan Yavuz Özderya](https://github.com/hyOzd)  

## Deployment

* ### Optainin CQT Creator

    - Download the [QT Online Installer](https://www.qt.io/download) via the open source policy
    - Create a QT account  
    - Choose custom installation and filter for LTS Versions
    - Install the latest QT5 LTS Release
    - Add the OpenSSL Toolkit to the installation
    - Add the QT Installer Framework to the installation

* ### Optain QWT Libraries

    - Download [QWT Sources v6.1.6](https://sourceforge.net/projects/qwt/files/qwt/6.1.6/qwt-6.1.6.zip/download)
    - Copy the downloaded archive to a folder in your root directory called "Qwt" and unpack it
    - Follow these [Instructions](https://qwt.sourceforge.io/qwtinstall.html#qwtinstall-unix) in order to compile for your platform using qmake  
    - Add QMAKEFEATURES environment variable to YOUR_QWT_ROOT/features
    - Add YOUR_QWT_ROOT/lib to path

* ### Add OpenSSL support
    - When OpenSSL Toolkit was installed by the Online Installer add YOUR_QT_HOME\Tools\OpenSSL\YOUR_PLATFORM\bin to your environment

* ### Deploying via CQtDeployer

    - Download the latest CQtDeployer release from the [releases page](https://github.com/QuasarApp/CQtDeployer/releases) on GitHub
    - Install CQtDeployer

* ### QT Creator

    - When all the above is finished, reboot your system and start QT Creator
    - Open the .pro file and compile the project