    #include <iostream> 
    #include <vector>
     
    int main()
    {
        // Cria um vetor contendo inteiros 
        std::vector < int > v = { 7 , 5 , 16 , 8 };
     
        // Adiciona mais dois inteiros ao vetor 
        v.push_back(25);
        v.push_back(13); 
     
        // Imprime o vetor 
        std::cout << "v = { ";
        for (int n : v) 
        {
           
            std::cout << n << " ";
        }
        std::cout << "}; \n ";
        return 0;
    }