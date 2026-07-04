/* Runtime dump - HAPRecentlySeenPairedBTLEPeripheralTuple
 * Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

@interface HAPRecentlySeenPairedBTLEPeripheralTuple : NSObject
{
    char _notifyingCharacteristicUpdated;
    CBPeripheral * _peripheral;
    NSNumber * _statusFlags;
    NSNumber * _stateNumber;
    NSNumber * _configNumber;
    NSNumber * _categoryIdentifier;
    NSString * _identifier;
    NSMutableDictionary * _cachedDescriptors;
    NSMapTable * _cachedSignatures;
    double _lastSeen;
}

@property (readonly, nonatomic) double lastSeen;
@property (readonly, nonatomic) CBPeripheral * peripheral;
@property (retain, nonatomic) NSNumber * statusFlags;
@property (retain, nonatomic) NSNumber * stateNumber;
@property (retain, nonatomic) NSNumber * configNumber;
@property (retain, nonatomic) NSNumber * categoryIdentifier;
@property (readonly, nonatomic) NSString * identifier;
@property (nonatomic) char notifyingCharacteristicUpdated;
@property (readonly, nonatomic) NSMutableDictionary * cachedDescriptors;
@property (readonly, nonatomic) NSMapTable * cachedSignatures;

- (NSString *)identifier;
- (void).cxx_destruct;
- (NSNumber *)configNumber;
- (NSNumber *)statusFlags;
- (void)setConfigNumber:(NSNumber *)arg0;
- (void)setStatusFlags:(NSNumber *)arg0;
- (double)lastSeen;
- (HAPRecentlySeenPairedBTLEPeripheralTuple *)initRecentlySeenPairedBTLEPeripheral:(id)arg0 statusFlags:(NSNumber *)arg1 stateNumber:(NSNumber *)arg2 category:(NSString *)arg3 configNumber:(NSNumber *)arg4 identifier:(NSString *)arg5;
- (CBPeripheral *)peripheral;
- (NSNumber *)stateNumber;
- (void)setStateNumber:(NSNumber *)arg0;
- (NSNumber *)categoryIdentifier;
- (void)setCategoryIdentifier:(NSNumber *)arg0;
- (char)notifyingCharacteristicUpdated;
- (void)setNotifyingCharacteristicUpdated:(char)arg0;
- (NSMutableDictionary *)cachedDescriptors;
- (NSMapTable *)cachedSignatures;

@end
