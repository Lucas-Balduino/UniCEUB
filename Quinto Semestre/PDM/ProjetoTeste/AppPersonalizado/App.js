import React, {Component} from "react";
import {View, Text, Image} from "react-native";
import {useFonts} from "@expo-google-fonts/inter"; //npx expo install @expo-google-fonts/inter expo-font

class App extends Component{
  render() {
    return (
      <View>
        <Text style={{color: '#6F96DE', fontFamily: "Arial", fontSize: 40, margin: 20}}>
          Aplicação Inicial 
        </Text>

        <Text style={{color: '#000000', fontFamily: "Arial", fontSize: 20, margin: 20}}>
          Primeiro Projeto - Padrão
        </Text>

        <Image
        source={{uri: 'https://love.doghero.com.br/wp-content/uploads/2018/12/golden-retriever-1.png'}}
        style={{width: 300, height: 300, marginLeft: 50}}
        />

      </View>
    );
  }
}

export default App;
