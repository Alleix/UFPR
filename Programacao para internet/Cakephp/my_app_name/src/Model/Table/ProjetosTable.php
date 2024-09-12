<?php

namespace App\Model\Table;

use Cake\ORM\Table;
use Cake\Validation\Validator;

class ProjetosTable extends Table {
    public function initialize(array $config): void {
        parent::initialize($config);
        $this->addBehavior("Timestamp");
        $this->belongsTo("Professors");
    }
 

    public function validationDefault(Validator $validator): Validator {
        $validator
            ->notEmptyString('titulo')
            ->minLength('titulo',5)
            ->maxLength('titulo',255)

            ->notEmptyString('descricao')
            ->minLength('descricao',10);
        return $validator;
    }
}
