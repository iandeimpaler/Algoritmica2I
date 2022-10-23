int cn; //cantidad de nodos
vector< vector<int> > ady; //matriz de adyacencia

vector< vector<int> > Grafo :: kruskal(){
    vector< vector<int> > adyacencia = this->ady;
    vector< vector<int> > arbol(cn);
    vector<int> pertenece(cn);
    
    for(int i = 0; i < cn; i++){
        arbol[i] = vector<int> (cn, 0);
        pertenece[i] = i;
    }

    int nodoA;
    int nodoB;
    int arcos = 1;
    while(arcos < cn){
        int min = INF;
        for(int i = 0; i < cn; i++)
            for(int j = 0; j < cn; j++)
                if(min > adyacencia[i][j] && adyacencia[i][j]!=0 && pertenece[i] != pertenece[j]){
                    min = adyacencia[i][j];
                    nodoA = i;
                    nodoB = j;
                }
        
        if(pertenece[nodoA] != pertenece[nodoB]){
            arbol[nodoA][nodoB] = min;
            arbol[nodoB][nodoA] = min;

        	int temp = pertenece[nodoB];
        	pertenece[nodoB] = pertenece[nodoA];
        	for(int k = 0; k < cn; k++)
        		if(pertenece[k] == temp)
        			pertenece[k] = pertenece[nodoA];
            
            arcos++;
        }
    }
    return arbol;
}
