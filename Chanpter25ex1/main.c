//
//  main.c
//  Chanpter25ex1
//
//  Created by mac_ck on 30/01/2019.
//  Copyright © 2019 mac_ck. All rights reserved.
//

#include <stdio.h>

int main(){
    int i ;
    int ctr = 0;
    char ans;
    
    char * movies[9] = {"Amour","Argo",
        "Beasts of the Southern Wild",
        "Django Unchained",
        "Les Miserables",
        "Life of Pi",
        "Lincoln",
        "Silver Linings Playbook",
        "Titanic"
    };
    
    int movieratings[9];
    
    char * tempmovie = "이것은 영화를 정렬하기 위하여 사용된다. ";
    
    int outer, inner, didSwap, temprating;
    
    printf("\n\n ***  오스카상 후보");
    printf("최우수 영화후보작입니다");
    
    for (i=0; i<9; i++) {
        printf("\n 영화 %s을 보셨나요? (Y/N):",movies[i]);
        scanf(" %c",&ans);
        if((toupper(ans))=='Y'){
            printf("\n평점을 매겨주세요 ");
            printf("(1부터 10까지): ");
            scanf( "%d",&movieratings[i]);
            
            ctr++;
            
            continue;
        }
        else{
            movieratings[i] = -1;
            
            
        }
    }
    
    for(outer = 0 ; outer<8; outer++){
        didSwap = 0;
        for(inner = outer;inner<9;inner++){
            
            if(movieratings[inner] > movieratings[outer]){
                tempmovie = movies[inner];
                temprating = movieratings[inner];
                
                movies[inner]=movies[outer];
                movieratings[inner]=movieratings[outer];
                
                movies[outer] = tempmovie;
                movieratings[outer] = temprating;
                
                didSwap =1;
                
                
            }
        }
        
        if(didSwap ==0) break;
        
    }
    
    printf("평점 순위\n" );
    
    for(i=0;i<ctr;i++){
        
        printf("%s은 %d으로 평가되었음!\n",movies[i],movieratings[i]);
        
        
    }
    return 0;
}
