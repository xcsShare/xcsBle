//
//  agBleMgr.h
//  xcsBle
//

#import <Foundation/Foundation.h>
#import "agBleDevice.h"
#import "agBleBeacon.h"

NS_ASSUME_NONNULL_BEGIN

@protocol agBleMgrDelegate;
@interface agBleMgr : NSObject

+(agBleMgr*) instanceWith:(nullable dispatch_queue_t)queue options:(nullable NSDictionary<NSString *, id> *)options;

@property(nonatomic, weak, nullable) id<agBleMgrDelegate> delegate;

- (void)startScan;
- (void)stopScan;
- (BOOL)IsScanning;

- (BOOL) connectToPeripheral:(agBleDevice*)device options:(nullable NSDictionary<NSString *, id> *)options;
- (BOOL) disconnectByPeripheral:(agBleDevice*)device;


@property (nonatomic) BOOL BeaconParserEnable;
//@property (readonly) MANAGER_STATUS status;

@end

@protocol agBleMgrDelegate

- (void)systemBleDidUpdateState:(NSString*)state;

- (NSError*) didDiscoverPeripheral:(agBleDevice*)device BLEMgr:(agBleMgr*)mgr;
- (NSError*) didDiscoverBeacon:(agBleBeacon*)beacon BLEMgr:(agBleMgr*)mgr;
- (void)didFailToConnect:(agBleDevice*)device BLEMgr:(agBleMgr*)mgr;
- (void)didConnectPeripheral:(agBleDevice*)device BLEMgr:(agBleMgr*)mgr;
- (void)didDisconnectPeripheral:(agBleDevice*)device BLEMgr:(agBleMgr*)mgr;
@end

NS_ASSUME_NONNULL_END
