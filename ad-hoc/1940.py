# -*- coding: utf-8 -*-

def get_winner(players):
    
    response = {'id': 0, 'score': 0}

    for player in players:        
        if response['score'] <= player['score']:
            response['id'] = player['id']
            response['score']= player['score']


    return response['id']


if __name__ == '__main__':
    n_players, n_rounds = input().split()
    scores = input().split()

    n_players = int(n_players)
    n_rounds = int(n_rounds)

    players = []
    
    for i in range(n_players):
        players.append({'id': i + 1, 'score': 0})

    for i, score in enumerate(scores):
        players.append({'id': i + 1, 'score': int(score)}) 

        

        

    print(get_winner(players))




