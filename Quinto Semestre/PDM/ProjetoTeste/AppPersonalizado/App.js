import React, {Component} from "react";
import {View, Text, Image, Button, StyleSheet, TextInput, TouchableOpacity} from "react-native";
import {useFonts} from "@expo-google-fonts/inter"; //npx expo install @expo-google-fonts/inter expo-font

const Card = ({title, description}) => {
  return(
    <View style={styles.card}>
      <Text style = {styles.title}>{title}</Text>
      <Text style = {styles.description}>{description}</Text>
    </View>
  );
};

class App extends Component{
  constructor(props){
    super(props);
    this.state = {
      nome: "",
      input: ''
    };
    this.entradaNome = this.entradaNome.bind(this);
  }

  entradaNome() {
    // Pegamos o que está salvo no input dentro do state
    const texto = this.state.input;
  
    if (texto && texto.length > 0) {
      this.setState({
        nome: 'Seja Bem Vindo a Aplicação ' + texto + '!'
      });
    } else {
      this.setState({ nome: '' });
    }
  }
  render() {
    return (
      <View style = {styles.container}>
        <Text style={{color: '#6F96DE', fontFamily: "Arial", fontSize: 40, margin: 20}}>
          Aplicação Inicial 
        </Text>

        <Text style={{color: '#000000', fontFamily: "Arial", fontSize: 20, margin: 20}}>
          Primeiro Projeto - Padrão
        </Text>
        <TextInput
          style={styles.input}
          placeholder="Digite seu Nome..."
          onChangeText={(valor) => this.setState({ input: valor })} // Salva o texto enquanto digita
        />

        <TouchableOpacity 
          style={styles.buttonEntrar} 
          onPress={() => this.entradaNome(this.state.input)}
        >
          <Text style={styles.buttonText}>Entrar</Text>
        </TouchableOpacity>

        {/* <Button -> Button é limitado para estilização
        style = {styles.buttonEntrar}
        title="Entrar" 
        // color={"red"} 
        onPress={() => this.entradaNome(input)}
        /> */}

        <Text style={styles.textWelcome}>
          {this.state.nome}
        </Text>

        <Image
        source={{uri: 'https://love.doghero.com.br/wp-content/uploads/2018/12/golden-retriever-1.png'}}
        style={{width: 300, height: 300}}
        />
        
        <Card title = 'Título' description= 'Descrição'
        />

        <Jobs
        largura={200} altura={150}
        />
      </View>
    );
  }
}

export default App;

const styles = StyleSheet.create({
  container: {
    flex: 1,
    alignItems: 'center',
    backgroundColor: 'lightgrey'
  },  
  title: {
    fontSize: 16,
    fontWeight: 400,
    margin: 8
  },
  description: {
    fontSize: 12, 
    fontWeight: 200,
    margin: 2, 
    color: "blue" 
  },
  card: {
    width:300,
    height:200,
    padding: 20,
    borderWidth: 3,
    borderRadius: 5,
    backgroundColor: "grey"
  },
  input: {
    borderWidth: 2,
    borderRadius: 8,
    backgroundColor: 'white',
    margin: 10,
    padding: 10
  },
  buttonEntrar: {
   backgroundColor: '#6F96DE',
   padding: 10,
   borderRadius: 8,
   margin: 10,
   width: 200,
    alignItems: 'center', // Centraliza o texto horizontalmente
  },
  buttonText: {
    color: '#FFF',
    fontWeight: 'bold',
    fontSize: 16
  },
  textWelcome: {
    fontSize: 15,
    color: '#6F96DE',
    margin: 5
  }
})

class Jobs extends Component {
  render(){
    let img = 'https://s.zst.com.br/cms-assets/2024/08/raca-de-cachorro_2.webp';
    return(
      <View>
          <Image
            source={{uri: img}}
            style={{width: this.props.largura,height: this.props.altura}}
          />
          <Text style={{textAlign: 'center'}}>
            Imagem de Golden Correndo
          </Text>
      </View>
    );
  }
}