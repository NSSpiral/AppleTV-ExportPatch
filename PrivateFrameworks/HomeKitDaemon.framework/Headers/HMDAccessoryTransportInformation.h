/* Runtime dump - HMDAccessoryTransportInformation
 * Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDAccessoryTransportInformation : NSObject <NSSecureCoding>
{
    char _reachable;
    HAPAccessory * _hapAccessory;
    NSString * _serverIdentifier;
    NSNumber * _instanceID;
    int _linkType;
}

@property (retain, nonatomic) HAPAccessory * hapAccessory;
@property (retain, nonatomic) NSString * serverIdentifier;
@property (retain, nonatomic) NSNumber * instanceID;
@property int linkType;
@property char reachable;

+ (char)supportsSecureCoding;

- (HMDAccessoryTransportInformation *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSString *)description;
- (void).cxx_destruct;
- (void)setServerIdentifier:(NSString *)arg0;
- (NSNumber *)instanceID;
- (int)linkType;
- (void)setInstanceID:(NSNumber *)arg0;
- (void)setReachable:(char)arg0;
- (NSString *)serverIdentifier;
- (HMDAccessoryTransportInformation *)initWithServerIdentifier:(NSString *)arg0 instanceID:(NSNumber *)arg1 linkType:(int)arg2 reachable:(char)arg3;
- (char)reachable;
- (HMDAccessoryTransportInformation *)initWithHAPAccessory:(HAPAccessory *)arg0;
- (HAPAccessory *)hapAccessory;
- (void)setHapAccessory:(HAPAccessory *)arg0;
- (void)setLinkType:(int)arg0;

@end
