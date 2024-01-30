#ifndef _MD4_H
#define _MD4_H

#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

/* Información acerca de la función. */
#define MD4_SIZE 16 /** Bytes del digest. */

/* Flags de finalización. */
#define MD4_FLAG_OK 0   /** Éxito. */
#define MD4_FLAG_MEM 1  /** Fallo de memoria. */
#define MD4_FLAG_FILE 2 /** Fallo al interactuar con archivos. */

/** Estructura para MD4. */
typedef struct _md4 {
    unsigned char* digest; /** Digest calculado. Se reserva por separado. */
    int flag;              /** Resultado de la operación. */
} MD4;

/**
 * @brief Calcula el MD4 de un archivo.
 *
 * La función calcula el digest de un archivo usando el algoritmo MD4.
 *
 * @param  filename
 * @return Una estructura MD4 o NULL en caso de:
 * - Error al reservar memoria de MD4.
 * - Argumentos inválidos.
 */
MD4* md4_file(char* filename);

#endif