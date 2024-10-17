<?php
    //incluir arquivo de conexao
    require 'conexao.php';

    //verifica se os parametros enviados
    // via POST
    if($_SERVER["REQUEST_METHOD"]=="POST"){
        //
        $param1 = isset($_POST["param1"]) ? $_POST["param1"] : null;
    
        if($param1 !== null){
            try{
                $procedure = "sp_lista_clientes";
                //imprime a chamada da procedure
                $stmt = $pdo->prepare("CALL $procedure(:param1)");
                //Associar o parametro
                $stmt->bindParam(':param1', $param1, PDO::PARAM_INT);
                $stmt->execute();
                
                //Verifica se a procedure retornou algum registro
                if($stmt->rowCount() > 0){
                    echo " <h3>Resultados</h3>";

                    echo "table border='1' callpadding='10'>";
                    echo "br";
                    
                    for($i = 0; $i < $stmt->columnCount(); $i++){
                        $meta = $stmt->getColumnMeta($i);
                        echo "<th>" . htmlspecialchars($meta['name']) . "</th>";
                    }

                    echo "</tr>";

                    //mostrando linhas
                    while($row = $stmt->fetch(PDO::FETCH_ASSOC)){
                        echo "<tr>";
                        foreach($row as $cal){
                            echo "<td>" . htmlspecialchars($cal) . "</td>";
                        }
                        echo "</tr>";
                    }
                    echo"</table>";
                }

                else {
                    echo "A procedure não retornou nenhum valor";
                }

            }catch(PDOException $e){
                echo "Erro a chamar a procedure" . $e->getMessage();
            }

        }

        else{
            echo "Parametro invalido";
        }
    }

    else{
        echo "A procedure não retornou nenhum valor";
    }


?>