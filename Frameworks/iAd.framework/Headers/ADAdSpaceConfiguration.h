/* Runtime dump - ADAdSpaceConfiguration
 * Image: /System/Library/Frameworks/iAd.framework/iAd
 */

@interface ADAdSpaceConfiguration : NSObject <NSSecureCoding>
{
    int _creativeType;
    int _options;
    NSString * _identifier;
    NSURL * _serverURL;
    NSString * _advertisingSection;
    NSString * _authenticationUserName;
    NSSet * _context;
}

@property (nonatomic) int creativeType;
@property (nonatomic) int options;
@property (copy, nonatomic) NSString * identifier;
@property (copy, nonatomic) NSURL * serverURL;
@property (copy, nonatomic) NSString * advertisingSection;
@property (copy, nonatomic) NSString * authenticationUserName;
@property (copy, nonatomic) NSSet * context;

+ (char)supportsSecureCoding;

- (void)dealloc;
- (ADAdSpaceConfiguration *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSString *)identifier;
- (NSSet *)context;
- (void)setIdentifier:(NSString *)arg0;
- (void)setContext:(NSSet *)arg0;
- (void)setOptions:(int)arg0;
- (int)options;
- (void)setAdvertisingSection:(NSString *)arg0;
- (void)setAuthenticationUserName:(NSString *)arg0;
- (NSString *)advertisingSection;
- (NSString *)authenticationUserName;
- (int)creativeType;
- (void)setCreativeType:(int)arg0;
- (NSURL *)serverURL;
- (void)setServerURL:(NSURL *)arg0;

@end
