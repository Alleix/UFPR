<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>
<body>

    <?php
    $hora = 13;
    $minuto = 30;

    ?>

    <h1>Pagina Inicial</h1>
    <p>
        <?php if ($hora<12): ?>
            <strong>Bom Dia</strong>
        <?php elseif($hora>=12 and $hora < 18): ?>
            <strong>Boa Tarde</strong>
        <?php else: ?>
            <strong>Boa Noite </strong>
        <?php endif; ?>

        Alleix!

    </p>
    
</body>
</html>