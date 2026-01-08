# arduino-platformio-template

Este é um Template Base para desenvolvimento com Arduino utilizando PlatformIO no VS Code.

O objetivo deste repositório é fornecer uma estrutura organizada, limpa e pré-configurada para iniciar novos projetos rapidamente, mantendo boas práticas de engenharia de firmware e versionamento.

## 📂 Estrutura de Diretórios
Abaixo, um guia rápido sobre onde encontrar e onde salvar seus arquivos neste projeto:
```text
nome-do-projeto/
│
├── 📂 docs/               # 📚 DOCUMENTAÇÃO (Onde o projetista trabalha)
│   ├── 📂 datasheets/     #    - PDFs de sensores e componentes usados
│   ├── 📂 diagrams/       #    - Esquemas elétricos, fritzing ou fotos
│   └── 📄 PINOUT.md       #    - Tabela de referência das conexões (fios)
│
├── 📂 test/               # 🧪 TESTES UNITÁRIOS (Controle de Qualidade)
│   └── 📄 README          #    - Scripts para validar a lógica do código automaticamente
│                          #      sem precisar testar manualmente o hardware toda vez.
│
├── 📂 include/            # 🧩 CABEÇALHOS GLOBAIS (Headers .h)
│   └── 📄 README          #    - Coloque aqui arquivos .h que precisam ser vistos
│                          #      por todo o projeto (ex: constantes globais, structs)
│
├── 📂 lib/                # 🧱 BIBLIOTECAS LOCAIS (Seus Módulos)
│   └── 📂 NomeDaLib/      #    - Crie pastas aqui para suas classes próprias
│       ├── 📄 Classe.cpp  #    - Implementação da biblioteca
│       └── 📄 Classe.h    #    - Cabeçalho da biblioteca
│
├── 📂 src/                # ⚡ CÓDIGO FONTE (O Coração do projeto)
│   └── 📄 main.cpp        #    - O arquivo principal (setup e loop)
│
├── 📂 .pio/               # 🚫 CACHE (Não mexa aqui)
│                          #    - Arquivos compilados (ignorado pelo Git)
│
└── 📄 platformio.ini      # ⚙️ CONFIGURAÇÃO 
                           #    - Definição da placa, porta COM e bibliotecas externas
```

## 🚀 Como Usar Este Template

### 1. Iniciar um Novo Projeto
Se você estiver no GitHub, clique no botão verde "Use this template" para criar um novo repositório baseado nesta estrutura.

### 2. Configurações Básicas (platformio.ini)
Este projeto já vem configurado para o Arduino Uno (ATmega328P).

Monitor Serial: Configurado para 9600 bps.

Bibliotecas: Adicione bibliotecas externas (ex: sensores) na seção lib_deps do arquivo platformio.ini.

### 3. Comandos Úteis (VS Code)
Build (Compilar): Ctrl + Alt + B (ou ícone ✅)

Upload (Gravar): Ctrl + Alt + U (ou ícone ➡️)

Monitor Serial: Ícone de plugue 🔌 na barra inferior.

## 🛠 Status do Projeto
- Versão: 1.0.0 (Template Inicial)
- Placa: Arduino Uno R3
- Framework: Arduino

---
Autor: Thiago Berticelli Ló