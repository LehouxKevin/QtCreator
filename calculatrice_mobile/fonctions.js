function operations(op) {
    if(op === "C")
    {
        textField_affichage.text = " ";
    }
    else {
        if(op === "=")
        {
            textField_affichage.text = eval(textField_affichage.text);
        }
        else {
            textField_affichage.text = textField_affichage.text + op;
        }
    }
}
