<h1>Novo Projeto</h1>
<?php 
    echo $this->Form->create($projeto);
    echo $this->Form->control('titulo');
    echo $this->Form->control('descricao',['rows'=>3]);
    echo $this->Form->control('professor_id',["label"=>"Professor","options"=>$professors,"class"=>"form-select"]);
    echo $this->Form->button(__('Salvar'));
    echo $this->Form->end();
    ?>
