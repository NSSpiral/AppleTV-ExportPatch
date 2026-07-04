/* Runtime dump - ATVHSDataServerConfiguration
 * Image: /System/Library/PrivateFrameworks/AppleTVServices.framework/AppleTVServices
 */

@interface ATVHSDataServerConfiguration : NSObject <NSSecureCoding>
{
    ATVHSDataServerID * _serverID;
    unsigned long _sharingVersion;
    NSString * _displayName;
    unsigned int _serverType;
}

@property (readonly, nonatomic) ATVHSDataServerID * serverID;
@property (readonly, nonatomic) unsigned long sharingVersion;
@property (readonly, copy, nonatomic) NSString * displayName;
@property (nonatomic) unsigned int serverType;

+ (char)supportsSecureCoding;

- (ATVHSDataServerConfiguration *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (void).cxx_destruct;
- (NSString *)displayName;
- (unsigned int)_initialServerType;
- (ATVHSDataServerID *)serverID;
- (unsigned long)sharingVersion;
- (ATVHSDataServerConfiguration *)initWithServerID:(ATVHSDataServerID *)arg0 displayName:(NSString *)arg1 sharingVersion:(unsigned long)arg2;
- (void)setServerType:(unsigned int)arg0;
- (unsigned int)serverType;

@end
