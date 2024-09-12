<h1>Novo Professor</h1>
<?php 
    echo $this->Form->create($professor);
    echo $this->Form->control('nome');
    echo $this->Form->control('email');
    echo $this->Form->control('senha');
    echo $this->Form->button(__('Salvar'));
    echo $this->Form->end();
    ?>
