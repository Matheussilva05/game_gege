#include "..\..\include\Observador\Observador.hpp"
#include "..\..\include\Gerenciador\GerenciadorEvento.hpp"

namespace Jungle { 

    namespace Observador {

        Gerenciador::GerenciadorEvento* Observador::pEvento = Gerenciador::GerenciadorEvento::getGerenciadorEvento();

        Observador::Observador():
            ativar(true)
        {
            pEvento->addObservador(this);
        }

        Observador::~Observador(){

        }

        void Observador::removerObservador(){
            pEvento->removerObservador(this);
        }

        void Observador::ativarObservador(){
            ativar = true;
        }

        void Observador::desativarObservador(){
            ativar = false;
        }

        const bool Observador::getAtivar() const {
            return ativar;
        }

    }

}