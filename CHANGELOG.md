## 1.0.0 (07/12/2025)
Release of **Icolor**
## 1.1.0 (08/12/2025)
New objects
-    icolor::Say{} << "Show a message";
-    icolor::Sayln{} << "Show a message with '\n'";
-    cout << icolor::rainbow("MESSAGE") << endl; <- Each character has a color.

New colors
-    error <- Red
-    sucess <- Green
-    warn <- Yellow
-    info <- Blue
-    fatal <- Red with background