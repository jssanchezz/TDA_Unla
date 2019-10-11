struct eUniversidad;

typedef struct eUniversidad* Universidad;

//Pre:
//Post:
//Axiomas:
Universidad crearUniversidad(char nombre[], char direccion[], char contacto[]);

Universidad crearUniversidadDesdeChar(char a[100]);

//Pre:
//Post:
//Axiomas:
void destruirUniversidad(Universidad miUniversidad);

///Setters y getters

char* getNombre(Universidad miUniversidad);

char* getDireccion(Universidad miUniversidad);

char* getContacto(Universidad miUniversidad);


void setNombre(Universidad miUniversidad, char nombre[]);

void setDireccion(Universidad miUniversidad, char direccion[]);

void setContacto(Universidad miUniversidad, char contacto[]);

///Procedimientos

//Pre:
//Post:
//Axiomas:
void agregarDepartamento(Universidad miUniversidad);

//Pre:
//Post:
//Axiomas:
void mostrarUniversidad(Universidad miUniversidad);

//Pre:
//Post:
//Axiomas:
void mostrarDepartamentos(Universidad miUniversidad);


///FUNCIONES ARCHIVOS

Universidad cargarUniversidad();

void guardarUniversidad(Universidad miUni);


