<h1> <?php echo $projeto->titulo; ?> </h1>
<p> <?php echo $projeto->descricao; ?> </p>
<?php echo $this->Html->link('Novo projeto', ['action' => 'add']); ?>

<h1>Alunos</h1>
<p>
   <strong>Nome:</strong> <?php echo $aluno->nome; ?>
</p>
<p>
   <strong>Email:</strong> <?php echo $aluno->email; ?>
</p>
<div>
   <?php echo $this->Html->link(
       "Editar",
       ["controller" => "Alunos", "action" => "edit", $aluno->id]
   ); ?>
</div>