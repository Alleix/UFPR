<h1>Aliunos</h1>
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