# Examen Final Pregunta 3 (18 puntos)

## Información del Estudiante

- **Nombre**: Alcides Rommel, Charapaqui Reluz
- **Usuario**: u202021294

## Descripción del Proyecto

Este proyecto es un compilador para un pequeño lenguaje de programación diseñado como parte del examen final. El lenguaje soporta estructuras condicionales IF y expresiones en notación prefijo. Además, se definen palabras reservadas y se incluyen al menos cuatro operadores.

## Marco Teórico
El proyecto se basa en el diseño y la implementación de un compilador para un lenguaje de programación específico. Un compilador es una herramienta que traduce un programa escrito en un lenguaje de programación (lenguaje fuente) a otro lenguaje (lenguaje objetivo), normalmente código máquina o un código intermedio. Los componentes clave de este compilador incluyen:

Analizador Léxico y Sintáctico: Utiliza ANTLR4 para analizar el lenguaje fuente y generar un árbol sintáctico abstracto (AST).
Generador de Código IR: Transforma el AST en una representación intermedia (IR) utilizando LLVM, facilitando la optimización y generación de código objetivo.
Optimizador de Código: Mejora el código IR para la eficiencia del tiempo de ejecución y la utilización de recursos.
Ejecutor en Tiempo Real: Permite la ejecución del código fuente de manera interactiva, lo que es crucial para la depuración y la ejecución de pruebas.

## Componentes del Proyecto

### Analizador Sintáctico y Léxico (5 puntos):

- Se utiliza ANTLR4 para generar un lexer y un parser basados en una gramática definida (`MiShell.g4`). Este componente se encarga del análisis sintáctico y léxico del lenguaje.

### Generación de Código IR (5 puntos):

- Implementación en `IRGenerator.cpp` y `IRGenerator.h` para convertir el árbol de análisis generado por ANTLR en código IR de LLVM.

### Optimización de Código (5 puntos):

- Se utiliza el `PassManager` de LLVM en `IROptimizer.cpp` y `IROptimizer.h` para optimizar el código IR generado.

### Ejecución en Tiempo Real (3 puntos):

- El módulo `RuntimeExecutor.cpp` y `RuntimeExecutor.h` se encarga de ejecutar el código IR, permitiendo la ejecución en tiempo real del código del lenguaje.

![tasks](https://cdn.discordapp.com/attachments/1159637113541759146/1179900255257501787/image.png?ex=657b76be&is=656901be&hm=f49d857a78e88aaac2397f38df9fe17b1227cad199fd0ffdafa164930823bdfb&)

## Conclusiones
Aprendizaje en Compiladores: Este proyecto proporcionó una comprensión profunda de cómo funcionan los compiladores, especialmente en las etapas de análisis léxico y sintáctico, generación de código intermedio, optimización y ejecución.
Aplicación Práctica de Teorías: La implementación práctica del compilador ofreció una oportunidad invaluable para aplicar teorías y conceptos aprendidos en clases de programación y compiladores.
Desafíos y Soluciones: A lo largo del proyecto, se enfrentaron varios desafíos técnicos, cada uno de los cuales contribuyó al aprendizaje y al desarrollo de habilidades de resolución de problemas.
Futuras Mejoras: Aunque el proyecto cumple con los requisitos básicos, hay espacio para mejoras y extensiones, como agregar más características al lenguaje, mejorar la interfaz de usuario, y aumentar la eficiencia del compilador.
