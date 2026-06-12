#include <stdio.h>
#include <stdbool.h>

/**
 * @brief Calcule le résultat de la porte logique NAND.
 *
 * La porte NAND retourne faux uniquement lorsque ses deux entrées sont vraies.
 * Dans tous les autres cas, elle retourne vrai.
 *
 * @param a Première entrée booléenne.
 * @param b Deuxième entrée booléenne.
 * @return true si au moins une des deux entrées est fausse.
 * @return false si les deux entrées sont vraies.
 */
bool porte_nand(const bool a, const bool b)
{
    return !(a && b);
}

/**
 * @brief Affiche la table de vérité de la porte logique NAND.
 *
 * Le programme teste toutes les combinaisons possibles des deux entrées
 * booléennes a et b, puis affiche le résultat correspondant.
 */
void porte_nand_aficher_table_verite(void)
{
    for (int i = 0; i <= 1; i++) {
        for (int j = 0; j <= 1; j++) {
            bool c = porte_nand(i, j);
            printf("a = %i, b = %i => c = %i\n", i, j, c);
        }
    }
}

int main(void)
{
    porte_nand_aficher_table_verite();
    return 0;
}
