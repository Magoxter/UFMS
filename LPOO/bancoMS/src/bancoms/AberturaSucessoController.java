/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package bancoms;

import Java.NovaConta;
import java.io.IOException;
import java.net.URL;
import java.util.ResourceBundle;
import javafx.event.ActionEvent;
import javafx.fxml.FXML;
import javafx.fxml.FXMLLoader;
import javafx.fxml.Initializable;
import javafx.scene.Parent;
import javafx.scene.Scene;
import javafx.scene.control.Button;
import javafx.scene.control.Label;
import javafx.scene.paint.Color;
import javafx.stage.Stage;

/**
 * FXML Controller class
 *
 * @author willl
 */
public class AberturaSucessoController extends NovaConta implements Initializable {
    
    String account;
    
    @FXML
    private Label labelNumConta;

    @FXML
    private Label labelCongrats;

    @FXML
    private Label labelAberturaSucesso;

    @FXML
    private Label labelApresentacaoNum;

    @FXML
    private Button buttonOK;

    public String getAccount() {
        return account;
    }

    public void setAccount(String account) {
        this.account = account;
    }
    
    @FXML
    public void OKentao (ActionEvent event) throws IOException {
        Stage stageOK = (Stage) buttonOK.getScene().getWindow();
        stageOK.close();
        
        Stage stage = new Stage();
        Parent root = FXMLLoader.load(getClass().getResource("ModuloAgencia.fxml"));
        Scene scene = new Scene(root);
        
        stage.setScene(scene);
        stage.setTitle("Modo Agencia");
        stage.show();
    }

    /**
     * Initializes the controller class.
     * @param url
     * @param rb
     */
    @Override
    public void initialize(URL url, ResourceBundle rb) {
        labelNumConta.setText(this.getContaCorrente());
        labelNumConta.setTextFill(Color.web("#1E90FF"));
    }
}
