#include "..\..\..\..\include\Entidade\Personagem\Jogador\Jogador.hpp"

#include <cmath>

Jungle::Entidade::Personagem::Jogador::Jogador::Jogador(const sf::Vector2f pos, const sf::Vector2f tam):
    Personagem(pos, tam, VELOCIDADE_JOGADOR, IDs::IDs::jogador), noChao(false)

{
    corpo.setFillColor(sf::Color::Blue);
    inicializa();
}


void Jungle::Entidade::Personagem::Jogador::Jogador::inicializa(){
    
}

void Jungle::Entidade::Personagem::Jogador::Jogador::atualizar(){
    /**
        * @ return void 
        * 
        * Faz o movimeto do jogador para direita e esquerda
     */
    atualizarPosicao();
}

void Jungle::Entidade::Personagem::Jogador::Jogador::colisao(Entidade* outraEntidade, sf::Vector2f ds){
    switch(outraEntidade->getID()){
        case (IDs::IDs::inimigo):
        {
            //std::cout << "Pode bater no inimigo e inimigo pode bater no jogador" << std::endl;
        }
        break;
        case(IDs::IDs::plataforma):
        {
            
        }
    }   
}

void Jungle::Entidade::Personagem::Jogador::Jogador::pular(){
    if(noChao){
        velFinal.y = -sqrt(2.0f * GRAVIDADE * TAMANHO_PULO);
        noChao = false;
    }
}

void Jungle::Entidade::Personagem::Jogador::Jogador::podePular(){
    noChao = true;
}