#include <iostream>
#include <Windows.h>

using namespace std;

int main()
{
    // variaveis //

    char decisaoAventura;
    int decisaoPistas = 0, artefato = 0, opcaoOculosEstranho = 0, opcaoFumanca = 0, opcaoElfos = 0, respostaFloresta = 0, decisaoRespostaFl = 0, golpeCriatura = 0, perguntaAtaque = 0, decisaoAtaque = 0, falarComSer = 0, escolhaLocalizacao = 0, acreditarPista = 0, pegadas = 0, ajudarGrifo = 0, decisaoSalaMisteriosa = 0, decisaoCaverna = 0, corteLissandre = 0, comerAmora = 0, armadura = 0;
    bool quartoMestre = false, floresta = false;

    SetConsoleOutputCP(CP_UTF8);

    // introdução da história para o usuário//
    cout << "Bem Vindo a Ilha de Eldor" << endl
        << endl;

    cout << "No reino de Eldor, onde os segredos do tempo se entrelaçam com a magia ancestral, uma jornada extraordinária está prestes a começar.\n"
        << endl;
    cout << "Nos limites da vasta floresta encantada, ergue-se a antiga torre de Ions, lar do grande mestre dos guerreiros, Chronos.\n"
        << endl;
    cout << "Jovens aspirantes treinam sob sua orientação, buscando desvendar os mistérios que envolvem o passado e o futuro. \n"
        << endl;

    system("PAUSE");
    system("CLS");

    cout << "Entre esses discípulos destemidos, encontra-se um jovem de coração valente e espírito intrépido, conhecido como Balam." << endl;
    cout << "Determinado a honrar o legado de seu mestre, ele se lança em uma busca audaciosa." << endl;
    cout << "Quando Chronos desaparece misteriosamente, levando-o por trilhas desconhecidas e desafiando os limites entre o tempo e o espaço. " << endl;

    system("PAUSE");
    system("CLS");

    cout << "Ao atravessar os véus do tempo, Balam se vê confrontado não apenas com os perigos de Eldor, mas também com um enigma inesperado: o colapso do seu artefato mágico de orientação." << endl;
    cout << "Em um mundo onde a magia e a tecnologia se entrelaçam, ele deve agora combinar seus conhecimentos ancestrais com as novas ferramentas que encontra pelo caminho para desvendar os mistérios que se desenrolam diante dele.  " << endl;

    system("PAUSE");
    system("CLS");

    cout << "Enquanto as sombras do desconhecido o cercam e os segredos de Eldor o chamam, Balam embarca em uma jornada épica, onde o destino o aguarda entre os fiapos do tempo e os segredos enterrados no passado." << endl;
    cout << "A chave para desvendar esses mistérios pode muito bem residir na coragem e na sabedoria que ele traz consigo, enquanto ele luta para encontrar o caminho de volta para casa e desvendar o destino de seu mestre perdido.  " << endl;

    system("PAUSE");
    system("CLS");

    // decisão do usuario aceitar//
    cout << "Vai encarar essa aventura? (s/n)" << endl;
    cin >> decisaoAventura;

    if (decisaoAventura == 's' || decisaoAventura == 'S')
    {
        system("CLS");
        cout << "Balam se encontrava no coração da torre de Ions, cercado pela atmosfera carregada de mistério e preocupação. Ele havia perguntado a todos os que estavam na torre sobre o paradeiro de Chronos, mas ninguém tinha notícias do mestre. Um silêncio tenso pairava sobre o salão. " << endl;
        system("PAUSE");
        system("CLS");
        cout << "Decidido a agir, Balam se voluntariou para encontrar Chronos, sabendo que o destino de seu mestre estava em suas mãos. Em reconhecimento à sua coragem, os anciãos da torre lhe confiaram um dispositivo de orientação, uma relíquia ancestral que poderia apontar o caminho para Chronos, desde que ele permanecesse firme em sua busca. " << endl;

        system("PAUSE");
        system("CLS");

        cout << "Diante das opções que se apresentavam diante dele, Balam ponderou sua próxima ação. Ele podia seguir para o quarto de Chronos, na esperança de encontrar pistas que pudessem revelar o paradeiro de seu mestre. Ou então, poderia se aventurar na densa floresta que cercava a torre, em busca de rastros e pistas que pudessem guiá-lo na direção certa. A escolha está em suas mãos! " << endl
            << endl
            << endl;

        cout << "1 - Buscar pistas no quarto do Mestre. " << endl;
        cout << "2- Buscar pistas na floresta . " << endl;
        cin >> decisaoPistas;

        system("CLS");

        switch (decisaoPistas)
        {
        case 1:
            // decisaoPista: Quadro do Mestre
            decisaoAventura = true;
            quartoMestre = true;
            break;
        case 2:
            // decisaoPista: Floresta
            decisaoAventura = true;
            floresta = true;
            break;
        default:
            cout << "Opção Inválida";
            break;
        }

        if (decisaoAventura && quartoMestre)
        {

            cout << "O coração de Balam batia com determinação, impulsionando-o a fazer sua escolha. Com um suspiro profundo, ele tomou sua decisão, preparando-se para a jornada que o aguardava. Seu destino estava traçado, e ele estava pronto para enfrentar o desconhecido em sua busca por Chronos. " << endl;

            system("PAUSE");
            system("CLS");

            cout << "Balam decide entrar no quarto de Chronos em busca de pistas sobre o paradeiro de seu mestre. Lá dentro, ele se depara com uma coleção de itens do seu mestre em cima de uma bancada." << endl;
            cout << "Entre os objetos, ele encontra três artefatos: uma espada prateada, um medalhão reluzente e um frasco com líquido brilhante. Ele decide inspecioná-lo em busca de pistas, porém qual ele devia escolher primeiro? " << endl;

            cout << "1-Espada prateada" << endl;
            cout << "2-O medalhão reluzente" << endl;
            cout << "3-Um frasco com líquido brilhante " << endl;
            cout << "4-Um óculos estranho " << endl;
            cin >> artefato;

            bool espadaPrateada = false;
            bool medalhaoReluzente = false;
            bool liquidoBrilhante = false;
            bool oculosEstranho = false;

            switch (artefato)
            {
            case 1:
                espadaPrateada = true;
                break;

            case 2:
                medalhaoReluzente = true;
                break;

            case 3:
                liquidoBrilhante = true;
                break;
            case 4:
                oculosEstranho = true;
                break;

            default:
                cout << "Opção Inválida";
                break;
            }

            if (espadaPrateada)
            {
                system("CLS");
                cout << "Após tocar na espada prateada, o guerreiro fica momentaneamente cego e acorda em uma cidade espacial futurística, vazia exceto por um ser estranho vestindo uma armadura negra. Decida:" << endl
                    << endl;
                cout << "1-Falar com o ser." << endl;
                cout << "2-Não falar com ser. " << endl;
                cin >> falarComSer;

                if (falarComSer == 1)
                {
                    system("CLS");
                    cout << "Balam se aproxima do ser e pergunta sobre sua localização O ser, chamado Vex, confirma a identidade de Balam e explica sua situação. Ele revela que Lissandre, uma ser de primeiro plano, levou seu mestre para as Cavernas do Vazio. Vex adverte Balam sobre a armadilha da espada que ele pegou, alertando-o de que perderá gradualmente os movimentos da mão. Ele oferece um mapa para encontrar seu mestre ou a opção de retornar para casa. Balam precisa decidir se deseja continuar sua busca. Mesmo estando confuso com a situação. " << endl
                        << endl;
                    cout << "1-Voltar para casa " << endl;
                    cout << "2-Ir atrás deles " << endl;
                    cin >> escolhaLocalizacao;

                    if (escolhaLocalizacao == 1)
                    {
                        system("CLS");
                        cout << "Balam decide voltar para casa e Vex o teletransporta de volta para o quarto do mestre. No entanto, as feridas da maldição da espada o deixaram incapaz de segurá-la, impedindo-o de lutar ou treinar. O mistério de Chronos permanece sem solução e provavelmente nunca será resolvido. " << endl;
                        cout << "Acredito que você pode fazer escolhas melhores se tentar novamente. Que tal tentar descobrir os outros finais? " << endl;
                        cout << "Obrigado por jogar!" << endl;
                    }
                    else if (escolhaLocalizacao == 2)
                    {
                        system("CLS");
                        cout << "Balam, portando um mapa, chega à localidade dos dois. Encontra uma mulher alta com uma máquina que dispara um feixe de laser. Ao tentar se defender, Balam é atingido no peito e morre. O destino da mulher e de seu mestre permanece desconhecido. " << endl;
                        cout << "É, a história não acabou bem para nosso caro amigo Balam, porém você pode tentar fazer escolhas diferentes em busca de um caminho melhor. Afinal, é loucura querer obter resultados diferentes fazendo tudo exatamente igual. " << endl;
                        cout << "Obrigado por jogar!" << endl;
                    }
                    else
                    {
                        cout << "Opção Inválida";
                    }
                }
                else if (falarComSer == 2)
                {
                    system("CLS");
                    cout << "Balam, temendo o ser misterioso, decide não falar com ele e explora a cidade em busca de pistas. Sua mão começa a deteriorar-se gradualmente após tocar na espada. Encontra uma mulher com aparência humana, mas é alertado pelo ser misterioso para não se aproximar dela. A mulher, por sua vez, afirma que o ser está tentando enganá-lo e machucá-lo. Agora, Balam se vê diante de duas escolhas, sem saber em quem confiar. " << endl
                        << endl;
                    cout << "1-Acreditar na moça" << endl;
                    cout << "2-Acreditar no ser" << endl;
                    cin >> acreditarPista;

                    if (acreditarPista == 1)
                    {
                        system("CLS");
                        cout << "Balam vai e direção da mulher com medo do ser desconhecido, então a mulher fala para o guerreiro: " << endl;
                        cout << "\"Obrigada por confiar em mim, agora me dê sua espada para que eu possa curar as feridas que ela deixou em você\" " << endl;
                        cout << "O guerreiro nem um pouco desconfiado deu a ela que no momento em que pega a espada a finca em seu peito. Balam cai sangrando no chão e morre. Não se tem mais conhecimento do paradeiro da moca ou de seu mestre. " << endl;
                        cout << "É, a história não acabou bem para nosso caro amigo Balam, porém você pode tentar fazer escolhas diferentes em busca de um caminho melhor. Afinal, é loucura querer obter resultados diferentes fazendo tudo exatamente igual. " << endl;
                        cout << "Obrigado por jogar!" << endl;
                    }
                    else if (acreditarPista == 2)
                    {
                        system("CLS");
                        cout << "Balam, desconfiado da mulher, confia no ser misterioso. Este o teletransporta de volta para o quarto de seu mestre, aconselhando-o a nunca contar o ocorrido e seguir em frente. Embora as feridas da maldição da espada tenham parado, Balam perde a capacidade de segurá-la, encerrando sua jornada de luta e treinamento. O mistério envolvendo Chronos permanece sem solução. " << endl;
                        cout << "Acredito que você pode fazer escolhas melhores se tentar novamente. Que tal tentar descobrir os outros finais? " << endl;
                        cout << "Obrigado por jogar!" << endl;
                    }
                    else
                    {
                        cout << "Opção Inválida" << endl;
                    }
                }
                else
                {
                    cout << "Opção Inválida";
                }
            }

            if (medalhaoReluzente)
            {
                system("CLS");
                cout << "Após tocar no medalhão, o guerreiro fica momentaneamente cego e acorda em uma cidade espacial futurística, vazia exceto por um ser estranho vestindo uma armadura negra. " << endl
                    << endl;
                cout << "1-Falar com o ser:" << endl;
                cout << "2- Não falar com o ser:" << endl;
                cin >> falarComSer;

                if (falarComSer == 1)
                {
                    system("CLS");
                    cout << "Balam se aproxima do ser e pergunta sobre sua localização O ser, chamado Vex, confirma a identidade de Balam e explica sua situação. Ele revela que Lissandre, uma ser de primeiro plano, levou seu mestre para as Cavernas do Vazio. Vex adverte Balam sobre a armadilha da espada que ele pegou, alertando-o de que perderá gradualmente os movimentos da mão. Ele oferece um mapa para encontrar seu mestre ou a opção de retornar para casa. Balam precisa decidir se deseja continuar sua busca. Mesmo estando confuso com a situação. " << endl
                        << endl;
                    cout << "1-Voltar para casa " << endl;
                    cout << "2-Ir atrás deles " << endl;
                    cin >> escolhaLocalizacao;

                    if (escolhaLocalizacao == 1)
                    {
                        system("CLS");
                        cout << "Balam decide voltar para casa e Vex o teletransporta de volta para o quarto do mestre. No entanto, as feridas da maldição da espada o deixaram incapaz de segurá-la, impedindo-o de lutar ou treinar. O mistério de Chronos permanece sem solução e provavelmente nunca será resolvido. " << endl;
                        cout << "Acredito que você pode fazer escolhas melhores se tentar novamente. Que tal tentar descobrir os outros finais? " << endl;
                        cout << "Obrigado por jogar!" << endl;
                    }
                    else if (escolhaLocalizacao == 2)
                    {
                        system("CLS");
                        cout << "Balam, portando um mapa, chega à localidade dos dois. Encontra uma mulher alta com uma máquina que dispara um feixe de laser. Ao tentar se defender, Balam é atingido no peito e morre. O destino da mulher e de seu mestre permanece desconhecido. " << endl;
                        cout << "É, a história não acabou bem para nosso caro amigo Balam, porém você pode tentar fazer escolhas diferentes em busca de um caminho melhor. Afinal, é loucura querer obter resultados diferentes fazendo tudo exatamente igual. " << endl;
                        cout << "Obrigado por jogar!" << endl;
                    }
                    else
                    {
                        cout << "Opção Inválida";
                    }
                }
                else if (falarComSer == 2)
                {
                    system("CLS");
                    cout << "Balam, temendo o ser misterioso, decide não falar com ele e explora a cidade em busca de pistas. Sua mão começa a deteriorar-se gradualmente após tocar na espada. Encontra uma mulher com aparência humana, mas é alertado pelo ser misterioso para não se aproximar dela. A mulher, por sua vez, afirma que o ser está tentando enganá-lo e machucá-lo. Agora, Balam se vê diante de duas escolhas, sem saber em quem confiar. " << endl
                        << endl;
                    cout << "1-Acreditar na moça" << endl;
                    cout << "2-Acreditar no ser" << endl;
                    cin >> acreditarPista;

                    if (acreditarPista == 1)
                    {
                        system("CLS");
                        cout << "Balam vai e direção da mulher com medo do ser desconhecido, então a mulher fala para o guerreiro: " << endl;
                        cout << "\"Obrigada por confiar em mim, agora me dê sua espada para que eu possa curar as feridas que ela deixou em você\" " << endl;
                        cout << "O guerreiro nem um pouco desconfiado deu a ela que no momento em que pega a espada a finca em seu peito. Balam cai sangrando no chão e morre. Não se tem mais conhecimento do paradeiro da moca ou de seu mestre. " << endl;
                        cout << "É, a história não acabou bem para nosso caro amigo Balam, porém você pode tentar fazer escolhas diferentes em busca de um caminho melhor. Afinal, é loucura querer obter resultados diferentes fazendo tudo exatamente igual. " << endl;
                        cout << "Obrigado por jogar!" << endl;
                    }
                    else if (acreditarPista == 2)
                    {
                        system("CLS");
                        cout << "Balam, desconfiado da mulher, confia no ser misterioso. Este o teletransporta de volta para o quarto de seu mestre, aconselhando-o a nunca contar o ocorrido e seguir em frente. Embora as feridas da maldição da espada tenham parado, Balam perde a capacidade de segurá-la, encerrando sua jornada de luta e treinamento. O mistério envolvendo Chronos permanece sem solução. " << endl;
                        cout << "Acredito que você pode fazer escolhas melhores se tentar novamente. Que tal tentar descobrir os outros finais? " << endl;
                        cout << "Obrigado por jogar!" << endl;
                    }
                    else
                    {
                        cout << "Opção Inválida" << endl;
                    }
                }
                else
                {
                    cout << "Opção Inválida" << endl;
                }
            }

            if (liquidoBrilhante)
            {
                system("CLS");
                cout << "O Guerreiro, intrigado pela luz cristalina, abre o frasco, liberando uma fina fumaça com um cheiro desconhecido. A fumaça se condensa em palavras, e o guerreiro sente o impulso de lê-las. Subitamente, uma luz ofuscante o envolve, e quando sua visão retorna, ele se encontra em uma cidade espacial futurística, vazia exceto por um ser estranho. Agora, ele tem duas opções: " << endl
                    << endl;
                cout << "1-Falar com o ser" << endl;
                cout << "2-Não falar com ser" << endl;
                cin >> falarComSer;

                if (falarComSer == 1)
                {
                    system("CLS");
                    cout << "Balam, após conversar com o ser chamado Bardo e receber informações sobre sua missão recebe uma espada para ajudar em sua batalha, e descobre que frasco pode levá-lo para casa, partindo em busca de seu mestre. Ao chegar nas Cavernas do Vazio, ele se depara com Lissandre e um dispositivo de aparência ameaçadora. Lissandre ativa o dispositivo, disparando um feixe de laser mágico em direção a Balam, que se vê obrigado a se esconder atrás de uma rocha. Agora, ele precisa decidir seu próximo passo: " << endl
                        << endl;
                    cout << "1-Tomar o líquido" << endl;
                    cout << "2-Lutar bravamente" << endl;
                    cin >> decisaoCaverna;

                    if (decisaoCaverna == 1)
                    {
                        system("CLS");
                        cout << "Balam decide tomar o líquido, mas é atingido pelo laser de Lissandre antes de consumi-lo completamente. Isso causa uma falha na viagem, deixando Balam preso no limbo cósmico para sempre. Enquanto isso, Lissandre deixa Chronos trancado nas cavernas até definhar e é julgada pelo tribunal cósmico por seus crimes. Bardo apaga qualquer memória das pessoas sobre o mestre e o guerreiro, e o mundo volta ao equilíbrio, sem qualquer vestígio deles. " << endl;
                        cout << "Acredito que você pode fazer escolhas melhores se tentar novamente. Que tal tentar descobrir os outros finais? " << endl;
                        cout << "Obrigado por jogar!" << endl;
                    }
                    else if (decisaoCaverna == 2)
                    {
                        system("CLS");
                        cout << "Balam decide tomar o líquido, mas é atingido pelo laser de Lissandre antes de consumi-lo completamente. Isso causa uma falha na viagem, deixando Balam preso no limbo cósmico para sempre. Enquanto isso, Lissandre deixa Chronos trancado nas cavernas até definhar e é julgada pelo tribunal cósmico por seus crimes. Bardo apaga qualquer memória das pessoas sobre o mestre e o guerreiro, e o mundo volta ao equilíbrio, sem qualquer vestígio deles. " << endl;
                        cout << "A nossa aventura acabou por aqui, parabéns pelas suas escolhas, você conseguiu chegar a um dos melhores finais possíveis, fique à vontade para descobrir os outros finais. " << endl;
                        cout << "Obrigado por jogar!" << endl;
                    }
                    else
                    {
                        cout << "Opção Inválida";
                    }
                }
                else if (falarComSer == 2)
                {
                    system("CLS");
                    cout << "Balam, temendo o ser misterioso, decide não falar com ele e explora a cidade em busca de pistas. Sua mão começa a deteriorar-se gradualmente após tocar na espada. Encontra uma mulher com aparência humana, mas é alertado pelo ser misterioso para não se aproximar dela. A mulher, por sua vez, afirma que o ser está tentando enganá-lo e machucá-lo. Agora, Balam se vê diante de duas escolhas, sem saber em quem confiar. " << endl
                        << endl;
                    cout << "1-Acreditar na moça" << endl;
                    cout << "2-Acreditar no ser" << endl;
                    cin >> acreditarPista;

                    if (acreditarPista == 1)
                    {
                        system("CLS");
                        cout << "Balam vai e direção da mulher com medo do ser desconhecido, então a mulher fala para o guerreiro: " << endl;
                        cout << "\"Obrigada por confiar em mim, agora me dê sua espada para que eu possa curar as feridas que ela deixou em você\" " << endl;
                        cout << "O guerreiro nem um pouco desconfiado deu a ela que no momento em que pega a espada a finca em seu peito. Balam cai sangrando no chão e morre. Não se tem mais conhecimento do paradeiro da moca ou de seu mestre. " << endl;
                        cout << "É, a história não acabou bem para nosso caro amigo Balam, porém você pode tentar fazer escolhas diferentes em busca de um caminho melhor. Afinal, é loucura querer obter resultados diferentes fazendo tudo exatamente igual.  " << endl;
                        cout << "Obrigado por jogar!" << endl;
                    }
                    else if (acreditarPista == 2)
                    {
                        system("CLS");
                        cout << "Balam, desconfiado da mulher, confia no ser misterioso. Este o teletransporta de volta para o quarto de seu mestre, aconselhando-o a nunca contar o ocorrido e seguir em frente. Embora as feridas da maldição da espada tenham parado, Balam perde a capacidade de segurá-la, encerrando sua jornada de luta e treinamento. O mistério envolvendo Chronos permanece sem solução. " << endl;
                        cout << "Acredito que você pode fazer escolhas melhores se tentar novamente. Que tal tentar descobrir os outros finais? " << endl;
                        cout << "Obrigado por jogar!" << endl;
                    }
                    else
                    {
                        cout << "Opção Inválida" << endl;
                    }
                }
                else
                {
                    cout << "Opção Inválida" << endl;
                }
            }

            if (oculosEstranho)
            {
                system("CLS");
                cout << "Balam é teletransportado para um local desconhecido após examinar os óculos. Ele se encontra em uma clareira, onde decide entre dois caminhos: um leva a construções distantes, indicadas por seu dispositivo de localização ,que seguida para de funcionar segui; o outro, para uma floresta com fumaça. Ele deve decidir para onde ir. " << endl
                    << endl;

                cout << "1-Ir em direção das construções distantes. " << endl;
                cout << "2-Investigar a fumaça que está saindo na floresta." << endl;

                cin >> opcaoOculosEstranho;

                if (opcaoOculosEstranho == 1)
                {
                    system("CLS");
                    cout << "Balam segue em direção às construções distantes, enfrentando uma série de desafios em Eldor, incluindo criaturas selvagens e terrenos perigosos. Após dias de viagem, ele chega ao sinistro Desfiladeiro da Perdição, onde enfrenta armadilhas mágicas e criaturas sombrias. Apesar de sua determinação, ele é dominado pelos perigos e perece em sua busca por aventura e redenção, lembrando-nos dos perigos de subestimar lugares desconhecidos e das consequências das escolhas impulsivas. " << endl;
                    cout << "É, a história não acabou bem para nosso caro amigo Balam, porém você pode tentar fazer escolhas diferentes em busca de um caminho melhor. Afinal, é loucura querer obter resultados diferentes fazendo tudo exatamente igual.  " << endl;
                    cout << "Obrigado por jogar!" << endl;
                }

                else if (opcaoOculosEstranho == 2)
                {
                    system("CLS");
                    cout << "Balam escolhe o caminho da floresta com fumaça e se depara com uma figura solitária às margens de um riacho. Ele decide:" << endl
                        << endl;

                    cout << "1-Interagir com a figura." << endl;
                    cout << "2-Passar discretamente e seguir em direção à fumaça." << endl;

                    cin >> opcaoOculosEstranho;

                    if (opcaoOculosEstranho == 1)
                    {
                        system("CLS");
                        cout << "Balam se aproxima da figura cansada, notando suas belas joias, mas seu desejo de obter respostas sobre a floresta e Chronos é mais forte. Com cautela, ele inicia a conversa, expressando suas preocupações. A figura compartilha informações vagas sobre a floresta e Chronos, mas Balam fica insatisfeito. Ele decide: " << endl
                            << endl;
                        cout << "1- Continuar a conversa. " << endl;
                        cout << "2-Prosseguir sem mais delongas." << endl;
                        cin >> respostaFloresta;

                        if (respostaFloresta == 1)
                        {
                            system("CLS");
                            cout << "Balam persiste na conversa, expressando sua preocupação e necessidade de encontrar Chronos. No entanto, a figura misteriosa mostra sinais de impaciência e hostilidade, sugerindo que a conversa está tomando um rumo perigoso. Quando Balam continua a pressionar por respostas, a criatura responde de maneira enigmática e ameaçadora. Balam fica intranquilo, mas determinado a resolver o mistério em torno de Chronos. Ele deve decidir: " << endl
                                << endl;
                            cout << "1-Confrontar a criatura." << endl;
                            cout << "2-Retirar-se." << endl;
                            cin >> decisaoRespostaFl;

                            if (decisaoRespostaFl == 1)
                            {
                                system("CLS");
                                cout << "Diante do golpe iminente da criatura com uma adaga, Balam é confrontado com duas opções: " << endl
                                    << endl;
                                cout << "1-Tentar pegar a adaga. " << endl;
                                cout << "2-Desviar do golpe." << endl;
                                cin >> golpeCriatura;

                                if (golpeCriatura == 1)
                                {
                                    system("CLS");
                                    cout << "Balam tenta pegar a adaga da criatura durante o ataque e consegue. Ele faz perguntas sobre Chronos, mas a criatura se recusa a cooperar. Balam precisa decidir entre: " << endl
                                        << endl;
                                    cout << "1-Ameaçar a criatura de morte. " << endl;
                                    cout << "2-Tentar uma abordagem mais diplomática." << endl;
                                    cin >> perguntaAtaque;

                                    if (perguntaAtaque == 1)
                                    {
                                        system("CLS");
                                        cout << "Balam ameaça a criatura, que cede à pressão da razão e revela informações confusas sobre Chronos e seu paradeiro. Antes que ele possa fazer mais perguntas, a criatura desaparece misteriosamente. Sozinho na floresta, Balam escuta passos e se depara com três elfos se aproximando. Ele se sente encurralado e precisa decidir rapidamente:" << endl
                                            << endl;
                                        cout << "1-Tentar explicar o que estava acontecendo." << endl;
                                        cout << "2-Preparar-se para a batalha." << endl;
                                        cin >> decisaoAtaque;

                                        if (decisaoAtaque == 1)
                                        {
                                            system("CLS");
                                            cout << "Balam explica a situação aos elfos, que concordam em ajudá-lo a resgatar seu mestre Chronos e explicam onde estão e que  tem que frustrar os planos da poderosa maga Lissandre. Eles partem em direção à fortaleza onde Chronos está preso, cientes de que hoje é a noite da lua de sangue, quando Lissandre pode abrir portais para outras dimensões. Os elfos sugerem que Balam pode ser o herói da profecia que salvará o mundo. " << endl;

                                            system("PAUSE");
                                            system("CLS");

                                            cout << "Balam, acompanhado pelos elfos, chega ao Desfiladeiro da Perdição que fica no caminho do castelo de Lissandre, onde se depara com uma sala misteriosa envolta em sombras e ossos. Acreditando que somente o Escolhido poderia decifrar os enigmas da sala, Balam sente o peso da responsabilidade sobre seus ombros. Ele deve escolher entre: " << endl
                                                << endl;
                                            cout << "1-Tentar decifrar os enigmas da sala. " << endl;
                                            cout << "2-Arriscar tudo e atravessar à força." << endl;

                                            cin >> decisaoSalaMisteriosa;

                                            if (decisaoSalaMisteriosa == 1)
                                            {
                                                system("CLS");
                                                cout << "Balam decifra os enigmas na sala misteriosa, permitindo que ele e os elfos atravessem o Desfiladeiro da Perdição em segurança. Eles enfrentam Lissandre em seu castelo, onde Balam usa seu dispositivo para enfraquecê-la gradualmente. O dispositivo, além de localizar Chronos, é revelado como capaz de abrir brechas nas dimensões quando totalmente energizado. Com coragem, Balam derrota Lissandre, salvando Eldor e libertando Chronos. Triunfante, ele retorna ao seu lar, sabendo que sua bravura restaurou a paz. " << endl;
                                                cout << "A nossa aventura acabou por aqui, parabéns pelas suas escolhas, você conseguiu chegar a um dos melhores finais possíveis, fique à vontade para descobrir os outros finais. " << endl;
                                                cout << "Obrigado por jogar" << endl;
                                            }
                                            else if (decisaoSalaMisteriosa == 2)
                                            {
                                                system("CLS");
                                                cout << "Balam arrisca tudo para atravessar o Desfiladeiro da Perdição à força, enfrentando armadilhas mágicas e criaturas sombrias. Ele é mortalmente ferido durante a jornada, deixando seu mestre sem esperança de resgate e Eldor à mercê das forças das trevas. Sua morte resulta em caos e permite que a tirania de Lissandre prevaleça, condenando os reinos à escuridão e destruição. " << endl;
                                                cout << "É, a história não acabou bem para nosso caro amigo Balam, porém você pode tentar fazer escolhas diferentes em busca de um caminho melhor. Afinal, é loucura querer obter resultados diferentes fazendo tudo exatamente igual." << endl;
                                                cout << "Obrigado por tudo!" << endl;
                                            }
                                            else
                                            {
                                                cout << "Opção Inválida" << endl;
                                            }


                                        }
                                        else if (decisaoAtaque == 2)
                                        {
                                            system("CLS");
                                            cout << "Os elfos imobilizam Balam e o informam que ele é o escolhido por ter roubado a adaga que pode drenar a energia mágica dos servos de Lissandre. Eles explicam que fazem parte da resistência contra Lissandre e o preparam para a batalha, instruindo-o sobre seu papel e os perigos que enfrentarão juntos. " << endl;

                                            system("PAUSE");
                                            system("CLS");

                                            cout << "Balam, acompanhado pelos elfos, chega ao Desfiladeiro da Perdição que fica no caminho do castelo de Lissandre, onde se depara com uma sala misteriosa envolta em sombras e ossos. Acreditando que somente o Escolhido poderia decifrar os enigmas da sala, Balam sente o peso da responsabilidade sobre seus ombros. Ele deve escolher entre: " << endl
                                                << endl;
                                            cout << "1-Tentar decifrar os enigmas da sala. " << endl;
                                            cout << "2-Arriscar tudo e atravessar à força." << endl;

                                            cin >> decisaoSalaMisteriosa;

                                            if (decisaoSalaMisteriosa == 1)
                                            {
                                                system("CLS");
                                                cout << "Balam decifra os enigmas na sala misteriosa, permitindo que ele e os elfos atravessem o Desfiladeiro da Perdição em segurança. Eles enfrentam Lissandre em seu castelo, onde Balam usa seu dispositivo para enfraquecê-la gradualmente. O dispositivo, além de localizar Chronos, é revelado como capaz de abrir brechas nas dimensões quando totalmente energizado. Com coragem, Balam derrota Lissandre, salvando Eldor e libertando Chronos. Triunfante, ele retorna ao seu lar, sabendo que sua bravura restaurou a paz. " << endl;
                                                cout << "A nossa aventura acabou por aqui, parabéns pelas suas escolhas, você conseguiu chegar a um dos melhores finais possíveis, fique à vontade para descobrir os outros finais. " << endl;
                                                cout << "Obrigado por jogar" << endl;
                                            }
                                            else if (decisaoSalaMisteriosa == 2)
                                            {
                                                system("CLS");
                                                cout << "Balam arrisca tudo para atravessar o Desfiladeiro da Perdição à força, enfrentando armadilhas mágicas e criaturas sombrias. Ele é mortalmente ferido durante a jornada, deixando seu mestre sem esperança de resgate e Eldor à mercê das forças das trevas. Sua morte resulta em caos e permite que a tirania de Lissandre prevaleça, condenando os reinos à escuridão e destruição. " << endl;
                                                cout << "É, a história não acabou bem para nosso caro amigo Balam, porém você pode tentar fazer escolhas diferentes em busca de um caminho melhor. Afinal, é loucura querer obter resultados diferentes fazendo tudo exatamente igual." << endl;
                                                cout << "Obrigado por tudo!" << endl;
                                            }
                                            else
                                            {
                                                cout << "Opção Inválida" << endl;
                                            }
                                        }
                                        else
                                        {
                                            cout << "Opção Inválida" << endl;
                                        }
                                    }
                                    else if (perguntaAtaque == 2)
                                    {
                                        system("CLS");
                                        cout << "Balam decide baixar a adaga e tentar convencer a criatura a cooperar através de uma abordagem mais diplomática. Ele oferecerá uma troca, a adaga pelas informações e tenta apelar para a razão da criatura.  " << endl;
                                        cout << "Balam ameaça a criatura, que cede à pressão da razão e revela informações confusas sobre Chronos e seu paradeiro. Antes que ele possa fazer mais perguntas, a criatura desaparece misteriosamente. Sozinho na floresta, Balam escuta passos e se depara com três elfos se aproximando. Ele se sente encurralado e precisa decidir rapidamente: " << endl << endl;

                                        cout << "1-Tentar explicar o que estava acontecendo." << endl;
                                        cout << "2-Preparar-se para a batalha." << endl;
                                        cin >> decisaoAtaque;

                                        if (decisaoAtaque == 1)
                                        {
                                            system("CLS");
                                            cout << "Balam explica a situação aos elfos, que concordam em ajudá-lo a resgatar seu mestre Chronos e explicam onde estão e que  tem que frustrar os planos da poderosa maga Lissandre. Eles partem em direção à fortaleza onde Chronos está preso, cientes de que hoje é a noite da lua de sangue, quando Lissandre pode abrir portais para outras dimensões. Os elfos sugerem que Balam pode ser o herói da profecia que salvará o mundo. " << endl;

                                            system("PAUSE");
                                            system("CLS");

                                            cout << "Balam, acompanhado pelos elfos, chega ao Desfiladeiro da Perdição que fica no caminho do castelo de Lissandre, onde se depara com uma sala misteriosa envolta em sombras e ossos. Acreditando que somente o Escolhido poderia decifrar os enigmas da sala, Balam sente o peso da responsabilidade sobre seus ombros. Ele deve escolher entre: " << endl
                                                << endl;
                                            cout << "1-Tentar decifrar os enigmas da sala. " << endl;
                                            cout << "2-Arriscar tudo e atravessar à força." << endl;

                                            cin >> decisaoSalaMisteriosa;

                                            if (decisaoSalaMisteriosa == 1)
                                            {
                                                system("CLS");
                                                cout << "Balam decifra os enigmas na sala misteriosa, permitindo que ele e os elfos atravessem o Desfiladeiro da Perdição em segurança. Eles enfrentam Lissandre em seu castelo, onde Balam usa seu dispositivo para enfraquecê-la gradualmente. O dispositivo, além de localizar Chronos, é revelado como capaz de abrir brechas nas dimensões quando totalmente energizado. Com coragem, Balam derrota Lissandre, salvando Eldor e libertando Chronos. Triunfante, ele retorna ao seu lar, sabendo que sua bravura restaurou a paz. " << endl;
                                                cout << "A nossa aventura acabou por aqui, parabéns pelas suas escolhas, você conseguiu chegar a um dos melhores finais possíveis, fique à vontade para descobrir os outros finais. " << endl;
                                                cout << "Obrigado por jogar!" << endl;
                                            }
                                            else if (decisaoSalaMisteriosa == 2)
                                            {
                                                system("CLS");
                                                cout << "Balam arrisca tudo para atravessar o Desfiladeiro da Perdição à força, enfrentando armadilhas mágicas e criaturas sombrias. Ele é mortalmente ferido durante a jornada, deixando seu mestre sem esperança de resgate e Eldor à mercê das forças das trevas. Sua morte resulta em caos e permite que a tirania de Lissandre prevaleça, condenando os reinos à escuridão e destruição. " << endl;
                                                cout << "É, a história não acabou bem para nosso caro amigo Balam, porém você pode tentar fazer escolhas diferentes em busca de um caminho melhor. Afinal, é loucura querer obter resultados diferentes fazendo tudo exatamente igual." << endl;
                                                cout << "Obrigado por jogar!" << endl;
                                            }
                                            else
                                            {
                                                cout << "Opção Inválida" << endl;
                                            }


                                        }
                                        else if (decisaoAtaque == 2)
                                        {
                                            system("CLS");
                                            cout << "Os elfos imobilizam Balam e o informam que ele é o escolhido por ter roubado a adaga que pode drenar a energia mágica dos servos de Lissandre. Eles explicam que fazem parte da resistência contra Lissandre e o preparam para a batalha, instruindo-o sobre seu papel e os perigos que enfrentarão juntos. " << endl;

                                            system("PAUSE");
                                            system("CLS");

                                            cout << "Balam, acompanhado pelos elfos, chega ao Desfiladeiro da Perdição que fica no caminho do castelo de Lissandre, onde se depara com uma sala misteriosa envolta em sombras e ossos. Acreditando que somente o Escolhido poderia decifrar os enigmas da sala, Balam sente o peso da responsabilidade sobre seus ombros. Ele deve escolher entre: " << endl
                                                << endl;
                                            cout << "1-Tentar decifrar os enigmas da sala. " << endl;
                                            cout << "2-Arriscar tudo e atravessar à força." << endl;

                                            cin >> decisaoSalaMisteriosa;

                                            if (decisaoSalaMisteriosa == 1)
                                            {
                                                system("CLS");
                                                cout << "Balam decifra os enigmas na sala misteriosa, permitindo que ele e os elfos atravessem o Desfiladeiro da Perdição em segurança. Eles enfrentam Lissandre em seu castelo, onde Balam usa seu dispositivo para enfraquecê-la gradualmente. O dispositivo, além de localizar Chronos, é revelado como capaz de abrir brechas nas dimensões quando totalmente energizado. Com coragem, Balam derrota Lissandre, salvando Eldor e libertando Chronos. Triunfante, ele retorna ao seu lar, sabendo que sua bravura restaurou a paz. " << endl;
                                                cout << "A nossa aventura acabou por aqui, parabéns pelas suas escolhas, você conseguiu chegar a um dos melhores finais possíveis, fique à vontade para descobrir os outros finais. " << endl;
                                                cout << "Obrigado por jogar" << endl;
                                            }
                                            else if (decisaoSalaMisteriosa == 2)
                                            {
                                                system("CLS");
                                                cout << "Balam arrisca tudo para atravessar o Desfiladeiro da Perdição à força, enfrentando armadilhas mágicas e criaturas sombrias. Ele é mortalmente ferido durante a jornada, deixando seu mestre sem esperança de resgate e Eldor à mercê das forças das trevas. Sua morte resulta em caos e permite que a tirania de Lissandre prevaleça, condenando os reinos à escuridão e destruição. " << endl;
                                                cout << "É, a história não acabou bem para nosso caro amigo Balam, porém você pode tentar fazer escolhas diferentes em busca de um caminho melhor. Afinal, é loucura querer obter resultados diferentes fazendo tudo exatamente igual." << endl;
                                                cout << "Obrigado por tudo!" << endl;
                                            }
                                            else
                                            {
                                                cout << "Opção Inválida" << endl;
                                            }
                                        }
                                        else
                                        {
                                            cout << "Opção Inválida" << endl;
                                        }

                                    }
                                    else
                                    {
                                        cout << "Opção Inválida" << endl;
                                    }
                                }
                                else if (golpeCriatura == 2)
                                {
                                    system("CLS");
                                    cout << "Balam opta por se esquivar do golpe da adaga, movendo-se rapidamente para evitar o ataque da criatura. Porém ele não é rápido o suficiente. E acaba com a adaga enfincada em seu coração. " << endl;
                                    cout << "É, a história não acabou bem para nosso caro amigo Balam, porém você pode tentar fazer escolhas diferentes em busca de um caminho melhor. Afinal, é loucura querer obter resultados diferentes fazendo tudo exatamente igual." << endl;
                                    cout << "Obrigado por Jogar!" << endl;
                                }
                                else
                                {
                                    cout << "Opção Inválida";
                                }
                            }
                            else if (decisaoRespostaFl == 2)
                            {
                                system("CLS");
                                cout << "Balam decide se retirar da situação, reconhecendo a ameaça representada pela criatura e optando por evitar um confronto direto. No entanto, ao virar-se para começar a correr, a criatura ataca, cravando uma lâmina afiada em suas costas, levando-o à morte. " << endl;
                                cout << "É, a história não acabou bem para nosso caro amigo Balam, porém você pode tentar fazer escolhas diferentes em busca de um caminho melhor. Afinal, é loucura querer obter resultados diferentes fazendo tudo exatamente igual.  " << endl;
                                cout << "Obrigado por jogar!" << endl;

                            }
                            else
                            {
                                cout << "Opção Inválida" << endl;
                            }
                        }
                        else if (respostaFloresta == 2)
                        {
                            system("CLS");
                            cout << "Balam decide se retirar da situação, reconhecendo a ameaça representada pela criatura e optando por evitar um confronto direto. No entanto, ao virar-se para começar a correr, a criatura ataca, cravando uma lâmina afiada em suas costas, levando-o à morte. " << endl;
                            cout << "É, a história não acabou bem para nosso caro amigo Balam, porém você pode tentar fazer escolhas diferentes em busca de um caminho melhor. Afinal, é loucura querer obter resultados diferentes fazendo tudo exatamente igual.  " << endl;
                            cout << "Obrigado por jogar!" << endl;
                        }
                        else
                        {
                            cout << "Opção Inválida" << endl;
                        }
                    }
                    else if (opcaoOculosEstranho == 2)
                    {
                        system("CLS");
                        cout << "Balam, ao escolher passar discretamente e seguir em direção à fumaça, é observado por três elfos que reconhecem nele o Escolhido, destinado a enfrentar Lissandre e restaurar a paz em Eldor. Eles explicam que fazem parte da resistência de Alagag e oferecem a Balam uma adaga encantada para auxiliá-lo na batalha contra as forças das trevas. Balam, mesmo querendo salvar Chronos, deve decidir entre partir com os elfos ou continuar sua busca. Ele escolhe entre: " << endl
                            << endl;
                        cout << "1-Continuar sua busca por Chronos." << endl;
                        cout << "2-Partir com os elfos." << endl;

                        cin >> opcaoFumanca;

                        if (opcaoFumanca == 1)
                        {
                            system("CLS");
                            cout << "Balam, convicto de que salvar seu mestre é sua prioridade, decide dar meia-volta e seguir em direção às construções distantes. Os elfos, confiantes de que o Escolhido sabe o que faz, permitem que ele siga seu caminho em paz. " << endl;
                            cout << "Balam segue em direção às construções distantes, enfrentando uma série de desafios em Eldor, incluindo criaturas selvagens e terrenos perigosos. Após dias de viagem, ele chega ao sinistro Desfiladeiro da Perdição, onde enfrenta armadilhas mágicas e criaturas sombrias. Apesar de sua determinação, ele é dominado pelos perigos e perece em sua busca por aventura e redenção, lembrando-nos dos perigos de subestimar lugares desconhecidos e das consequências das escolhas impulsivas. " << endl;
                            cout << "É, a história não acabou bem para nosso caro amigo Balam, porém você pode tentar fazer escolhas diferentes em busca de um caminho melhor. Afinal, é loucura querer obter resultados diferentes fazendo tudo exatamente igual.  " << endl;
                            cout << "Obrigado por jogar!" << endl;
                        }
                        else if (opcaoFumanca == 2)
                        {
                            system("CLS");
                            cout << "Balam, acompanhado pelos elfos, chega ao Desfiladeiro da Perdição que fica no caminho do castelo de Lissandre, onde se depara com uma sala misteriosa envolta em sombras e ossos. Acreditando que somente o Escolhido poderia decifrar os enigmas da sala, Balam sente o peso da responsabilidade sobre seus ombros. Ele deve escolher entre: " << endl
                                << endl;
                            cout << "1-Tentar decifrar os enigmas da sala." << endl;
                            cout << "2-Arriscar tudo e atravessar à força." << endl;
                            cin >> opcaoElfos;

                            if (opcaoElfos == 1)
                            {
                                system("CLS");
                                cout << "Balam decifra os enigmas na sala misteriosa, permitindo que ele e os elfos atravessem o Desfiladeiro da Perdição em segurança. Eles enfrentam Lissandre em seu castelo, onde Balam usa seu dispositivo para enfraquecê-la gradualmente. O dispositivo, além de localizar Chronos, é revelado como capaz de abrir brechas nas dimensões quando totalmente energizado. Com coragem, Balam derrota Lissandre, salvando Eldor e libertando Chronos. Triunfante, ele retorna ao seu lar, sabendo que sua bravura restaurou a paz. " << endl;
                                cout << "A nossa aventura acabou por aqui, parabéns pelas suas escolhas, você conseguiu chegar a um dos melhores finais possíveis, fique à vontade para descobrir os outros finais. " << endl;
                                cout << "Obrigado por jogar!" << endl;
                            }
                            else if (opcaoElfos == 2)
                            {
                                system("CLS");
                                cout << "Balam arrisca tudo para atravessar o Desfiladeiro da Perdição à força, enfrentando armadilhas mágicas e criaturas sombrias. Ele é mortalmente ferido durante a jornada, deixando seu mestre sem esperança de resgate e Eldor à mercê das forças das trevas. Sua morte resulta em caos e permite que a tirania de Lissandre prevaleça, condenando os reinos à escuridão e destruição. " << endl;
                                cout << "É, a história não acabou bem para nosso caro amigo Balam, porém você pode tentar fazer escolhas diferentes em busca de um caminho melhor. Afinal, é loucura querer obter resultados diferentes fazendo tudo exatamente igual.  " << endl;
                                cout << "Obrigado por jogar!" << endl;
                            }
                            else
                            {
                                cout << "Opção Inválida";
                            }
                        }
                        else
                        {
                            cout << "Opção Inválida";
                        }
                    }
                    else
                    {
                        cout << "Opção Inválida";
                    }
                }
                else
                {
                    cout << "Opção Inválida" << endl;
                }
            }
        }

        if (decisaoAventura && floresta)
        {

            cout << "O coração de Balam batia com determinação, impulsionando-o a fazer sua escolha. Com um suspiro profundo, ele tomou sua decisão, preparando-se para a jornada que o aguardava. Seu destino estava traçado, e ele estava pronto para enfrentar o desconhecido em sua busca por Chronos. " << endl;

            system("PAUSE");
            system("CLS");

            cout << "Balam, observa um ambiente sombrio e misterioso, e percebe pegadas no chão. " << endl
                << endl;
            cout << "1-Seguir pegadas" << endl;
            cout << "2- Não Seguir pegadas" << endl;
            cin >> pegadas;

            if (pegadas == 1)
            {
                system("CLS");
                cout << "Balam segue as pegadas até uma caverna, onde encontra um grifo ferido. Ele decide: " << endl
                    << endl;
                cout << "1-Ajudar o grifo" << endl;
                cout << "2-Não ajudar o grifo" << endl;
                cin >> ajudarGrifo;

                if (ajudarGrifo == 1)
                {
                    system("CLS");
                    cout << "Balam ajuda o grifo ferido com algumas ervas que tinha, que se junta a ele em sua jornada. Com a bússola, ele percebe que está nos territórios controlados por Lissandre, a maga que aprisionou seu mestre na ponta do precipício. Voando com o grifo, eles avistam um castelo próximo a um precipício, coberto por nuvens negras. Balam pede ao grifo para levá-lo até lá. " << endl;
                    system("PAUSE");
                    system("CLS");
                    cout << "Balam, após chegar ao castelo e testemunhar seu mestre sendo torturado e preso na beira do precipício por Lissandre, decide agir. Com coragem, ele atinge um guarda, desmaiando-o, e pega a espada para enfrentar Lissandre. Durante a batalha, Balam consegue desferir um golpe próximo ao pescoço de Lissandre. Agora, ele deve decidir o próximo passo:" << endl
                        << endl;
                    cout << "1-Cortar a orelha de Lissandre" << endl;
                    cout << "2-Cortar a bochecha de Lissandre" << endl;
                    cin >> corteLissandre;

                    if (corteLissandre == 1)
                    {
                        system("CLS");
                        cout << "Após Balam cortar a orelha de Lissandre, ela revida imediatamente criando uma bolha em volta dele. A esfera começa a encolher, quebrando todos os ossos de Balam até sua morte. Em seguida, Lissandre faz o mesmo com Chronos. Com isso, ela continua reinando sobre esse mundo, conquistando-o completamente. " << endl;
                        cout << "É, a história não acabou bem para nosso caro amigo Balam, porém você pode tentar fazer escolhas diferentes em busca de um caminho melhor. Afinal, é loucura querer obter resultados diferentes fazendo tudo exatamente igual. " << endl;
                        cout << "Obrigado por jogar!" << endl;

                    }
                    else if (corteLissandre == 2)
                    {
                        system("CLS");
                        cout << "Após cortar a bochecha de Lissandre, Balam rapidamente liberta seu mestre usando o cetro. Em seguida, ele utiliza o cetro para envolver Lissandre em uma bolha e a lança do precipício junto com o artefato mágico. No entanto, ao ver o cetro destroçado, Balam e Chronos percebem que ficaram presos nesse mundo sombrio para sempre. " << endl;
                        cout << "Acredito que você pode fazer escolhas melhores se tentar novamente. Que tal tentar descobrir os outros finais? " << endl;
                        cout << "Obrigado por jogar!" << endl;
                    }
                    else
                    {
                        cout << "Opção Inválida" << endl;
                    }
                }
                else if (ajudarGrifo == 2)
                {
                    system("CLS");
                    cout << "Balam, optando por não ajudar o grifo, mata o animal indefeso para saciar sua fome. Em seguida, continua sua jornada, percebendo através da bússola que está nos territórios controlados por Lissandre, a maga que aprisionou seu mestre. Apesar das dificuldades geográficas e do cansaço, Balam contorna a montanha e avista nuvens negras concentradas em um castelo próximo a um precipício. Ignorando as dores nos pés, ele se dirige até lá determinado. " << endl;
                    system("PAUSE");
                    system("CLS");
                    cout << "Balam, após chegar ao castelo e testemunhar seu mestre sendo torturado e preso na beira do precipício por Lissandre, decide agir. Com coragem, ele atinge um guarda, desmaiando-o, e pega a espada para enfrentar Lissandre. Durante a batalha, Balam consegue desferir um golpe próximo ao pescoço de Lissandre. Agora, ele deve decidir o próximo passo:" << endl
                        << endl;
                    cout << "1-Cortar a orelha de Lissandre" << endl;
                    cout << "2-Cortar a bochecha de Lissandre" << endl;
                    cin >> corteLissandre;

                    if (corteLissandre == 1)
                    {
                        system("CLS");
                        cout << "Após Balam cortar a orelha de Lissandre, ela revida imediatamente criando uma bolha em volta dele. A esfera começa a encolher, quebrando todos os ossos de Balam até sua morte. Em seguida, Lissandre faz o mesmo com Chronos. Com isso, ela continua reinando sobre esse mundo, conquistando-o completamente. " << endl;
                        cout << "É, a história não acabou bem para nosso caro amigo Balam, porém você pode tentar fazer escolhas diferentes em busca de um caminho melhor. Afinal, é loucura querer obter resultados diferentes fazendo tudo exatamente igual. " << endl;
                        cout << "Obrigado por jogar!" << endl;
                    }
                    else if (corteLissandre == 2)
                    {
                        system("CLS");
                        cout << "Após cortar a bochecha de Lissandre, Balam rapidamente liberta seu mestre usando o cetro. Em seguida, ele utiliza o cetro para envolver Lissandre em uma bolha e a lança do precipício junto com o artefato mágico. No entanto, ao ver o cetro destroçado, Balam e Chronos percebem que ficaram presos nesse mundo sombrio para sempre. " << endl;
                        cout << "Acredito que você pode fazer escolhas melhores se tentar novamente. Que tal tentar descobrir os outros finais? " << endl;
                        cout << "Obrigado por jogar!" << endl;
                    }
                    else
                    {
                        cout << "Opção Inválida" << endl;
                    }
                }
                else
                {
                    cout << "Opção Inválida" << endl;
                }
            }
            else if (pegadas == 2)
            {
                system("CLS");
                cout << "Balam, em busca de seu mestre, segue para uma montanha rochosa onde encontra amoreiras carregadas de frutos. Sentindo fome, ele enfrenta duas opções: " << endl
                    << endl;
                cout << "1-Comer uma amora" << endl;
                cout << "2-Comer várias amoras" << endl;
                cin >> comerAmora;

                if (comerAmora == 1)
                {
                    system("CLS");
                    cout << "Balam come uma amora para ganhar energia antes de seguir até um castelo próximo, onde seu mestre está preso. Ao contornar a montanha, ele percebe uma erupção cutânea em seu corpo, mas isso não o impede de avançar. Com determinação, ele entra no castelo, enfrentando a coceira, e se dirige à sala principal em busca de seu mestre. " << endl;

                    system("PAUSE");
                    system("CLS");
                    cout << "Balam confronta Lissandre em uma batalha no castelo onde ela mantém Chronos aprisionado. Após desmaiar um guarda e pegar sua espada, ele enfrenta Lissandre, conseguindo derrubar uma das espadas dela. Agora, ele deve decidir entre usar suas habilidades de arte marcial junto com sua espada ou pegar a segunda espada de Lissandre para enfrentá-la. " << endl
                        << endl;
                    cout << "1-Espada e arte marcial" << endl;
                    cout << "2-Pegar a segunda espada" << endl;
                    cin >> armadura;

                    if (armadura == 1)
                    {
                        system("CLS");
                        cout << "Balam enfrenta Lissandre com suas habilidades em artes marciais e a espada, mas é derrotado quando ela o divide ao meio. Em seguida, Lissandre corta a corda que segura a jaula de Chronos, fazendo-o cair para a morte. Com isso, Lissandre conquista definitivamente o mundo de Balam e Chronos. " << endl;
                        cout << "É, a história não acabou bem para nosso caro amigo Balam, porém você pode tentar fazer escolhas diferentes em busca de um caminho melhor. Afinal, é loucura querer obter resultados diferentes fazendo tudo exatamente igual. " << endl;
                        cout << "Obrigado por jogar!" << endl;

                    }
                    else if (armadura == 2)
                    {
                        system("CLS");
                        cout << "Após cortar as mãos de Lissandre com suas duas espadas, Balam liberta seu mestre, Chronos. No entanto, ao perceber que as mãos decapitadas de Lissandre são necessárias para abrir o portal de volta para casa, Chronos entra em desespero. Agora, Balam e Chronos estão presos nesse mundo. " << endl;
                        cout << "Acredito que você pode fazer escolhas melhores se tentar novamente. Que tal tentar descobrir os outros finais? " << endl;
                        cout << "Obrigado por jogar!" << endl;
                    }
                    else
                    {
                        cout << "Opção Inválida" << endl;
                    }
                }
                else if (comerAmora == 2)
                {
                    system("CLS");
                    cout << "Balam come várias amoras, mas logo sente uma dor de barriga. Ignorando o desconforto, ele contorna a montanha e chega ao castelo. Mesmo com a dor intensa, ele entra sorrateiramente no castelo e segue em direção à sala principal. " << endl;
                    system("PAUSE");
                    system("CLS");

                    cout << "Balam confronta Lissandre em uma batalha no castelo onde ela mantém Chronos aprisionado. Após desmaiar um guarda e pegar sua espada, ele enfrenta Lissandre, conseguindo derrubar uma das espadas dela. Agora, ele deve decidir entre usar suas habilidades de arte marcial junto com sua espada ou pegar a segunda espada de Lissandre para enfrentá-la. " << endl
                        << endl;
                    cout << "1-Espada e arte marcial" << endl;
                    cout << "2-Pegar a segunda espada" << endl;
                    cin >> armadura;

                    if (armadura == 1)
                    {
                        system("CLS");
                        cout << "Balam enfrenta Lissandre com suas habilidades em artes marciais e a espada, mas é derrotado quando ela o divide ao meio. Em seguida, Lissandre corta a corda que segura a jaula de Chronos, fazendo-o cair para a morte. Com isso, Lissandre conquista definitivamente o mundo de Balam e Chronos. " << endl;
                        cout << "É, a história não acabou bem para nosso caro amigo Balam, porém você pode tentar fazer escolhas diferentes em busca de um caminho melhor. Afinal, é loucura querer obter resultados diferentes fazendo tudo exatamente igual. " << endl;
                        cout << "Obrigado por jogar!" << endl;
                    }
                    else if (armadura == 2)
                    {
                        system("CLS");
                        cout << "Após cortar as mãos de Lissandre com suas duas espadas, Balam liberta seu mestre, Chronos. No entanto, ao perceber que as mãos decapitadas de Lissandre são necessárias para abrir o portal de volta para casa, Chronos entra em desespero. Agora, Balam e Chronos estão presos nesse mundo. " << endl;
                        cout << "Acredito que você pode fazer escolhas melhores se tentar novamente. Que tal tentar descobrir os outros finais? " << endl;
                        cout << "Obrigado por jogar!" << endl;
                    }
                    else
                    {
                        cout << "Opção Inválida" << endl;
                    }
                }
                else
                {
                    cout << "Opção Inválida" << endl;
                }
            }
            else
            {
                cout << "Opção Inválida";
            }
        }
    }
    else
    {

        // decisao do usuario recusar o desafio//
        cout << "Que pena, quem sabe mais tarde!";
    }

    return 0;
}