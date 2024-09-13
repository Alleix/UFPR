<?php

namespace App\Controller;

class ProfessorsController extends AppController{
    public function index(){
        $professors = $this->paginate($this->Professors);
        $this->set('professors',$professors);
    }
    public function view($id=null){
        $professor = $this->Professors->findById($id)->firstOrFail();
        $this->set("professor",$professor);
    }
    public function add(){
        $professor = $this->Professors->newEmptyEntity();
        if($this->request->is("post")){
            $professor = $this->Professors->patchEntity($professor,$this->request->getData());
            $professor->professor_id = 1;

            if($this->Professors->save($professor)){
                $this->Flash->success(__('Professor salvo com sucesso.'));
                return $this->redirect(["action"=>"index"]);
            }
            $this->Flash->error(__("não foi possivel salvar"));
        }
        $this->set("professor",$professor);
    }

    public function edit($id = null) {
        $professor = $this->Professors->findById($id)->firstOrFail();
        if ($this->request->is(["post", "put"])) {
            $professor = $this->Professors->patchEntity($professor, $this->request->getData());
            if ($this->Professors->save($professor)) {
                $this->Flash->success(__("Alterado com sucesso!"));
                return $this->redirect(["action"=> "index"]);
            }
            $this->Flash->error(__("Não foi possível alterar"));
        }
        $this->set("professor", $professor);
    }
    
   public function delete($id = null) {
    $this->request->allowMethod(["post","delete"]);
    $professor = $this->Professors->findById($id)->firstOrFail();
    if ($this->Professors->delete($professor)) {
        $this->Flash->success(
            __("A postagem com título \"{0}\" foi excluída", $professor->nome)
        );
        return $this->redirect(["action"=> "index"]);
    }
}

 
}