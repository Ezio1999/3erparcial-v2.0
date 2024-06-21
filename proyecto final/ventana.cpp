#define _WIN32_WINNT 0x0500 // Es necesaria esta definicion para esconder ventana de consola

#include <windows.h> // Libreria que contiene las funciones de Winapi
#include <iostream>
#include <string>
using namespace std;

#define ID1 101 // Boton de inicio
#define ID2 102 // Boton de salida

/*  Declaracion del procedimiento de windows  */

char contrav[100] = {"2b27"};
char contra[100];
// Botones emergentes
#define ID4 104
#define ID5 105

// Botones login
#define ID3 103
#define tx1 106
#define tx2 107
LRESULT CALLBACK WindowProcedure(HWND, UINT, WPARAM, LPARAM);

/*  Declaramos una variable de tipo char para guardar el nombre de nuestra aplicacion  */

char NombreClase[] = "Estilos";
HWND himg;

HWND ventana1; /* Manejador de la ventana*/ // Ventana de inicio
HWND ventana2;                              // Ventan Login
HWND ventana3;                              // Ventana Form
HWND ventana4;                              // ventana de dueño
HWND alerta;

// Botones de la ventana principal
HWND boton1; // Boton de inicio
HWND boton2; // Bonton de salida

// Botones de la ventana login
HWND boton3;
HWND txt1;
HWND txt2;

MSG mensajecomunica; /* Mensajes internos que se envian a la aplicacion */

WNDCLASSEX estilo1; /* Nombre de la clase para los estilos de ventana */

int WINAPI WinMain(HINSTANCE hThisInstance,

                   HINSTANCE hPrevInstance,

                   LPSTR lpszArgument,

                   int nCmdShow)

{

    /* Creamos la estructura de la ventana indicando varias caracteristicas */

    estilo1.hInstance = hThisInstance;

    estilo1.lpszClassName = NombreClase;

    estilo1.lpfnWndProc = WindowProcedure;

    estilo1.style = CS_DBLCLKS;

    estilo1.cbSize = sizeof(WNDCLASSEX);

    estilo1.hIcon = LoadIcon(NULL, IDI_EXCLAMATION);

    estilo1.hIconSm = LoadIcon(NULL, IDI_INFORMATION);

    estilo1.hCursor = LoadCursor(NULL, IDC_ARROW);

    estilo1.lpszMenuName = NULL; /* Sin Menu */

    estilo1.cbClsExtra = 0;

    estilo1.cbWndExtra = 0;

    estilo1.hbrBackground = (HBRUSH)COLOR_WINDOW; /* Color del fondo de ventana */

    /* Registramos la clase de la ventana */

    if (!RegisterClassEx(&estilo1))

        return 0;

    /* Ahora creamos la ventana a partir de la clase anterior */

    // Ventana principal
    ventana1 = CreateWindowEx(

        0,

        NombreClase, /* Nombre de la clase */

        ("JHAAZ"), /* Titulo de la ventana */

        WS_OVERLAPPEDWINDOW | WS_BORDER, /* Ventana por defecto */

        400, /* Posicion de la ventana en el eje X (de izquierda a derecha) */

        70, /* Posicion de la ventana, eje Y (arriba abajo) */

        644, /* Ancho de la ventana */

        575, /* Alto de la ventana */

        HWND_DESKTOP,

        NULL, /* Sin menu */

        hThisInstance,

        NULL

    );

    // Ventana de login
    ventana2 = CreateWindowEx(

        0,

        NombreClase, /* Nombre de la clase */

        ("JHAAZ Login"), /* Titulo de la ventana */

        WS_OVERLAPPEDWINDOW | WS_BORDER, /* Ventana por defecto */

        400, /* Posicion de la ventana en el eje X (de izquierda a derecha) */

        70, /* Posicion de la ventana, eje Y (arriba abajo) */

        644, /* Ancho de la ventana */

        575, /* Alto de la ventana */

        HWND_DESKTOP,

        NULL, /* Sin menu */

        hThisInstance,

        NULL);

    // Ventana emergente
    alerta = CreateWindowEx(

        0,

        NombreClase, /* Nombre de la clase */

        ("Alerta"), /* Titulo de la ventana */

        WS_OVERLAPPEDWINDOW | WS_BORDER, /* Ventana por defecto */

        400, /* Posicion de la ventana en el eje X (de izquierda a derecha) */

        70, /* Posicion de la ventana, eje Y (arriba abajo) */

        294, /* Ancho de la ventana */

        150, /* Alto de la ventana */

        HWND_DESKTOP,

        NULL, /* Sin menu */

        hThisInstance,

        NULL

    );

    // Ventana de formulario
    ventana3 = CreateWindowEx(

        0,

        NombreClase, /* Nombre de la clase */

        ("JHAAZ Form"), /* Titulo de la ventana */

        WS_OVERLAPPEDWINDOW | WS_BORDER, /* Ventana por defecto */

        400, /* Posicion de la ventana en el eje X (de izquierda a derecha) */

        70, /* Posicion de la ventana, eje Y (arriba abajo) */

        644, /* Ancho de la ventana */

        575, /* Alto de la ventana */

        HWND_DESKTOP,

        NULL, /* Sin menu */

        hThisInstance,

        NULL

    );

    // Ventana de dueño
    ventana4 = CreateWindowEx(

        0,

        NombreClase, /* Nombre de la clase */

        ("Dueño"), /* Titulo de la ventana */

        WS_OVERLAPPEDWINDOW | WS_BORDER, /* Ventana por defecto */

        400, /* Posicion de la ventana en el eje X (de izquierda a derecha) */

        70, /* Posicion de la ventana, eje Y (arriba abajo) */

        644, /* Ancho de la ventana */

        575, /* Alto de la ventana */

        HWND_DESKTOP,

        NULL, /* Sin menu */

        hThisInstance,

        NULL

    );

    /* Hacemos que la ventana sea visible */

    ShowWindow(ventana1, nCmdShow);

    ShowWindow(GetConsoleWindow(), SW_HIDE); // Funcion para esconder la ventana de consola

    /* Hacemos que la ventan se ejecute hasta que se obtenga resturn 0 */

    while (GetMessage(&mensajecomunica, NULL, 0, 0))

    {

        /* Traduce mensajes virtual-key */

        TranslateMessage(&mensajecomunica);

        /* Envia mensajes a WindowProcedure */

        DispatchMessage(&mensajecomunica);
    }

    return mensajecomunica.wParam;
}

LRESULT CALLBACK WindowProcedure(HWND otro, UINT mensajecomunica, WPARAM wParam, LPARAM lParam)

{
    static HINSTANCE Instancia;

    switch (mensajecomunica) /* Manejamos los mensajes */
    {
    case WM_CLOSE: /* Que hacer en caso de recibir el mensaje WM_CLOSE*/
        if (otro == ventana2)
        {
            ShowWindow(ventana2, SW_HIDE);
        }
        else if (otro == ventana1)
        {
            PostQuitMessage(0);
        }
        else if (otro == ventana3)
        {
            ShowWindow(ventana3, SW_HIDE);
        }
        else if (otro == ventana4)
        {
            ShowWindow(ventana4, SW_HIDE);
        }

        break;
    case WM_CREATE:
        Instancia = ((LPCREATESTRUCT)lParam)->hInstance;
        boton1 = CreateWindowEx(0, "button", ("Iniciar"), WS_VISIBLE | WS_CHILD | 0x00000001, 460, 100, 100, 25, ventana1, (HMENU)ID1, GetModuleHandle(NULL), 0);
        boton2 = CreateWindowEx(0, "button", ("Salir"), WS_VISIBLE | WS_CHILD | 0x00000001, 460, 200, 100, 25, ventana1, (HMENU)ID2, GetModuleHandle(NULL), 0);
        break;
    case WM_COMMAND:
        if (wParam == ID1)
        {
            ShowWindow(ventana2, SW_SHOW);
            boton3 = CreateWindowEx(0, "button", ("Login"), BS_PUSHBUTTON | BS_CENTER | WS_VISIBLE | WS_CHILD | 0x00000001, 300, 300, 100, 25, ventana2, (HMENU)ID3, GetModuleHandle(NULL), 0);
            CreateWindowW(L"static", L"Usuario", WS_VISIBLE | WS_CHILD | SS_LEFTNOWORDWRAP, 250, 80, 100, 50, ventana2, NULL, NULL, NULL);
            txt1 = CreateWindowEx(0, "EDIT", "", ES_AUTOHSCROLL | ES_LEFT | WS_CHILD | WS_VISIBLE | WS_BORDER, 250, 200, 200, 20, ventana2, (HMENU)tx1, Instancia, NULL); // Nombre de usuario
            CreateWindowW(L"static", L"Contraseña", WS_VISIBLE | WS_CHILD | SS_LEFTNOWORDWRAP, 250, 170, 100, 20, ventana2, NULL, NULL, NULL);
            txt2 = CreateWindowEx(0, "EDIT", "", ES_AUTOHSCROLL | ES_LEFT | WS_CHILD | WS_VISIBLE | WS_BORDER, 250, 100, 200, 20, ventana2, (HMENU)tx2, GetModuleHandle(NULL), NULL); // Contraseña
        }
        else if (wParam == ID2)
        {
            MessageBox(NULL, "¿Estas seguro de querer salir del programa?", "¡Alerta!", MB_OKCANCEL | MB_DEFBUTTON2);
            if (MessageBox(NULL, "Presione una vez mas para continuar", "¡Alerta!", MB_OKCANCEL | MB_DEFBUTTON2) == IDOK)
            {
                PostQuitMessage(0);
            }
        }
        else if (wParam == ID3)
        {
            char buffer[100] = {0};
            GetDlgItemText(ventana2, tx1, buffer, 100 + 1);
            if (strcmp(buffer, contrav) == 0)
            {
                ShowWindow(ventana4, SW_SHOW); // Ventana de dueño
            }
            else
            {
                ShowWindow(ventana3, SW_SHOW); // Ventana de formulario
            }
        }
        break;
    default: /* Tratamiento por defecto para mensajes que no especificamos */
        return DefWindowProc(otro, mensajecomunica, wParam, lParam);
    }
    return 0;
}
