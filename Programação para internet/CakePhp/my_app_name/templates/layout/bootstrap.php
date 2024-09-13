<?php $controller = $this->request->getParam('controller'); echo $controller; ?>
<!doctype html>
<html lang="en">
 <head>
   <?= $this->Html->charset() ?>
   <meta name="viewport" content="width=device-width, initial-scale=1">
   <title><?= $this->fetch('title') ?></title>
   <?= $this->Html->meta('icon') ?>
   <?= $this->fetch('meta') ?>


   <?= $this->Html->css(['estilo']) ?>


   <link href="https://cdn.jsdelivr.net/npm/bootstrap@5.3.3/dist/css/bootstrap.min.css" rel="stylesheet" integrity="sha384-QWTKZyjpPEjISv5WaRU9OFeRpok6YctnYmDr5pNlyT2bRjXh0JMhjY6hW+ALEwIH" crossorigin="anonymous">
   <?= $this->fetch('css') ?>
</head>
<body>
   <nav class="navbar navbar-expand-lg bg-body-tertiary">
       <div class="container-fluid">
           <?= $this->Html->link('Sistema CRUD', ['controller'=> 'Pages', 'action' => 'display', 'home'], ['class' => 'navbar-brand']); ?>


           <button class="navbar-toggler" type="button" data-bs-toggle="collapse" data-bs-target="#navbarNav" aria-controls="navbarNav" aria-expanded="false" aria-label="Toggle navigation">
               <span class="navbar-toggler-icon"></span>
           </button>
           <div class="collapse navbar-collapse" id="navbarNav">
               <ul class="navbar-nav">
                   <li class="nav-item">
                       <?php $c = ($controller == 'Pages' ? 'nav-link active': 'nav-link'); ?>
                       <?= $this->Html->link('Home', ['controller'=> 'Pages', 'action' => 'display', 'home'], ['class' => $c]); ?>
                   </li>
                   <li class="nav-item">
                   <?= $this->Html->link('Projetos', ['controller'=> 'Projetos', 'action' => 'index'], ['class' => 'nav-link']); ?>
                   </li>
                   <li class="nav-item">
                       <?= $this->Html->link('Professores',['controller'=> 'Professors', 'action' => 'index'], ['class' => 'nav-link']); ?>
                   </li>
                   <li class="nav-item">
                       <?= $this->Html->link('Alunos',['controller'=> 'Alunos', 'action' => 'index'], ['class' => 'nav-link']); ?>
                   </li>
               </ul>
           </div>
       </div>
   </nav>
   <div class="container">
       <div class="row">
           <div class="col">
               <?= $this->Flash->render() ?>
           </div>
       </div>
       <div class="row">
           <div class="col">
           <?= $this->fetch('content') ?>
           </div>
       </div>
   </div>
   <script src="https://cdn.jsdelivr.net/npm/bootstrap@5.3.3/dist/js/bootstrap.bundle.min.js" integrity="sha384-YvpcrYf0tY3lHB60NNkmXc5s9fDVZLESaAA55NDzOxhy9GkcIdslK1eN7N6jIeHz" crossorigin="anonymous"></script>
   <?= $this->fetch('script') ?>
 </body>
</html>