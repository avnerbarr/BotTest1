//
//  InsertGlobalUtils.h
//  InsertFramework
//
//  Created by Oded Regev on 5/11/15.
//  Copyright (c) 2015 Insert. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>


#import "IIOAnalyticsConstants.h"

@interface IIOInsertGlobalUtils : NSObject

@property (nonatomic, strong) NSString *accessToken; // per session

+(instancetype)sharedUtils;

-(NSDictionary *)getDeviceInfo;

-(NSString *)getDeviceId;

-(NSString *)convertDataToBase64:(NSData *)data;
-(NSData *)convertBase64ToData:(NSString *)base64;

-(NSData *)takeScreenshot;
+(UIImage *)snapShotView:(UIView *)view;

-(IIOAnalyticsOrienatation)getDeviceOrientation;
@end
