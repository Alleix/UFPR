<?php

namespace App\Controller;

class AlunosController extends AppController{
    public function index(){
        $alunos = $this->paginate($this->Alunos);
        $this->set('alunos',$alunos);
    }
    public function view($id=null){
        $aluno = $this->Alunos->findById($id)->firstOrFail();
        $this->set("aluno",$aluno);
    }
    public function add(){
        $aluno = $this->Alunos->newEmptyEntity();
        if($this->request->is("post")){
            $aluno = $this->Alunos->patchEntity($aluno,$this->request->getData());
            $aluno->aluno_id = 1;

            if($this->Alunos->save($aluno)){
                $this->Flash->success(__('Aluno salvo com sucesso.'));
                return $this->redirect(["action"=>"index"]);
            }
            $this->Flash->error(__("não foi possivel salvar"));
        }
        $this->set("aluno",$aluno);
    }

    public function edit($id = null) {
        $aluno = $this->Alunos->findById($id)->firstOrFail();
        if ($this->request->is(["post", "put"])) {
            $aluno = $this->Alunos->patchEntity($aluno, $this->request->getData());
            if ($this->Alunos->save($aluno)) {
                $this->Flash->success(__("Alterado com sucesso!"));
                return $this->redirect(["action"=> "index"]);
            }
            $this->Flash->error(__("Não foi possível alterar"));
        }
        $this->set("aluno", $aluno);
    }
    
   public function delete($id = null) {
    $this->request->allowMethod(["post","delete"]);
    $aluno = $this->Alunos->findById($id)->firstOrFail();
    if ($this->Alunos->delete($aluno)) {
        $this->Flash->success(
            __("A postagem com título \"{0}\" foi excluída", $aluno->nome)
        );
        return $this->redirect(["action"=> "index"]);
    }
}
}