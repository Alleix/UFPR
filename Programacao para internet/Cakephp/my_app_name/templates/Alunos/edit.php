<h1>Editar Aluno</h1>


<?php
echo $this->Form->create($aluno);
echo $this->Form->control("nome", ["label" => "Nome","class" => "form-control"]);
echo $this->Form->control("email",["label" => "E-mail","class" => "form-control"]);
echo $this->Form->control("senha",["label" => "Senha","class" => "form-control"]);
echo $this->Form->button(__("Salvar"),["class" => "btn btn-success"]);
echo $this->Form->end();


?>
