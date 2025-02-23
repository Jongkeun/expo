//
//  ABI31_0_0EXCameraPointTransformCalculator.h
//  Exponent
//
//  Created by Stanisław Chmiela on 30.10.2017.
//  Copyright © 2017 650 Industries. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <AVFoundation/AVFoundation.h>

@interface ABI31_0_0CSBufferOrientationCalculator : NSObject

+ (CGAffineTransform)pointTransformForInterfaceOrientation:(UIInterfaceOrientation)orientation forBufferWidth:(CGFloat)bufferWidth andBufferHeight:(CGFloat)bufferHeight andVideoWidth:(CGFloat)videoWidth andVideoHeight:(CGFloat)videoHeight andMirrored:(BOOL)mirrored;

@end
