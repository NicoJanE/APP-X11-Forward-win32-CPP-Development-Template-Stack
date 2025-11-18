

# What
A Docker Template Stack Container for **Cross-Compiling Win32** GUI C++ Projects.
The output of the GUI application is forwarded from the Linux container to the X11 server on the host (**XLaunch**). Win32 C++ applications can be created using the MinGW API. Additionally, the GUI application can be run in Linux by utilizing the **Wine** environment, and the output from Wine is forwarded to the X11 server on the Windows host.

While this is designed as a cross-compiling Win32 environment, nothing stops you from using it for other (GUI) application development!

**Available Sub Containers**
- Win32 C++ project environment


For more information, visit the [main documentation page](https://nicojane.github.io/APP-X11-Forward-win32-CPP-Development-Template-Stack/index.html). You can find other Docker Template Stack (DTS) containers  [here.](https://nicojane.github.io/Docker-Template-Stacks-Home/)

<br>

> **Announcement:** <br>
>*This Container is declared deprecated, the C++ sub container and template has been moved to: [**App X11 Forward GUI Cross-Compiling Win32**](https://nicojane.github.io/APP-X11-Forward-win32-Development-Template-Stack) Container. Please use that instead.* <br>


<br><br>
<small>Version: 0.9 </small>
