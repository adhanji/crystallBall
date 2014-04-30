//
//  ADCrystalBall.h
//  CrystalBall
//
//  Created by Aleem Dhanji on 04-26-14.
//  Copyright (c) 2014 Aleem Dhanji. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ADCrystalBall : NSObject {
    NSArray *_predictions;
}

@property (strong, nonatomic, readonly) NSArray *predictions;

- (NSString *) randomPrediction;

@end
