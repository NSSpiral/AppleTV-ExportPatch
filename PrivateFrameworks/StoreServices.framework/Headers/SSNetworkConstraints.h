/* Runtime dump - SSNetworkConstraints
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSNetworkConstraints : NSObject <NSCoding, SSXPCCoding, NSCopying>
{
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    NSMutableDictionary * _sizeLimits;
}

@property (readonly) char anyNetworkTypeEnabled;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (SSNetworkConstraints *)newNetworkConstraintsByDownloadKindFromURLBag:(id)arg0;
+ (NSArray *)_newModernNetworkConstraintsWithArray:(NSArray *)arg0;
+ (NSDictionary *)_newLegacyNetworkConstraintsWithDictionary:(NSDictionary *)arg0;
+ (void)_addNetworkConstraintsToDictionary:(NSDictionary *)arg0 forNetworkType:(int)arg1 legacyDictionary:(NSDictionary *)arg2;

- (long long)sizeLimitForNetworkType:(int)arg0;
- (NSDictionary *)copyXPCEncoding;
- (SSNetworkConstraints *)initWithXPCEncoding:(NSString *)arg0;
- (void)dealloc;
- (SSNetworkConstraints *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (SSNetworkConstraints *)init;
- (char)isEqual:(NSObject *)arg0;
- (NSString *)description;
- (SSNetworkConstraints *)copyWithZone:(struct _NSZone *)arg0;
- (void)setSizeLimit:(long long)arg0 forNetworkType:(int)arg1;
- (void)setSizeLimitsWithStoreConstraintDictionary:(NSDictionary *)arg0;
- (void)_setSizeLimit:(long long)arg0 forNetworkType:(int)arg1;
- (long long)_sizeLimitForNetworkType:(int)arg0;
- (void)_disableAllNetworkTypes;
- (id)_copySizeLimits;
- (void)setAllNetworkTypesDisabled;
- (void)disableCellularNetworkTypes;
- (char)hasSizeLimitForNetworkType:(int)arg0;
- (char)isAnyNetworkTypeEnabled;

@end
