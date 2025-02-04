# 🚦 Semáforo com Raspberry Pi Pico W

## 📌 Descrição do Projeto
Este projeto implementa um semáforo utilizando o microcontrolador **Raspberry Pi Pico W**. O semáforo alterna entre os sinais **vermelho, amarelo e verde** com um intervalo de **3 segundos** entre cada mudança. Além disso, o sistema envia mensagens via **porta serial** a cada **1 segundo**.

---

## 🛠️ Funcionalidades
- **Alternância de cores no semáforo (Vermelho → Amarelo → Verde)**.
- **Temporização automática a cada 3 segundos**.
- **Mensagens via porta serial a cada 1 segundo**.
- **Simulação com LED RGB utilizando a ferramenta BitDogLab**.

---

## 🔧 Hardware Necessário - Presentes na Placa de Desenvolvimento BitDogLab
- **Microcontrolador Raspberry Pi Pico W**
- **LED RGB**, ou 3 LEDs nas cores: vermelho, verde e azul.
- **3 Resistores de valor adequado** (Sugestão de 3 Resistores de 330 Ω).
- **Fonte de alimentação adequada**.

---

## 📝 Código Principal
O código principal:
- **Gerencia a alternância dos LEDs**.
- **Utiliza um timer repetitivo para temporização**.
- **Exibe mensagens no terminal serial**.

---

## 📌 Como Rodar o Projeto
1. **Faça git clone** deste repositório no Visual Studio Code.
2. **Importe a pasta como projeto Raspberry Pi Pico**.
3. **Compile e grave o código na placa**.
4. **Monitore a saída serial para visualizar as mensagens**.
5. **Adicione o executável na placa BitDogLab**.

**Obs.:** No projeto será disponibilizado os arquivos para simulação no Wokwi integrado ao VSCode, sem precisar obrigatoriamente da placa BitDogLab.

---

## ✉️ Contato
Caso tenha dúvidas ou sugestões, entre em contato com o desenvolvedor.

