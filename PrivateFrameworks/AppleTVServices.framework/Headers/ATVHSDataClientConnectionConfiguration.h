/* Runtime dump - ATVHSDataClientConnectionConfiguration
 * Image: /System/Library/PrivateFrameworks/AppleTVServices.framework/AppleTVServices
 */

@interface ATVHSDataClientConnectionConfiguration : NSObject <NSSecureCoding>
{
    NSString * _hostName;
    unsigned int _port;
    NSString * _ipAddress;
}

@property (copy, nonatomic) NSString * hostName;
@property (nonatomic) unsigned int port;
@property (copy, nonatomic) NSString * ipAddress;

+ (char)supportsSecureCoding;

- (ATVHSDataClientConnectionConfiguration *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (void).cxx_destruct;
- (unsigned int)port;
- (NSString *)ipAddress;
- (char)_isEqualToConnectionConfiguration:(NSDictionary *)arg0;
- (void)setHostName:(NSString *)arg0;
- (void)setIPAddress:(NSString *)arg0;
- (NSString *)hostName;
- (void)setPort:(unsigned int)arg0;

@end
