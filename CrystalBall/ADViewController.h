//
//  ADViewController.h
//  CrystalBall
//
//  Created by Aleem Dhanji on 04-22-14.
//  Copyright (c) 2014 Aleem Dhanji. All rights reserved.
//

#import <UIKit/UIKit.h>

@class ADCrystalBall;

@interface ADViewController : UIViewController
@property (strong, nonatomic) IBOutlet UILabel *predictionLabel;
@property (strong, nonatomic) ADCrystalBall *crystalBall;
@property (strong, nonatomic) IBOutlet UIImageView *backgroundImageView;

- (void) makePrediction;

@end
