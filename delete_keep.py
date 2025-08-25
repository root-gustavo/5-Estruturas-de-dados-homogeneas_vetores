import os

pasta = "Exercicios"

for raiz, dirs, arquivos in os.walk(pasta):
    for arquivo in arquivos:
        if arquivo == ".keep":
            caminho = os.path.join(raiz, arquivo)
            os.remove(caminho)
            print(f"Arquivo deletado: {caminho}")
