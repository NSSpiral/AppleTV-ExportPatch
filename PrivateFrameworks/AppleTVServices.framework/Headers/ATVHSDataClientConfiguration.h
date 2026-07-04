/* Runtime dump - ATVHSDataClientConfiguration
 * Image: /System/Library/PrivateFrameworks/AppleTVServices.framework/AppleTVServices
 */

@interface ATVHSDataClientConfiguration : NSObject <NSSecureCoding>
{
    NSString * _name;
    ATVHSDataClientConnectionConfiguration * _connectionConfiguration;
    ATVHSDataClientSessionConfiguration * _sessionConfiguration;
    NSString * _keybagPath;
}

@property (copy, nonatomic) NSString * name;
@property (retain, nonatomic) ATVHSDataClientConnectionConfiguration * connectionConfiguration;
@property (retain, nonatomic) ATVHSDataClientSessionConfiguration * sessionConfiguration;
@property (copy, nonatomic) NSString * keybagPath;

+ (char)supportsSecureCoding;

- (void)setKeybagPath:(NSString *)arg0;
- (ATVHSDataClientConfiguration *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (void)setName:(NSString *)arg0;
- (NSString *)name;
- (void).cxx_destruct;
- (NSString *)keybagPath;
- (void)setConnectionConfiguration:(ATVHSDataClientConnectionConfiguration *)arg0;
- (ATVHSDataClientConnectionConfiguration *)connectionConfiguration;
- (char)_isEqualToClientConfiguration:(NSDictionary *)arg0;
- (ATVHSDataClientConfiguration *)initWithName:(NSString *)arg0 connectionConfiguration:(ATVHSDataClientConnectionConfiguration *)arg1 sessionConfiguration:(ATVHSDataClientSessionConfiguration *)arg2 keybagPath:(NSString *)arg3;
- (ATVHSDataClientSessionConfiguration *)sessionConfiguration;
- (void)setSessionConfiguration:(ATVHSDataClientSessionConfiguration *)arg0;

@end
