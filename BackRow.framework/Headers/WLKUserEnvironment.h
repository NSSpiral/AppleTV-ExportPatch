/* Runtime dump - WLKUserEnvironment
 * Image: /Applications/AppleTV.app/AppleTV
 */

@interface WLKUserEnvironment : NSObject
{
    char _consented;
    NSString * _DSID;
    NSString * _storeFrontIdentifier;
    NSString * _localeIdentifier;
    id _entitlements;
    NSString * _restrictions;
    NSArray * _consentedBrands;
    unsigned int _protocolVersion;
}

@property (retain, nonatomic) NSString * DSID;
@property (retain, nonatomic) NSString * storeFrontIdentifier;
@property (retain, nonatomic) NSString * localeIdentifier;
@property (readonly, nonatomic) id entitlements;
@property (readonly, nonatomic) NSString * restrictions;
@property (readonly, nonatomic) NSArray * consentedBrands;
@property (readonly, nonatomic) char consented;
@property (nonatomic) unsigned int protocolVersion;

+ (void)setCurrentEnvironmentForTesting:(id)arg0;
+ (WLKUserEnvironment *)currentEnvironment;

- (char)isEqualToEnvironment:(NSDictionary *)arg0;
- (unsigned int)_hashForStoreStuff;
- (NSArray *)consentedBrands;
- (char)consented;
- (NSString *)storeFrontIdentifier;
- (WLKUserEnvironment *)init;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (NSString *)localeIdentifier;
- (void).cxx_destruct;
- (void)setDSID:(NSSet *)arg0;
- (void)setLocaleIdentifier:(NSString *)arg0;
- (NSArray *)entitlements;
- (unsigned int)protocolVersion;
- (void)setProtocolVersion:(unsigned int)arg0;
- (NSString *)restrictions;
- (NSString *)DSID;
- (void)setStoreFrontIdentifier:(NSString *)arg0;

@end
