Enlaces: 

Instalation
    https://platzi.com/tutoriales/1189-algoritmos-2017/2765-compilando-cc-desde-visual-studio-code-windows-10/

GitHub
    https://github.com/Nasher3296/MyVSCode
    itmems with (G*) are in my github

Settings 
    open settings.json       f1 --> ">preferences: Open settings (JSON)"

    My settings:
        Paste settings.json (G*) in: "C:\Users\USUARIO\AppData\Roaming\Code\User"
    
        Font: JetBrains Mono:   https://www.jetbrains.com/es-es/lp/mono/
                                Or JetBrainsMono-2.225.zip (G*)
            Settings    > Editor: Font family   > "JetBrains Mono"
                        > Editor: Font Size     > "16"
                        > Editor: Font Ligatures> Edit in settings.json > "editor.fontLigatures": true,
        
        Explorer    (don't show .exe files)
                    Edit in settings.json   >   "files.exclude": {
                                                    "**/.classpath": true,
                                                    "**/.project": true,
                                                    "**/.settings": true,
                                                    "**/**.exe": true,
                                                    "**/.factorypath": true
                                                },

        Editor
            Zoom in/out with mouseWheelZoom (ctrl + scrollUp/Down)
            Settings    > Editor: Mouse wheel zoom > On

For more comfort open a folder to work files in it -->  ((ctrl + k) + (ctrl + o)) or  File > Open Folder
    You will need this to use some extensions, like Live Server

Shortcuts/Keybindings
    My Shortcuts:
    Paste keybindings.json (G*) in: "C:\Users\USUARIO\AppData\Roaming\Code\User"

    Or do it by yourself
    File > Preferences > Keyboard Shortcuts (ctrl+k ctrl+s) 

    Mode:   ctrl + shift + m
        <!--shortcut-->             <!--description-->                 <!--Command name-->
    Interface:
        ctrl + 0(numpad)        --> open/close output tab       --> View: Toggle Output
        ctrl + 4(numpad)        --> open/close problems tab     --> View: Toggle Problems
        ctrl + "+"              --> zoom in (font)              --> Editor Font Zoom In
        ctrl + "-"              --> zoom out (font)             --> Editor Font Zoom Out
        ctrl + shift + "+"      --> zoom in (interface)         --> View: Zoom In
        ctrl + shift + "-"      --> zoom out (interface)        --> View: Zoom Out
        ctrl + up/down          --> scroll up/down              --> scrollLineUp                        (default)
        ctrl + b                --> toggle side bar             --> Toggle side bar                     (default)

    Tabs management:
        ctrl + alt + 1(numpad)  --> Show a bigger editor        --> View: Toggle editor group sizes
        ctrl + alt + 2/8(numpad)--> Move into next/prev group   --> View: Move editor into next/previous group
        ctrl + alt + 3(numpad)  --> Join all groups             --> View: Single column editor layout
        ctrl + alt + 4/6(numpad)--> move between tabs           --> View: Open next/previous editor
        ctrl + alt + 5(numpad)  --> Move group right/down       --> View: Toggle vertical/horizontal editor layout
        ctrl + alt + 7/9(numpad)--> Organize tabs               --> View: Move editor left/right
        mode + z                --> Toggle Zen                  --> View: Toggle Zen Mode
        mode + o                --> Open definition             --> Open definition to the side

    Comment:
        ctrl + alt + x          --> comment line                --> Toggle line comment 
        ctrl + alt + c          --> comment block               --> Toggle block comment

    Cursor:
        ctrl + alt + up/down    --> add cursor                  --> Add cursor above/below              (default)
        ctrl + shift + l        --> select mathces              --> Select all mathces                  (default)
        (ctrl + alt +
         right/left)x2          --> go to line end/start        --> cursorLineEnd/cursorLineStart                                          
        (ctrl + alt +
         shift + right/left)x2  --> select to line end/start    --> cursorLineEndSelect/cursorLineStartSelect                 
        
    Lines:
        ctrl + alt + del        --> delete line                 --> Delete line     
        shift + del             --> delete left                 --> deleteLeft      <- revisar          (default)
        shift + alt + up/down   --> copy line                   --> Copy line up/down                   (default)
        alt + up/down           --> move line                   --> Move line up/down                   (default)
        ctrl + enter            --> Insert line below           --> Insert line below                   (default)
        ctrl + shift + enter    --> Insert line above           --> Insert line above                   (default)
    
    Others:
        ctrl + s                --> save                        --> File: Save                          (default)
        ctrl + shift + s        --> save as                     --> File: Save as                       (default)
        ctrl + alt + w          --> add label (HTML)            --> Emmet: Wrap with abbreviation       (default)
        ctrl + shift + p        --> show all commands           --> Show all commands                   (default)
        ctrl + 5(numpad)        --> run in external terminal    --> CompileRun: Compile with default... 
        alt  + +(numpad)        --> run in integrated           --> Run Code 
        ctrl + .(numpad)        --> Kill terminal               --> Termianl: Kill the active terminal
        alt  + -(numpad)        --> Kill terminal               --> Termianl: Kill the active terminal  (default)



Extensions:                 essential for C --> (*)
    General:
        Code Runner (*)     (run on integrated terminal)
        Bookmarks   
        Git History
        Prettier - Code formatter
    Colors:
        Bracket Pair Colorizer 2
        Community Material Theme --> Palenight
        Material Theme
        Material Icon Theme
        TODO Highlight
    C:
        C/C++ (*)
        C/C++ Compile Run   (*) (run on external terminal)
        C/C++ Projet Generator  
    HTML:
        Auto Close Tag
        Auto Rename Tag
        Live Server
    Java:
        Debugger for Java
        Getter and Setter Generator
        Java Extension Pack
        Java Test RunnerLanguaje Support for Java
        Visual Studio IntelliCode

Snippets:
    C:
        My C snippets:
        Paste snippets/c.json (G*) in: "C:\Users\USUARIO\AppData\Roaming\Code\User\snippets"
        If the path doesn't exist create it in "C:\Users\USUARIO\AppData\Roaming\Code\User"

        or
        
        ctrl + shift + p > "Snippets" > configure user Snippets > C
        paste this
        
            "for tradicional":{ 
                "prefix": "fori",
                "body": [
                    "for(int i = 0 ; i < ${2:limit} ; i++){",
                    "\t${0}",
                    "}"
                ],
                "description": "for tradicional",
            },

            "Salida en consola":{
                "prefix": "sout",
                "body": [
                    "printf(\"${1:out}\");$0",
                ],
                "description": "Salida en consola",
            },

            "Inicio de programa":{
                "prefix": "aaa",
                "body": [
                    "#include <stdlib.h>",
                    "#include <stdio.h>",
                    "",
                    "int main()",
                    "{",
                    "\t${0}",
                    "\treturn 0;",
                    "}"
                ],
                "description": "inicio del codigo",
            },

            "ordenamiento":{
                "prefix": "ordenamiento",
                "body": [
                    "int x = ${1: arrayLenght};",
                    "int k = 0;",
                    "while(k == 0)",
                    "{",
                    "    k = 1;",
                    "    x--;",
                    "    float aux;",
                    "    for(int i = 0; i < x; i++){",
                    "        if(${2:vecToOrder}[i] ${3} ${2:vecToOrder}[i+1])",
                    "        {",
                    "            k = 0;",
                    "            aux = ${2:vecToOrder}[i];",
                    "            ${2:vecToOrder}[i] = ${2:vecToOrder}[i+1];",
                    "            ${2:vecToOrder}[i+1] = aux;",
                    "        }",
                    "    }",
                    "}$0"
                ],
                "description": "default switch",
            },

            "scanf":{
                "prefix": "scn",
                "body": [
                    "scanf(\"%$1\",&${2:var});$0",
                ],
                "description": "scanf",
            },

    