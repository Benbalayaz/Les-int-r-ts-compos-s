#include <stdio.h>  // Inclusion de la bibliothèque standard d'entrée/sortie

int main() {
    
    float x,Un,U,y,p,n,R;
    int i,z,a,T;
    printf("Bonjour, vous être dans un programme qui calcule les intérêt composées!\nMerci de bien voulour entrer les paramètre suivant:\n");

    printf ("La somme que vous souhaitez invitir chaque mois (en $): ");
    scanf ("%d", &z);

    printf ("Le taut d'intérêt que vous estimer a votre invistissement durant une année civil (en pourcentage): ");
    scanf ("%f",&p);

    printf ("Pour combien d'année vous souhaitez invistir: ");
    scanf ("%d",&a);

    U=12*z;
    n=U;
    x=p/100;
    for (i=1; i <= a; i++){
        Un = U*x + U;
        y=Un + n;
        U=y;

        if(i==a){
            printf("la valeur de votre invistissement pendant %d année(s) est de :%f $ \n",i,Un);
            T = 12 * a * z;
            printf("pendant %d année(s), vous avez invistie :%d $\n",i, T);
            R = Un - T;
            printf("Vous avez une recette de :%f $\n\n\n",R);
        }
        //printf("la valeur de votre invistissement pour la %d année est de %f\n", i, Un);

    }
return 0;
}