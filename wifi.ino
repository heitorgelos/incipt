#include <WiFi.h>
#include <string>

const char* ssid = "ESP-AP"; //Nome da rede do ESP
const char* pass = "senha123"; //Senha para se conectar na rede na qual o ESP fornecerá uma página com dados

//VARIÁVEIS QUE A FUNÇÃO WIFI DEVE RECEBER: data,id,is_new_data
String data ="",past_data="0,0,0,0 \n"; //Informação a ser recebida pela função de exibição de dados em página HTML
int id=0, is_new_data=1, past_id=id; //O código irá receber o ID da mensagem atual e um valor que diz se um novo dado chegou


//Função que remove os | por \n para poder exibir os dados em formatação adequada 
String trata_dados(String str) { 
  String  str_dados=""; //Strings de formatação
  
  str_dados = str.substring(str.indexOf(':') + 1);

 
  return str_dados;
}

void exibe_dados(String str,int id, WiFiClient client) { 
  String no_data=past_data;
 switch(id){
    case 0:
      client.print("<p>TPS(%)|MAP(BAR)|AirTemp|EngineTemp(C): ");
        client.print(str);  // Dado recebido enviado à pagina já formatado
        client.println("</p>");

        client.print("<p>OilPressure|FuelPressure|WaterPressure(BAR)|Gear: ");
        client.print(no_data);  // Dado recebido enviado à pagina já formatado
        client.println("</p>");

        client.print("<p>ExhaustO2(ƛ)|RPM|OilTemp(C)|PitLimit: ");
        client.print(no_data);  // Dado recebido enviado à pagina já formatado
        client.println("</p>");


        client.print("<p>Wheel Speed(Km/h) FR|FL|RR|RL:");
        client.print(no_data);  // Dado recebido enviado à pagina já formatado
        client.println("</p>");        
        
        client.print("<p>Traction Ctrl - Slip|Retard|Cut|Heading:");
        client.print(no_data);  // Dado recebido enviado à pagina já formatado
        client.println("</p>");


        client.print("<p>Shock Sensor FR|FL|RR|RL:");
        client.print(no_data);  // Dado recebido enviado à pagina já formatado
        client.println("</p>");

        client.print("<p>G-force(accel)|(lateral)|Yaw-rate(frontal)|(lateral):");
        client.print(no_data);  // Dado recebido enviado à pagina já formatado
        client.println("</p>");


        client.print("<p>Lambda Correction|Fuel Flow Total(L/min)|Inj Time Bank(ms) A|B:");
        client.print(no_data);  // Dado recebido enviado à pagina já formatado
        client.println("</p>");

        //
        client.print("<p>Oil Temp|Transmission Temp(C)|Fuel Consumption(L)|Brake Pressure(Bar):");
        client.print(no_data);  // Dado recebido enviado à pagina já formatado
        client.println("</p>");
        break;
    case 1: 
      client.print("<p>TPS(%)|MAP(BAR)|AirTemp|EngineTemp(C): ");
        client.print(no_data);  // Dado recebido enviado à pagina já formatado
        client.println("</p>");

        client.print("<p>OilPressure|FuelPressure|WaterPressure(BAR)|Gear: ");
        client.print(str);  // Dado recebido enviado à pagina já formatado
        client.println("</p>");

        client.print("<p>ExhaustO2(ƛ)|RPM|OilTemp(C)|PitLimit: ");
        client.print(no_data);  // Dado recebido enviado à pagina já formatado
        client.println("</p>");


        client.print("<p>Wheel Speed(Km/h) FR|FL|RR|RL:");
        client.print(no_data);  // Dado recebido enviado à pagina já formatado
        client.println("</p>");        
        
        client.print("<p>Traction Ctrl - Slip|Retard|Cut|Heading:");
        client.print(no_data);  // Dado recebido enviado à pagina já formatado
        client.println("</p>");


        client.print("<p>Shock Sensor FR|FL|RR|RL:");
        client.print(no_data);  // Dado recebido enviado à pagina já formatado
        client.println("</p>");

        client.print("<p>G-force(accel)|(lateral)|Yaw-rate(frontal)|(lateral):");
        client.print(no_data);  // Dado recebido enviado à pagina já formatado
        client.println("</p>");


        client.print("<p>Lambda Correction|Fuel Flow Total(L/min)|Inj Time Bank(ms) A|B:");
        client.print(no_data);  // Dado recebido enviado à pagina já formatado
        client.println("</p>");

        //
        client.print("<p>Oil Temp|Transmission Temp(C)|Fuel Consumption(L)|Brake Pressure(Bar):");
        client.print(no_data);  // Dado recebido enviado à pagina já formatado
        client.println("</p>");
        break;

    case 2: 
      client.print("<p>TPS(%)|MAP(BAR)|AirTemp|EngineTemp(C): ");
        client.print(no_data);  // Dado recebido enviado à pagina já formatado
        client.println("</p>");

        client.print("<p>OilPressure|FuelPressure|WaterPressure(BAR)|Gear: ");
        client.print(no_data);  // Dado recebido enviado à pagina já formatado
        client.println("</p>");

        client.print("<p>ExhaustO2(ƛ)|RPM|OilTemp(C)|PitLimit: ");
        client.print(str);  // Dado recebido enviado à pagina já formatado
        client.println("</p>");


        client.print("<p>Wheel Speed(Km/h) FR|FL|RR|RL:");
        client.print(no_data);  // Dado recebido enviado à pagina já formatado
        client.println("</p>");        
        
        client.print("<p>Traction Ctrl - Slip|Retard|Cut|Heading:");
        client.print(no_data);  // Dado recebido enviado à pagina já formatado
        client.println("</p>");


        client.print("<p>Shock Sensor FR|FL|RR|RL:");
        client.print(no_data);  // Dado recebido enviado à pagina já formatado
        client.println("</p>");

        client.print("<p>G-force(accel)|(lateral)|Yaw-rate(frontal)|(lateral):");
        client.print(no_data);  // Dado recebido enviado à pagina já formatado
        client.println("</p>");


        client.print("<p>Lambda Correction|Fuel Flow Total(L/min)|Inj Time Bank(ms) A|B:");
        client.print(no_data);  // Dado recebido enviado à pagina já formatado
        client.println("</p>");

        //
        client.print("<p>Oil Temp|Transmission Temp(C)|Fuel Consumption(L)|Brake Pressure(Bar):");
        client.print(no_data);  // Dado recebido enviado à pagina já formatado
        client.println("</p>");

        break;

    case 3: 

      client.print("<p>TPS(%)|MAP(BAR)|AirTemp|EngineTemp(C): ");
        client.print(no_data);  // Dado recebido enviado à pagina já formatado
        client.println("</p>");

        client.print("<p>OilPressure|FuelPressure|WaterPressure(BAR)|Gear: ");
        client.print(no_data);  // Dado recebido enviado à pagina já formatado
        client.println("</p>");

        client.print("<p>ExhaustO2(ƛ)|RPM|OilTemp(C)|PitLimit: ");
        client.print(no_data);  // Dado recebido enviado à pagina já formatado
        client.println("</p>");


        client.print("<p>Wheel Speed(Km/h) FR|FL|RR|RL:");
        client.print(str);  // Dado recebido enviado à pagina já formatado
        client.println("</p>");        
        
        client.print("<p>Traction Ctrl - Slip|Retard|Cut|Heading:");
        client.print(no_data);  // Dado recebido enviado à pagina já formatado
        client.println("</p>");


        client.print("<p>Shock Sensor FR|FL|RR|RL:");
        client.print(no_data);  // Dado recebido enviado à pagina já formatado
        client.println("</p>");

        client.print("<p>G-force(accel)|(lateral)|Yaw-rate(frontal)|(lateral):");
        client.print(no_data);  // Dado recebido enviado à pagina já formatado
        client.println("</p>");


        client.print("<p>Lambda Correction|Fuel Flow Total(L/min)|Inj Time Bank(ms) A|B:");
        client.print(no_data);  // Dado recebido enviado à pagina já formatado
        client.println("</p>");

        
        client.print("<p>Oil Temp|Transmission Temp(C)|Fuel Consumption(L)|Brake Pressure(Bar):");
        client.print(no_data);  // Dado recebido enviado à pagina já formatado
        client.println("</p>");

      break;
     case 4: 
      client.print("<p>TPS(%)|MAP(BAR)|AirTemp|EngineTemp(C): ");
        client.print(no_data);  // Dado recebido enviado à pagina já formatado
        client.println("</p>");

        client.print("<p>OilPressure|FuelPressure|WaterPressure(BAR)|Gear: ");
        client.print(no_data);  // Dado recebido enviado à pagina já formatado
        client.println("</p>");

        client.print("<p>ExhaustO2(ƛ)|RPM|OilTemp(C)|PitLimit: ");
        client.print(no_data);  // Dado recebido enviado à pagina já formatado
        client.println("</p>");


        client.print("<p>Wheel Speed(Km/h) FR|FL|RR|RL:");
        client.print(no_data);  // Dado recebido enviado à pagina já formatado
        client.println("</p>");        
        
        client.print("<p>Traction Ctrl - Slip|Retard|Cut|Heading:");
        client.print(str);  // Dado recebido enviado à pagina já formatado
        client.println("</p>");


        client.print("<p>Shock Sensor FR|FL|RR|RL:");
        client.print(no_data);  // Dado recebido enviado à pagina já formatado
        client.println("</p>");

        client.print("<p>G-force(accel)|(lateral)|Yaw-rate(frontal)|(lateral):");
        client.print(no_data);  // Dado recebido enviado à pagina já formatado
        client.println("</p>");


        client.print("<p>Lambda Correction|Fuel Flow Total(L/min)|Inj Time Bank(ms) A|B:");
        client.print(no_data);  // Dado recebido enviado à pagina já formatado
        client.println("</p>");

        //
        client.print("<p>Oil Temp|Transmission Temp(C)|Fuel Consumption(L)|Brake Pressure(Bar):");
        client.print(no_data);  // Dado recebido enviado à pagina já formatado
        client.println("</p>");
        break;

    case 5: 
      client.print("<p>TPS(%)|MAP(BAR)|AirTemp|EngineTemp(C): ");
        client.print(no_data);  // Dado recebido enviado à pagina já formatado
        client.println("</p>");

        client.print("<p>OilPressure|FuelPressure|WaterPressure(BAR)|Gear: ");
        client.print(no_data);  // Dado recebido enviado à pagina já formatado
        client.println("</p>");

        client.print("<p>ExhaustO2(ƛ)|RPM|OilTemp(C)|PitLimit: ");
        client.print(no_data);  // Dado recebido enviado à pagina já formatado
        client.println("</p>");


        client.print("<p>Wheel Speed(Km/h) FR|FL|RR|RL:");
        client.print(no_data);  // Dado recebido enviado à pagina já formatado
        client.println("</p>");        
        
        client.print("<p>Traction Ctrl - Slip|Retard|Cut|Heading:");
        client.print(no_data);  // Dado recebido enviado à pagina já formatado
        client.println("</p>");


        client.print("<p>Shock Sensor FR|FL|RR|RL:");
        client.print(str);  // Dado recebido enviado à pagina já formatado
        client.println("</p>");

        client.print("<p>G-force(accel)|(lateral)|Yaw-rate(frontal)|(lateral):");
        client.print(no_data);  // Dado recebido enviado à pagina já formatado
        client.println("</p>");


        client.print("<p>Lambda Correction|Fuel Flow Total(L/min)|Inj Time Bank(ms) A|B:");
        client.print(no_data);  // Dado recebido enviado à pagina já formatado
        client.println("</p>");

        //
        client.print("<p>Oil Temp|Transmission Temp(C)|Fuel Consumption(L)|Brake Pressure(Bar):");
        client.print(no_data);  // Dado recebido enviado à pagina já formatado
        client.println("</p>");

        break;

    case 6: 
      client.print("<p>TPS(%)|MAP(BAR)|AirTemp|EngineTemp(C): ");
        client.print(no_data);  // Dado recebido enviado à pagina já formatado
        client.println("</p>");

        client.print("<p>OilPressure|FuelPressure|WaterPressure(BAR)|Gear: ");
        client.print(no_data);  // Dado recebido enviado à pagina já formatado
        client.println("</p>");

        client.print("<p>ExhaustO2(ƛ)|RPM|OilTemp(C)|PitLimit: ");
        client.print(no_data);  // Dado recebido enviado à pagina já formatado
        client.println("</p>");


        client.print("<p>Wheel Speed(Km/h) FR|FL|RR|RL:");
        client.print(no_data);  // Dado recebido enviado à pagina já formatado
        client.println("</p>");        
        
        client.print("<p>Traction Ctrl - Slip|Retard|Cut|Heading:");
        client.print(no_data);  // Dado recebido enviado à pagina já formatado
        client.println("</p>");


        client.print("<p>Shock Sensor FR|FL|RR|RL:");
        client.print(no_data);  // Dado recebido enviado à pagina já formatado
        client.println("</p>");

        client.print("<p>G-force(accel)|(lateral)|Yaw-rate(frontal)|(lateral):");
        client.print(str);  // Dado recebido enviado à pagina já formatado
        client.println("</p>");


        client.print("<p>Lambda Correction|Fuel Flow Total(L/min)|Inj Time Bank(ms) A|B:");
        client.print(no_data);  // Dado recebido enviado à pagina já formatado
        client.println("</p>");

        //
        client.print("<p>Oil Temp|Transmission Temp(C)|Fuel Consumption(L)|Brake Pressure(Bar):");
        client.print(no_data);  // Dado recebido enviado à pagina já formatado
        client.println("</p>");

        break;
    case 7: 
      client.print("<p>TPS(%)|MAP(BAR)|AirTemp|EngineTemp(C): ");
        client.print(no_data);  // Dado recebido enviado à pagina já formatado
        client.println("</p>");

        client.print("<p>OilPressure|FuelPressure|WaterPressure(BAR)|Gear: ");
        client.print(no_data);  // Dado recebido enviado à pagina já formatado
        client.println("</p>");

        client.print("<p>ExhaustO2(ƛ)|RPM|OilTemp(C)|PitLimit: ");
        client.print(no_data);  // Dado recebido enviado à pagina já formatado
        client.println("</p>");


        client.print("<p>Wheel Speed(Km/h) FR|FL|RR|RL:");
        client.print(no_data);  // Dado recebido enviado à pagina já formatado
        client.println("</p>");        
        
        client.print("<p>Traction Ctrl - Slip|Retard|Cut|Heading:");
        client.print(no_data);  // Dado recebido enviado à pagina já formatado
        client.println("</p>");


        client.print("<p>Shock Sensor FR|FL|RR|RL:");
        client.print(no_data);  // Dado recebido enviado à pagina já formatado
        client.println("</p>");

        client.print("<p>G-force(accel)|(lateral)|Yaw-rate(frontal)|(lateral):");
        client.print(no_data);  // Dado recebido enviado à pagina já formatado
        client.println("</p>");


        client.print("<p>Lambda Correction|Fuel Flow Total(L/min)|Inj Time Bank(ms) A|B:");
        client.print(str);  // Dado recebido enviado à pagina já formatado
        client.println("</p>");

        
        client.print("<p>Oil Temp|Transmission Temp(C)|Fuel Consumption(L)|Brake Pressure(Bar):");
        client.print(no_data);  // Dado recebido enviado à pagina já formatado
        client.println("</p>");

        break;
    case 8: 
      client.print("<p>TPS(%)|MAP(BAR)|AirTemp|EngineTemp(C): ");
        client.print(no_data);  // Dado recebido enviado à pagina já formatado
        client.println("</p>");

        client.print("<p>OilPressure|FuelPressure|WaterPressure(BAR)|Gear: ");
        client.print(no_data);  // Dado recebido enviado à pagina já formatado
        client.println("</p>");

        client.print("<p>ExhaustO2(ƛ)|RPM|OilTemp(C)|PitLimit: ");
        client.print(no_data);  // Dado recebido enviado à pagina já formatado
        client.println("</p>");


        client.print("<p>Wheel Speed(Km/h) FR|FL|RR|RL:");
        client.print(no_data);  // Dado recebido enviado à pagina já formatado
        client.println("</p>");        
        
        client.print("<p>Traction Ctrl - Slip|Retard|Cut|Heading:");
        client.print(no_data);  // Dado recebido enviado à pagina já formatado
        client.println("</p>");


        client.print("<p>Shock Sensor FR|FL|RR|RL:");
        client.print(no_data);  // Dado recebido enviado à pagina já formatado
        client.println("</p>");

        client.print("<p>G-force(accel)|(lateral)|Yaw-rate(frontal)|(lateral):");
        client.print(no_data);  // Dado recebido enviado à pagina já formatado
        client.println("</p>");


        client.print("<p>Lambda Correction|Fuel Flow Total(L/min)|Inj Time Bank(ms) A|B:");
        client.print(no_data);  // Dado recebido enviado à pagina já formatado
        client.println("</p>");

        //
        client.print("<p>Oil Temp|Transmission Temp(C)|Fuel Consumption(L)|Brake Pressure(Bar):");
        client.print(str);  // Dado recebido enviado à pagina já formatado
        client.println("</p>");

        break;

 }

}

void exibe_pagina(WiFiClient client){
    //Código de exibição de dados HTML
        // Envia cabeçalhos HTTP
        client.println("HTTP/1.1 200 OK");
        client.println("Content-type:text/html");
        client.println();

        // Envia página HTML com atualização automática
        client.println("<!DOCTYPE html><html>");
        
        client.println("<head><title>Dados fueltech</title>");
        client.println("<meta http-equiv='refresh' content='2'>"); //Recarega a página de 2 em 2 segundos
        client.println("<style>");                    
        client.println("body {");
        client.println("  display: flex;");
        client.println("  justify-content: center;");
        client.println("  align-items: center;");
        client.println("  height: 100vh;");
        client.println("  margin: 0;");
        client.println("  font-family: Arial, sans-serif;");
        client.println("  background-color: #f9f9f9;");
        client.println("}");
        client.println(".container {");
        client.println("  border: 4px solid red;");
        client.println("  padding: 40px;");
        client.println("  text-align: center;");
        client.println("  border-radius: 15px;");
        client.println("  background-color: white;");
        client.println("}");
        client.println("h2 {");
        client.println("  color: red;");
        client.println("}");
        client.println("</style>");
        client.println("</head>");
        
        client.println("<body>");
        client.println("<div class='container'>");
        client.println("<h2>Real time data fueltech</h2>");
        
        if(is_new_data){
          exibe_dados(trata_dados(data),id,client);  //Faz tratamento dos dados recebidos pela função trata_dados e envia para página os dados
        }else{
          exibe_dados(trata_dados(past_data),past_id,client);  //Envia os dados anteriores
        }
        
        
        client.println("</div>");
        client.println("</body>");
        
        client.println("</html>"); //Fim do código de exibição de dados HTML
}

WiFiServer servidor(80); //Inicializa o servidor na porta 80 (HTML) do ESP

void setup() {
  Serial.begin(9600); //Começa comunicação serial

  WiFi.softAP(ssid, pass); //Inizializa acess point

  IPAddress ip = WiFi.softAPIP();  //Pega IP da página do cliente no acces point

  Serial.println("Endereco IP: ");
  Serial.println(ip); //Exibe o IP do cliente que deve ser digitado no navegador
  servidor.begin();
}

void loop() {
  WiFiClient client = servidor.available(); // Aceita conexões
  if (client) { //Se o cliente se conectar
    Serial.println("Cliente conectado.");
    while (client.connected()) { //Enquanto o cliente estiver conectado 
      if (client.available()) { //Enquanto o cliente estiver disponível para comunicação

        
        exibe_pagina(client);
        past_data=data;
        past_id=id;

        delay(10); // Garante que a resposta seja enviada
        client.stop(); // Fecha a conexão HTTP mas não é perdida a conexão WiFi
        Serial.println("Cliente desconectado.");
        break;
      }
    }
  }
}