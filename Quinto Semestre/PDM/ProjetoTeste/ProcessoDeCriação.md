"npx create-expo-app@latest"
- Definição do nome


"npx create-expo-app@latest AppPersonalizado -t"
// Criação de App com nome e personalização de template

"cd NomeDoApp"
Direcionar para o diretorio do projeto

"npx expo start"

// Em projetos JS Personalizados instalar pacotes do REACT com npx expo install "react-dom react-native-web"

App.js Base na criação
"
import { StatusBar } from 'expo-status-bar';
import { StyleSheet, Text, View } from 'react-native';

export default function App() {
  return (
    <View style={styles.container}>
      <Text style={styles.Text}>Oi Bea</Text>
      <StatusBar style="auto" />
    </View>
  );
}

const styles = StyleSheet.create({
  container: {
    flex: 1,
    backgroundColor: '#000A',
    alignItems: 'center',
    justifyContent: 'center',
  },
  Text:{
    color: '',
    fontFamily: 'Arial',
  },
});

"