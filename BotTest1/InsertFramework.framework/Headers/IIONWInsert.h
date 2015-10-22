//
//  IIONWInsert.h
//  InsertFramework
//
//  Created by Avner Barr on 9/7/15.
//  Copyright (c) 2015 Insert. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "IIOJSONProtocol.h"
#import "IIONWTypes.h"

@class IIONWInsertConfiguration,IIONWInsertCapping;
@interface IIONWInsert : NSObject <IIOJSONProtocol>

@property (nonatomic, readonly) NSNumber *id;
@property (nonatomic, readonly) IIONWInsertConfiguration *configuration;
@property (nonatomic, readonly) IIONWInsertCapping *capping;
@end

@interface IIONWInsertCapping : NSObject <IIOJSONProtocol>

@property (nonatomic, readonly) NSNumber *maxSessionImpressions;
@end