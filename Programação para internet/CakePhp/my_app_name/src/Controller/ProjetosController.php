<?php   

namespace App\Controller;

class ProjetosController extends AppController{

    public function index(){
        $projetos = $this->paginate($this->Projetos);
        $this->set('projetos',$projetos);
    }

    public function view($slug = null){
        $projeto = $this->Projetos->findById($slug)->firstOrFail();
        $this->set('projeto',$projeto);

    }

    public function add(){
        $projeto = $this->Projetos->newEmptyEntity();
        if($this->request->is('post')){
            $projeto = $this->Projetos->patchEntity($projeto,$this->request->getData());
            
            if($this->Projetos->save($projeto)){
                $this->Flash->success(__('Seu Projeto foi salvo com sucesso.'));
                return $this->redirect(['action'=>'index']);
            }
            $this->Flash->error(__('Não foi possivel salver seu projeto'));
        }
        $this->set('projeto',$projeto);
        
        $professors = $this->Projetos->Professors->find("list");
        $this->set("professors",$professors);
        
    }

    public function edit($slug=null){
        $projeto = $this->Projetos->findById($slug)->firstOrFail();
        if($this->request->is(['post','put'])){
            $this->Projetos->patchEntity($projeto,$this->request->getData());
            if($this->Projetos->save($projeto)){
                $this->Flash->success(__('Alterado com sucesso'));
                return $this->redirect(['action'=>'index']);

            }
            $this->Flash->error(__('Não foi possivel alterar o projeto'));
        }
        $this->set('projeto',$projeto);

        $professors = $this->Projetos->Professors->find("list");
        $this->set("professors",$professors);
    }

    public function delete($slug=null){
        $this->request->allowMethod(['post','delete']);
        $projeto = $this->Projetos->findById($slug)->firstOrFail();
        if($this->Projetos->delete($projeto)){  
            $this->Flash->success(__("O projeto intitulado \"{0}\" foi excluído com sucesso.",$projeto->titulo));
            return $this->redirect(['action'=>'index']);
        }
    }
}