<h1>Projetos</h1>

<?php echo $this->Html->link(
   "Novo Projeto",
   ["controller" => "Projetos", "action" => "add"],
   ["class"=> "btn btn-success"]
); ?>
<table class="table table-hover table-striped mt-3">
   <thead class="table-dark">
       <tr>
           <th>Título</th>

           <th>Ações</th>
       </tr>
   </thead>
   <tbody>
       <?php foreach($projetos as $projeto): ?>
       <tr>
           <td>
               <?php echo $this->Html->link(
                   $projeto->titulo,
                   ['controller' => 'Projetos', 'action' => 'view', $projeto->id]   
               ); ?>
           </td>
           <td>
               <?php echo $this->Html->link(
                   "Editar",
                   ["controller" => "Projetos", "action" => "edit", $projeto->id],
                   ["class"=> "btn btn-warning"]
               ); ?>
              
               <?php echo $this->Form->postLink(
                   "Excluir",
                   ["controller" => "Projetos", "action" => "delete", $projeto->id],
                   ["confirm" => "Confirma exclusão?", "class" => "btn btn-danger"]
               ); ?>
           </td>
       </tr>
       <?php endforeach; ?>
   </tbody>
</table>