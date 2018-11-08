//
//  agBleDevice.h
//  xcsBle
//

#import <Foundation/Foundation.h>
#import <CoreBluetooth/CoreBluetooth.h>

NS_ASSUME_NONNULL_BEGIN

@protocol agBleDeviceDelegate;
@interface agBleDevice : NSObject

+ (agBleDevice*)instanceWith:(CBPeripheral*) peripheral;
- (id)initWithPeripheral:(CBPeripheral*) peripheral;
@property(nonatomic, weak, nullable) id<agBleDeviceDelegate> delegate;

- (NSString*)name;

- (void)discoverServices:(nullable NSArray<CBUUID *> *)serviceUUIDs;
- (void)discoverCharacteristics:(nullable NSArray<CBUUID *> *)characteristicUUIDs forService:(CBService *)service;

- (void) subscribeCharacteristicValue:(CBCharacteristic*)characteristic;
- (void) unsubscribeCharacteristicValue:(CBCharacteristic*)characteristic;

- (void)send:(NSData*)data by:(CBCharacteristic*)characteristic;

@end

@protocol agBleDeviceDelegate
@optional
- (void)bleDevice:(agBleDevice*)device didDiscoverServices:(NSArray*)services error:(nullable NSError *)error;
- (void)bleDevice:(agBleDevice*)device didDiscoverCharacteristicsForService:(CBService *)service error:(nullable NSError *)error;

- (void)bleDevice:(agBleDevice *)device hasDataWithCharactistic:(CBCharacteristic *)characteristic error:(nullable NSError *)error;

- (void)bleDevice:(agBleDevice *)device didWriteValueForCharacteristic:(CBCharacteristic *)characteristic error:(nullable NSError *)error;
@end

NS_ASSUME_NONNULL_END

