//
//  IIOJSONProtocol.h
//  ViewIdentification
//
//  Created by Avner Barr on 7/10/15.
//  Copyright (c) 2015 Avner Barr. All rights reserved.
//

#import <Foundation/Foundation.h>
NS_ASSUME_NONNULL_BEGIN
@protocol IIOJSONProtocol <NSObject>

-(nullable NSDictionary *)json;
+(nullable instancetype)initWithJson:(nullable NSDictionary  *)json;
@end
NS_ASSUME_NONNULL_END
