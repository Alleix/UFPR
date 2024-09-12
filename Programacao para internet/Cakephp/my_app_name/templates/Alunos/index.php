<h1>Alunos</h1>


<?php echo $this->Html->link(
   "Novo Aluno",
   ["controller" => "Alunos", "action" => "add"],
   ["class"=> "btn btn-success"]
); ?>


<table class="table table-hover table-striped mt-3">
   <thead class="table-dark">
       <tr>
           <th>Nome</th>
           <th>Email</th>
           <th>Ações</th>
       </tr>
   </thead>
   <tbody>
       <?php foreach($alunos as $aluno): ?>
       <tr>
           <td>
               <?php echo $this->Html->link(
                   $aluno->nome,
                   ['controller' => 'Alunos', 'action' => 'view', $aluno->id]   
               ); ?>
           </td>
           <td>
               <?php echo $aluno->email; ?>
           </td>
           <td>
               <?php echo $this->Html->link(
                   "Editar",
                   ["controller" => "Alunos", "action" => "edit", $aluno->id],
                   ["class"=> "btn btn-warning"]
               ); ?>
              
               <?php echo $this->Form->postLink(
                   "Excluir",
                   ["controller" => "Alunos", "action" => "delete", $aluno->id],
                   ["confirm" => "Confirma exclusão?", "class" => "btn btn-danger"]
               ); ?>
           </td>
       </tr>
       <?php endforeach; ?>
   </tbody>
</table>