<h1>Professor</h1>
<p>
   <strong>Nome:</strong> <?php echo $professor->nome; ?>
</p>
<p>
   <strong>Email:</strong> <?php echo $professor->email; ?>
</p>
<div>
   <?php echo $this->Html->link(
       "Editar",
       ["controller" => "Professors", "action" => "edit", $professor->id]
   ); ?>
</div>
