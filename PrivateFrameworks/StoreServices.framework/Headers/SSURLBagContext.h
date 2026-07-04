/* Runtime dump - SSURLBagContext
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSURLBagContext : NSObject <SSXPCCoding, NSCopying>
{
    int _allowedRetryCount;
    char _allowsBootstrapCellularData;
    char _allowsExpiredBags;
    int _bagType;
    NSMutableDictionary * _httpHeaders;
    char _ignoresCaches;
    NSNumber * _userIdentifier;
    char _usesCachedBagsOnly;
}

@property (nonatomic) int allowedRetryCount;
@property (nonatomic) int bagType;
@property (readonly, nonatomic) NSString * cacheKey;
@property (nonatomic) char ignoresCaches;
@property (retain, nonatomic) NSNumber * userIdentifier;
@property (copy, nonatomic) NSDictionary * allHTTPHeaders;
@property (nonatomic) char allowsBootstrapCellularData;
@property (nonatomic) char allowsExpiredBags;
@property (nonatomic) char usesCachedBagsOnly;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSObject *)contextWithBagType:(int)arg0;

- (id)valueForHTTPHeaderField:(id)arg0;
- (void)setUserIdentifier:(NSNumber *)arg0;
- (NSNumber *)userIdentifier;
- (void)setAllowedRetryCount:(int)arg0;
- (NSDictionary *)copyXPCEncoding;
- (SSURLBagContext *)initWithXPCEncoding:(NSString *)arg0;
- (void)dealloc;
- (SSURLBagContext *)init;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (SSURLBagContext *)copyWithZone:(struct _NSZone *)arg0;
- (NSString *)cacheKey;
- (void)setValue:(NSObject *)arg0 forHTTPHeaderField:(id)arg1;
- (void)setBagType:(int)arg0;
- (char)allowsBootstrapCellularData;
- (void)setAllowsBootstrapCellularData:(char)arg0;
- (void)setIgnoresCaches:(char)arg0;
- (int)allowedRetryCount;
- (int)bagType;
- (NSDictionary *)allHTTPHeaders;
- (void)setAllHTTPHeaders:(NSDictionary *)arg0;
- (char)allowsExpiredBags;
- (void)setAllowsExpiredBags:(char)arg0;
- (char)ignoresCaches;
- (char)usesCachedBagsOnly;
- (void)setUsesCachedBagsOnly:(char)arg0;

@end
