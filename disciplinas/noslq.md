## nosql
NoSQL = “Not Only SQL”
significa que não usa tabelas nem precisa de um esquema fixo (estrutura rígida).
MongoDB guarda os dados em documentos JSON, e não em tabelas com colunas.

PRINCIPAIS CARACTERÍSTICAS

    Sem esquema fixo (Schema-less)
    -> Tu podes mudar o formato dos dados a qualquer momento.

    Alta escalabilidade
    -> Pode crescer para milhares de servidores (sharding).

    Alta performance
    -> Armazena dados no formato BSON (binário do JSON), rápido para ler e escrever.

    Document-oriented
    -> Os dados ficam agrupados por lógica (ex: um “cliente” contém tudo dele num só documento).

    Consulta com JSON
    -> Usa sintaxe parecida com JavaScript para consultar:

```js
    db.produtos.find({ preco: { $gt: 10 } })
```


*sql vs nosql*
| SQL (relacional) | MongoDB (NoSQL) |
| ---------------- | --------------- |
| Database         | Database        |
| Table            | Collection      |
| Row              | Document        |
| Column           | Field           |
| Primary Key (PK) | `_id`           |



| Nível          | SQL (Relacional) | NoSQL (MongoDB)                          | Exemplo |
| -------------- | ---------------- | ---------------------------------------- | ------- |
| Banco de dados | Database         | Database                                 | `loja`  |
| Tabela         | Collection       | `produtos`                               |         |
| Linha          | Document         | `{ "nome": "Camiseta", "preco": 15.99 }` |         |
| Coluna         | Campo (Field)    | `nome`, `preco`                          |         |
| Chave primária | `_id`            | gerada automaticamente                   |         |


*Cada documento é independente e pode ter campos diferentes:*
```json
{ "nome": "Camiseta", "preco": 15.99 }
{ "nome": "Sapato", "preco": 40.00, "estoque": 20 }
```

## comando nosql mongoshell
```bash
// criar db
db.createCollection("nome_db")
show collections //ver collection

// Conectar / mudar de base
use nome_db

//inserir documentos
db.name_collection.insertOne({ nome: "Ana", idade: 25 }) apenas um documentos
db.name_collection.insertMany([
  { nome: "João", idade: 30 },
  { nome: "Maria", idade: 28 }
]) mais de um documentos


//actualizar (update)
db.name_collection.updateOne(
  { nome: "Ana" },
  { $set: { idade: 26 } }
)

db.name_collection.updateMany(
  { idade: { $lt: 30 } },
  { $set: { status: "novo" } }
)


//remove (drop)
db.name_collection.deleteOne({ nome: "João" })
db.name_collection.deleteMany({ idade: { $lt: 25 } })


```

## [[251108]]
oque é shard key?
dividir bem as cargas.

cada pais, zona tem de ter o numero de cargas suficiente para ele, para evitar desperdicio
usa precisa de mais carga que sao tome.

-mau sharing --> story de um pais fica visível para todos os países.

-mudar palavra chave da shard key tem de mudar de base de dados.

-shard pode se replicar 

-v: é fisicamente infinito podendo criar vários conteiner,
redução de carga por nós,

comando para mongoosh

```nosql 
show dbs
use smart_home
show collections
db.createCollection("users")

db.devices.insertOne({
  "deviceId": "D102",
  "type": "Humidity",
  "location": "Kitchen",
  "status": "active"
})

db.devices.insertMany([
  { "deviceId": "D103", "type": "Motion", "location": "Garage" },
  { "deviceId": "D104", "type": "Temperature", "location": "Office" }
])


db.devices.insertOne({
  "deviceId": "D105",
  "type": "Environment",
  "sensors": [
    { "type": "Temperature", "value": 22.3 },
    { "type": "Humidity", "value": 45 }
  ]
})

db.devices.updateOne(
  { "deviceId": "D102" },
  { $set: { "status": "inactive" } }
)


db.devices.updateMany(
  { "status": "inactive" },
  { $set: { "lastChecked": ISODate("2025-10-29T09:00:00Z") } }
)


db.devices.replaceOne(
  { "deviceId": "D104" },
  { "deviceId": "D104", "type": "Temp/Humidity", "location": "Office" }
)

db.devices.deleteOne({ "deviceId": "D103" })
db.devices.deleteMany({ "status": "inactive" })
```








