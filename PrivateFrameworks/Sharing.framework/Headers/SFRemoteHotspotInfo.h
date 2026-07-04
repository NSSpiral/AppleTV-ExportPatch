/* Runtime dump - SFRemoteHotspotInfo
 * Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

@interface SFRemoteHotspotInfo : NSObject <NSSecureCoding>
{
    NSString * _name;
    NSString * _password;
    NSNumber * _channel;
}

@property (copy) NSString * name;
@property (copy) NSString * password;
@property (retain) NSNumber * channel;

+ (char)supportsSecureCoding;

- (void)dealloc;
- (SFRemoteHotspotInfo *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (void)setName:(NSString *)arg0;
- (NSString *)name;
- (NSString *)password;
- (void)setPassword:(NSString *)arg0;
- (SFRemoteHotspotInfo *)initWithName:(NSString *)arg0 password:(NSString *)arg1 channel:(NSNumber *)arg2;
- (void)setChannel:(NSNumber *)arg0;
- (NSNumber *)channel;

@end
