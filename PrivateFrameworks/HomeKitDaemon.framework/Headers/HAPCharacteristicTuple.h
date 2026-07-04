/* Runtime dump - HAPCharacteristicTuple
 * Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HAPCharacteristicTuple : NSObject
{
    HAPCharacteristic * _hapCharacteristic;
    NSString * _serverIdentifier;
    int _linkType;
}

@property (retain, nonatomic) HAPCharacteristic * hapCharacteristic;
@property (retain, nonatomic) NSString * serverIdentifier;
@property int linkType;

- (void).cxx_destruct;
- (void)setServerIdentifier:(NSString *)arg0;
- (int)linkType;
- (NSString *)serverIdentifier;
- (void)setLinkType:(int)arg0;
- (HAPCharacteristicTuple *)initWithHAPCharacteristic:(HAPCharacteristic *)arg0 serverIdentifier:(NSString *)arg1 linkType:(int)arg2;
- (HAPCharacteristic *)hapCharacteristic;
- (void)setHapCharacteristic:(HAPCharacteristic *)arg0;

@end
