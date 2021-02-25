let pwd = 'pwd';
let inpu = 'pwd';

let login = pwd == inpu;


if (login == true){    
    console.log('Login correcto');

}else {
    console.log ('Contraseña incorrecta');
}

let score = 70;

if(score > 30){
    console.log('Necesitas practicar mas')
}else if(score>15){
    console.log('estas mejorando');
}
else {
    console.log('Necesitas seguir este tutoral');
}

let typeCard = 'Credit Card';

switch(typeCard){
    case 'Debid Card':
        console.log('Esta es una tarjeta de debito');
        break;
    case 'Credit Card':
        console.log('Esta es una tarjeta de credito');
        break;
    default:
        console.log('No tienes tarjeta');
}