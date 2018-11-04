//
//  agBleBeacon.h
//  xcsBle
//
//  Created by Cypress on 2018/11/4.
//  Copyright © 2018 xcs. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface agBleBeacon : NSObject
@property (strong, nonatomic) NSArray *identifiers;
@property (strong, nonatomic) NSArray *dataFields;
@property (strong, nonatomic) NSNumber *measuredPower;
@property (strong, nonatomic) NSNumber *rssi;
@property (strong, nonatomic) NSNumber *beaconTypeCode;
@property (strong, nonatomic) NSNumber *manufacturer;

@property (strong, nonatomic) NSString *name;

@property (strong, nonatomic) NSNumber *serviceUuid;
@property (strong, nonatomic) id beaconObject;
@property (readonly) NSString *id1;
@property (readonly) NSString *id2;
@property (readonly) NSString *id3;


@end

NS_ASSUME_NONNULL_END

