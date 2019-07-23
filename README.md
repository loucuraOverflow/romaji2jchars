# romaji2jchars

> Fiz apenas por diversão. Não é muito perfomatica nem possui um código
> muito limpo.

Pequena ferramenta para conversão de Rōmaji para caracteres japoneses

## Compilando

Clone o repositório

```bash
git clone https://github.com/loucuraOverflow/romaji2jchars.git
cd romaji2jchars
```

Execute o script `autogen`:

```bash
chmod +x autogen
./autogen
```

Configure:

```bash
./configure
```

E, então, compile:

```bash
make
```

O executavel compilado terá o nome de `romaji2jchars`. Coloque o caminho até
o arquivo na sua variável de ambiente `PATH`.


## Uso

```bash
romaji2jchars [-k]
```

Onde
+ `-k` define que devemos transformar para *Katakana* ao invés de *Hiragana*

Após sua execução, o programa recebe na entrada padrão o *Rōmaji* á ser
transformado.


### Exemplo de uso

```bash
echo "watashi" | romaji2jchars
わたし # retorno
```

Ou

```bash
echo "ko-hi-" | romaji2jchars
コーヒー # retorno
```