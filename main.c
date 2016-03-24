#include <stdio.h>
#include <stdlib.h>


typedef struct _lista {
  int info;
  struct _lista * prox;
}TpLista;

TpLista *InicializaLista();
TpLista *InsereIni(TpLista *Lista, int e);
void ImprimirLista(TpLista *Lista);
int Evazia(TpLista *Lista);

int main(){
  TpLista *Lista;

//
  Lista = InicializaLista(Lista);
  if(!Lista)
    printf("\nLista inicializada");
//
  if(Evazia(Lista))
    printf("\nLista Vazia...\n");
//
  Lista = InsereIni(Lista, 10);
  Lista = InsereIni(Lista, 25);
//
  ImprimirLista(Lista);
//

  if(Evazia(Lista))
    printf("\nLista Vazia...\n");
  else
    printf("\nLista contem Elementos...\n");
//

//
  system("clear");
  free(Lista);
  return 0;
}

TpLista *InicializaLista(){
  return NULL;
}

TpLista *InsereIni(TpLista *Lista, int e){
  TpLista *Novo = (TpLista * ) malloc(sizeof(TpLista));

  Novo -> info = e;
  Novo -> prox = Lista;

  return Novo;
}

void ImprimirLista(TpLista *Lista){
  TpLista *TemporarioImpressao;

  for(TemporarioImpressao = Lista; TemporarioImpressao != NULL; TemporarioImpressao = TemporarioImpressao -> prox){
    printf("\nInformação: %d\t", TemporarioImpressao -> info);
  }
  printf("\n\n");
}

int Evazia(TpLista *Lista){
  if(Lista == NULL)
    return 1;
  else
    return 0;
}
int Evazia(TpLista *Lista);
