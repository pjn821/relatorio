## questions
- [ ] what's sql?
usa tabelas/tables, entidade
cada entidade tem varios atributos/colunas/columns

- [ ] why do we need sql
we need slq to organize information 
- [ ] what's the difference between sql vs nosql?
sql- dados orginzados, relacoinamentos nosql- dados grandes e diferentes
-[]onde usar cada uma delas?

- [ ] why do we need table in sql?
sem a tabela nao tem como organizar os dados/information
- [ ] what's table?
blocos onde os dados ficam organizados
-[]oque nosql usa?


## notes
we don't want to remember
we want to learn


## how to learn??
practice

## lessons in general
- [ ] what does the name of the class mean?
Bases de Dados SQL = aprender a guardar, organizar e procurar informação num computador, usando a linguagem SQL
- [ ] why do we need it?
Porque quase tudo o que existe na internet usa bases de dados


## what is
## when to use
## when not to use

## sql commands

### create table
generico
```sql
create tabel table_name(
    column_name column_type,
    column_name column_type
)
```
```sql
create table filmes(
    diretor varchar(255),
    ano_lancamento int
)
```


```sql
//criar uma tabela 
CREATE TABLE name_table(
    nome_coluna type,
    nome_coluna type
)
### insert table
//inserir valor na tabela
INSERT INTO nome_de_tabela(nome_de_coluna, nome_de_coluna)
VALUES (valor, valor);

// selecionar uma coluna 
SELECT * FROM nome_de_table
SELECT nome_de_coluna FROM nome_de_table

//alterar tipo da coluna 
 ALTER TABLE nome_de_tabela
 MODIFY COLUMN nome_coluna FLOAT;

ALTER TABLE nome_tabela
MODIFY COLUMN nome_coluna Decima(nº int, nº decima);

//evitar que linha ou colunas sejam duplicadas
create table nome_tabela(
    name_coluna type unique
);
         or
 ALTER TABLE nome_tabela
 ADD CONSTRAINT nome_unico UNIQUE (nome);
```