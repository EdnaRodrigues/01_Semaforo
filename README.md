# 🚦 Semáforo com Raspberry Pi Pico W

## 📌 Descrição do Projeto
Este projeto implementa um semáforo utilizando o microcontrolador **Raspberry Pi Pico W**. O semáforo alterna entre os sinais **vermelho, amarelo e verde** com um intervalo de **3 segundos** entre cada mudança. Além disso, o sistema envia mensagens via **porta serial** a cada **1 segundo**.

---

## 🛠️ Funcionalidades
- **Alternância de cores no semáforo (Vermelho → Amarelo → Verde)**.
- **Temporização automática a cada 3 segundos**.
- **Mensagens via porta serial a cada 1 segundo**.
- **Simulação utilizando o simulador WokWi integrado ao VSCode**.
- **Simulação com LED RGB utilizando a ferramenta BitDogLab**.

---

## 🔧 Hardware Necessário - Presentes na Placa de Desenvolvimento BitDogLab
- **Microcontrolador Raspberry Pi Pico W**
- **LED RGB**, ou **3 LEDs** nas cores: vermelho (GPIO 13), verde (GPIO 11) e amarelo (GPIO 12).
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
### **Softwares Necessários**
1. **VS Code** com a extensão **Raspberry Pi Pico** instalada.
2. **CMake** e **Ninja** configurados.
3. **SDK do Raspberry Pi Pico** corretamente configurado.
4. Simulador **Wokwi** instalado e integrado ao VS Code.

### **Clonando o Repositório**
Para começar, clone o repositório no seu computador:
```bash
git clone https://github.com/EdnaRodrigues/01_Semaforo
cd 01_Semaforo
```

---

### **Execução no Projeto no VS Code**

#### **1. Importar o Projeto**
Após clonar o repositório:
1. Abra o **VS Code**.
2. No menu **Raspberry Pi Pico**, selecione **Import Project**.
3. Escolha a pasta clonada e clique em **Import**.

#### **2. Compilar o Código**
1. Clique no ícone **Raspberry Pi Pico** no lado esquerdo do VS Code.
2. Escolha a opção **Compile Project** para compilar o código.

---

### **Execução no Simulador Wokwi**

#### **1. Configurar o Simulador Wokwi**
1. Abra o arquivo `diagram.json` incluído no repositório.
2. Certifique-se de que o arquivo JSON está configurado corretamente para a simulação do hardware necessário:
   - LEDs conectados aos pinos GPIO 11, 12 e 13.

#### **2. Executar a Simulação**
1. Abra o painel do simulador Wokwi no VS Code.
2. Clique em **Play** para iniciar a simulação.

---

### **Execução na Placa BitDogLab**

#### **1. Coloque em Modo Reboot**
1. Aperte o botão **BOOTSEL** no microcontrolador Raspberry Pi Pico W.
2. Ao mesmo tempo, aperte o botão de **Reset**.

#### **2. Upload de Arquivo `Semaforo.uf2`**
1. Abra a pasta `build` incluído no repositório.
2. Mova o arquivo `Semaforo.uf2` para a placa de desenvolvimento.

#### **3. Acompanhar Execução do Programa**
1. Observe a mudança de estados entre os LEDs.
2. Monitore a saída serial para visualizar as mensagens.

---

## ✉️ Contato
Caso tenha dúvidas ou sugestões, entre em contato com o desenvolvedor.
