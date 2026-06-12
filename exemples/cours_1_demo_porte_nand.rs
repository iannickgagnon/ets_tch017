/// Calcule le résultat de la porte logique NAND.
///
/// La porte NAND retourne `false` uniquement lorsque ses deux entrées sont
/// `true`. Dans tous les autres cas, elle retourne `true`.
///
/// # Paramètres
///
/// - `a` : première entrée booléenne.
/// - `b` : deuxième entrée booléenne.
///
/// # Retour
///
/// Retourne `true` si au moins une des deux entrées est `false`.
/// Retourne `false` si les deux entrées sont `true`.
fn porte_nand(a: bool, b: bool) -> bool {
    !(a && b)
}

/// Affiche la table de vérité de la porte logique NAND.
///
/// Le programme teste toutes les combinaisons possibles des deux entrées
/// booléennes `a` et `b`, puis affiche le résultat correspondant.
fn porte_nand_afficher_table_verite() {
    for a in [false, true] {
        for b in [false, true] {
            let c = porte_nand(a, b);
            println!("a = {}, b = {} => c = {}", a, b, c);
        }
    }
}

fn main() {
    porte_nand_afficher_table_verite();
}
