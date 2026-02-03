# ft_printf 📺

Este proyecto es la implementación en C de la función estándar `printf()` de la biblioteca `<stdio.h>`, recreando su **comportamiento básico** sin buffer.  
Forma parte del currículo de 42 School y te introduce al uso de **funciones variádicas** y análisis de cadenas de formato. 2

---

## 📌 Descripción

`ft_printf` es una función que recibe una cadena de formato y un número variable de argumentos, y escribe en la salida estándar (stdout) texto formateado según los especificadores.  
La implementación debe devolver el **número de caracteres impresos**, igual que la versión estándar. 3

---

## 🧠 Objetivos del proyecto

- Reimplementar la función `printf()` del estándar de C.
- Comprender y usar funciones de número variable de argumentos (`<stdarg.h>`).
- Aprender a parsear cadenas de formato con distintos tipos de datos.
- Entender cómo imprimir diferentes **format specifiers**.
- Cumplir con la **Norma de C de 42 (Norminette)**. 4

---

## 🛠️ Requisitos obligatorios

Tu implementación de `ft_printf` debe:

✔ Usar funciones de C permitidas (sin buffer interno)  
✔ Manejar correctamente los siguientes **especificadores de formato**:

| Conversor | Descripción |
|-----------|-------------|
| `%c` | Carácter |
| `%s` | String (`char *`) |
| `%p` | Puntero en hexadecimal |
| `%d` | Entero decimal con signo |
| `%i` | Entero con signo |
| `%u` | Entero sin signo |
| `%x` | Entero en hexadecimal (minúsculas) |
| `%X` | Entero en hexadecimal (mayúsculas) |
| `%%` | Imprime `%` |

Debes devolver el **número total** de caracteres escritos. 5

---

## 📈 Requisitos opcionales (Bonus)

Puedes añadir soporte a:

- **Flags**: `-`, `0`, `.`, `*`
- Mínimos de campo (width) y precisión
- Otros flags como `#`, `+` y espacio  
(Estos bonus no son obligatorios, pero aportan valor) 6

---

## 📂 Estructura del proyecto
