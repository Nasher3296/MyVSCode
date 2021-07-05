Importante:
    Para que todo funcione adecuadamente lo recomendable es trabajar sobre una carpeta aunque sea para un unico archivo
    Ir a file > Add folder to workspace y seleccionarla. Esto nos va a otorgar muchisimas funcionalidades.
    Un workspace puede decirse que es una "carpeta" contenedora de otras carpetas que agreguemos en su interior y este puede tener sus propias configuraciones mas allá de las que se configuren para la aplicacion. Esto es util, por ejemplo, si para un cierto lenguaje o proyecto en específico quiero utilizar cierta configuracion que en otros no. Estas configuraciones a nivel workspace se guardan en una carpeta que se crea de forma automatica en cada workspace llamada ".vscode". Al acceder a la configuracion (ctrl+,) nos aparece una pestaña "User" y otra "Workspace" (puede aparecer "folder" tambien). Esto nos sirve para saber si estamos configurando a nivel general o justamente configurando el workspace especificamente. Las configuraciones de workspace tienen prioridad por sobre las del usuario.

    Lo escencial de esta instalacion es:
    -Instalar VSCode
    -Instalar un compilador de c
    -Instalar las extensiones C/C++, C/C++ Compile Run y Code Runner 

    Si se utiliza la configuracion básica con las extensiones mencionadas previamente:
        Al usar ctrl+shift+p accedemos a un menú de busqueda de comandos. En él buscar "CompileRun: Compile with default flags & Run with default arguments" para compilar y correr.

Descargar VSCode:
    https://code.visualstudio.com/

Mi compilador: 
    MSYS2 mingw64
    https://www.youtube.com/watch?v=0HD0pqVtsmw
    En teoría todo debería funcionar con el mingw64 normal, yo me copie del flaco del video pero no creo que sea necesario

Guía de instalacion básica (incluye compilador) --> https://platzi.com/tutoriales/1189-algoritmos-2017/2765-compilando-cc-desde-visual-studio-code-windows-10/

GitHub  --> https://github.com/Nasher3296/MyVSCode

Para copiar cualquier configuracion tal cual la tengo yo debe reemplazarse el archivo correspondiente (keybindings.json, settings.json, etc) en la ruta predeterminada "C:\Users\USUARIO\AppData\Roaming\Code\User\" (En donde dice "USUARIO" reemplazar por su propio usuario)

Mis atajos de teclado están explicados en "keybindings.json" (Abrir con VSCode o block de notas para leer)

Mi fuente es JetBrains Mono
    https://www.jetbrains.com/es-es/lp/mono/
    (Tambien disponible en mi github como "JetBrainsMono-2.225.zip")

Mis configuraciones están explicadas en "settings.json"

Los snippets son una asistencia a la hora de escribir codigo. Mi favorito es "aaa", que al escribirlo me da el formato básico de un codigo en C.
Mis snippets para C se encuentran en "snippets/c.json". Pegar el archivo en "C:\Users\USUARIO\AppData\Roaming\Code\User\snippets"

Extensiones recomendadas:
    C/C++   
        Esta es obligatoria en caso de querer utilizar C
    
    C/C++ Compile Run
    Code Runner 
        Estas dos son necesarias para ahorrar el problema de configurar la compilacion y ahorrarse problemas

    Bracket Pair Colorizer 2
    Community Material Theme --> Palenight
    Material Icon Theme
        Estas 3 son para aspectos visuales


