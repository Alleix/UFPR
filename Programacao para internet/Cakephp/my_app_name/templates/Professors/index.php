<h1>Professores</h1>


<?php echo $this->Html->link(
   "Novo Professor",
   ["controller" => "Professors", "action" => "add"],
   ["class"=> "btn btn-success"]
); ?>


<table class="table table-hover table-striped mt-3">
   <thead class="table-dark">
       <tr>
           <th>Título</th>
           <th>Email</th>
           <th>Ações</th>
       </tr>
   </thead>
   <tbody>
       <?php foreach($professors as $professor): ?>
       <tr>
           <td>
               <?php echo $this->Html->link(
                   $professor->nome,
                   ['controller' => 'Professors', 'action' => 'view', $professor->id]   
               ); ?>
           </td>
           <td> <?php echo $professor->email; ?></td>
           <td>
               <?php echo $this->Html->link(
                   "Editar",
                   ["controller" => "Professors", "action" => "edit", $professor->id],
                   ["class"=> "btn btn-warning"]
               ); ?>
              
               <?php echo $this->Form->postLink(
                   "Excluir",
                   ["controller" => "Professors", "action" => "delete", $professor->id],
                   ["confirm" => "Confirma exclusão?", "class" => "btn btn-danger"]
               ); ?>
           </td>
       </tr>
       <?php endforeach; ?>
   </tbody>
</table>