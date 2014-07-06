//
//  ADCrystalBall.m
//  CrystalBall
//
//  Created by Aleem Dhanji on 04-26-14.
//  Copyright (c) 2014 Aleem Dhanji. All rights reserved.
//

#import "ADCrystalBall.h"

@implementation ADCrystalBall

- (NSArray *) predictions {
    if (_predictions == nil) {
        _predictions = [[NSArray alloc] initWithObjects:@"I doubt it!",
                        @"Sure. Why not eh?",
                        @"Let me think about that",
                        @"That is never going to happen!",
                        @"Of course!",
                        @"All signs say yes",
                        @"There's a pretty good chance",
                        @"I don't think so",
                        @"Are you sure you want to know?",
                        @"Concentrate and ask again",
                        @"I'm busy right now", nil];
    }
    
    return _predictions;
}

- (NSString *) randomPrediction {
    int random = arc4random_uniform(self.predictions.count);
    return [self.predictions objectAtIndex:random];
    
}

@end
