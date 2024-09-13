<h1>Novo Aluno</h1>
<?php 
    echo $this->Form->create($aluno);
    echo $this->Form->control('nome');
    echo $this->Form->control('email');
    echo $this->Form->control('senha');
    echo $this->Form->button(__('Salvar'));
    echo $this->Form->end();
    ?>