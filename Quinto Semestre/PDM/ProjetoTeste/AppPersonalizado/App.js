import React, {Component} from "react";
import {View, Text, Image, Button} from "react-native";
import {useFonts} from "@expo-google-fonts/inter"; //npx expo install @expo-google-fonts/inter expo-font

class App extends Component{
  constructor(props){
    super(props);
    this.state = {
      nome: ""
    };
    this.entrar = this.entrar.bind(this);
  }

  entrar(nome){
    this.setState({
      nome: nome
    })
  }

  render() {
    return (
      <View>
        <Text style={{color: '#6F96DE', fontFamily: "Arial", fontSize: 40, margin: 20}}>
          Aplicação Inicial 
        </Text>

        <Text style={{color: '#000000', fontFamily: "Arial", fontSize: 20, margin: 20}}>
          Primeiro Projeto - Padrão
        </Text>
        <Button
        title="Entrar" 
        color={"red"} 
        onPress={() => this.entrar('Seja bem vindo a aplicação!')}
        />
        <Text style={{fontSize: 12, color: 'green', textAlign: 'center'}}>
          {this.state.nome}
        </Text>

        <Image
        source={{uri: 'https://love.doghero.com.br/wp-content/uploads/2018/12/golden-retriever-1.png'}}
        style={{width: 300, height: 300}}
        />
        
        <Jobs
        largura={200} altura={150}
        />
      </View>
    );
  }
}

export default App;

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