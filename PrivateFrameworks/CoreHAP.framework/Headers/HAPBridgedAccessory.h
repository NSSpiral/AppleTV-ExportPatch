/* Runtime dump - HAPBridgedAccessory
 * Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

@interface HAPBridgedAccessory : HAPAccessory <HAPAccessoryServerInternalDelegate>
{
    HAPCharacteristic * _reachabilityCharacteristic;
}

@property (weak, nonatomic) HAPCharacteristic * reachabilityCharacteristic;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (NSString *)shortDescription;
- (void).cxx_destruct;
- (void)accessoryServer:(HAPAccessoryServer *)arg0 didUpdateValueForCharacteristic:(HAPCharacteristic *)arg1;
- (NSArray *)accessoryServerDidRequestCharacteristicsToRegisterForNotifications:(HAPAccessoryServer *)arg0;
- (HAPBridgedAccessory *)initWithServer:(NSObject *)arg0 instanceID:(NSNumber *)arg1 parsedServices:(id)arg2;
- (char)mergeWithAccessory:(id)arg0;
- (void)setReachable:(char)arg0;
- (char)__parseServices;
- (char)__isReachable;
- (HAPCharacteristic *)reachabilityCharacteristic;
- (char)__parseBridgeService:(NSObject *)arg0;
- (void)setReachabilityCharacteristic:(HAPCharacteristic *)arg0;
- (char)isPrimary;

@end
