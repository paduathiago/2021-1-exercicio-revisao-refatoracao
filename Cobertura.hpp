#ifndef COBERTURA_HPP
#define COBERTURA_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"
using namespace std;

class Cobertura : public Imovel {
    public:
        double comissao() override{ 
            double valor_total = this->valor();

            return valor_total * comissao_taxa;
        }

        void print() override{

            std::cout << "[Cobertura]" << endl;
            Imovel::print();
            std::cout << "Area: " << _area << endl
                    << "  Quartos: " << _quartos << endl
                    << "  Banheiros: " << _banheiros << endl
                    << "  Vagas: " << _vagas << endl
                    << "Taxa de Comissão: " << comissao_taxa * 100 << "%" << endl
                    << "Valor Comissão: R$ " << fixed << setprecision(2) << _valor_comissao << endl
                    << "Valor de Venda: R$ " << fixed << setprecision(2) << _valor_venda << endl;
        }
    private:
        static constexpr double comissao_taxa = 0.1;
};

#endif