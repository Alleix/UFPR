<h1>Editar Professor</h1>


<?php
echo $this->Form->create($professor);
echo $this->Form->control("nome", ["label" => "Nome","class" => "form-control"]);
echo $this->Form->control("email",["label" => "E-mail","class" => "form-control"]);
echo $this->Form->control("senha",["label" => "Senha","class" => "form-control"]);
echo $this->Form->button(__("Salvar"),["class" => "btn btn-success"]);
echo $this->Form->end();


?>
