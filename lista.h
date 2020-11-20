typedef struct lista Lista;

Lista* create(int n);

int add(Lista *li, int e);

int remover(Lista *li, int e);

int size(Lista *li);

int mostra(Lista *li);

int find(Lista *li, int x);

int isFull(Lista *li);

int isEmpty(Lista *li);

int clear(Lista *li);

