//
//  agBleBeacon.h
//  xcsBle
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface agBleBeacon : NSObject

@property (strong, nonatomic) NSString *name;
@property (strong, nonatomic) NSNumber *serviceUuid;

@property (readonly) NSString *id1;
@property (readonly) NSString *id2;
@property (readonly) NSString *id3;
@property (strong, nonatomic) NSNumber *rssi;

@property (strong, nonatomic) id beaconObject;

@property (strong, nonatomic) NSArray *identifiers;
@property (strong, nonatomic) NSArray *dataFields;
@property (strong, nonatomic) NSNumber *measuredPower;
@property (strong, nonatomic) NSNumber *beaconTypeCode;
@property (strong, nonatomic) NSNumber *manufacturer;

@end

NS_ASSUME_NONNULL_END

