/* Runtime dump - MCManagedDomainsCacheEntry
 * Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@interface MCManagedDomainsCacheEntry : NSObject
{
    char _subdomainsMatch;
    NSString * _domain;
    NSString * _path;
    NSNumber * _port;
}

@property (nonatomic) char subdomainsMatch;
@property (retain, nonatomic) NSString * domain;
@property (retain, nonatomic) NSString * path;
@property (retain, nonatomic) NSNumber * port;

+ (NSString *)normalizedPatternString:(NSString *)arg0;

- (NSString *)description;
- (NSString *)domain;
- (NSString *)path;
- (void)setPath:(NSString *)arg0;
- (void).cxx_destruct;
- (NSNumber *)port;
- (void)setDomain:(NSString *)arg0;
- (void)setPort:(NSNumber *)arg0;
- (char)matchesURL:(NSURL *)arg0;
- (MCManagedDomainsCacheEntry *)initWithPattern:(NSObject *)arg0;
- (char)subdomainsMatch;
- (void)setSubdomainsMatch:(char)arg0;

@end
