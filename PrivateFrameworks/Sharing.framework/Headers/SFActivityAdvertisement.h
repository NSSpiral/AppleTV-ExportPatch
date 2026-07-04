/* Runtime dump - SFActivityAdvertisement
 * Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

@interface SFActivityAdvertisement : NSObject <NSSecureCoding>
{
    NSData * _advertisementPayload;
    NSDictionary * _options;
    SFPeerDevice * _device;
    NSData * _activityPayload;
}

@property (readonly, copy) NSData * advertisementPayload;
@property (readonly, copy) NSDictionary * options;
@property (readonly, retain) SFPeerDevice * device;
@property (readonly, copy) NSString * deviceIdentifier;
@property (readonly, copy) NSString * deviceName;
@property (readonly, copy) NSString * deviceModelIdentifier;
@property (copy) NSData * activityPayload;

+ (char)supportsSecureCoding;

- (NSData *)activityPayload;
- (void)setActivityPayload:(NSData *)arg0;
- (void)dealloc;
- (SFActivityAdvertisement *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSString *)description;
- (NSDictionary *)options;
- (NSString *)deviceIdentifier;
- (NSString *)deviceName;
- (NSData *)advertisementPayload;
- (SFActivityAdvertisement *)initWithAdvertisementPayload:(NSData *)arg0 options:(NSDictionary *)arg1 device:(SFPeerDevice *)arg2;
- (NSString *)deviceModelIdentifier;
- (SFPeerDevice *)device;

@end
