// essas definições não utilizam os argumentos mais de uma vez. Então,
// possibilitando usar (x++) como um argumento válido (e útil) para o macro

#define abs(x) ({       \
    int __X = (x);      \
    __X > 0 ? __X:-__X; \
})
#define soma(a, b) ((a)+(b))
#define max(a, b) ({ \
    int __A = a;     \
    int __B = b;     \
    __A>__B?__A:__B; \
})
