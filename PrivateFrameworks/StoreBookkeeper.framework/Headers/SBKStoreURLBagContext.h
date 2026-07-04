/* Runtime dump - SBKStoreURLBagContext
 * Image: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
 */

@interface SBKStoreURLBagContext : NSObject <NSMutableCopying, NSCopying>
{
    char _domainDisabled;
    NSString * _domain;
    NSURL * _syncRequestURL;
    NSURL * _pushKeyValueRequestURL;
    NSURL * _pullKeyValueRequestURL;
    NSURL * _pushAllKeyValueRequestURL;
    NSURL * _pullAllKeyValueRequestURL;
    SSURLBag * _bag;
    double _pollingIntervalInSeconds;
}

@property (copy) NSString * domain;
@property (retain) NSURL * syncRequestURL;
@property (retain) NSURL * pushKeyValueRequestURL;
@property (retain) NSURL * pullKeyValueRequestURL;
@property (retain) NSURL * pushAllKeyValueRequestURL;
@property (retain) NSURL * pullAllKeyValueRequestURL;
@property char domainDisabled;
@property double pollingIntervalInSeconds;
@property (retain) SSURLBag * bag;

+ (void)loadBagContextFromURLBag:(id)arg0 domain:(NSString *)arg1 completionBlock:(id /* block */)arg2;
+ (void)_findFirstValueInBag:(id)arg0 keyEnumerator:(NSEnumerator *)arg1 valueTransformer:(_NSSharedValueTransformer *)arg2 defaultValue:(/* block */ id)arg3 completionBlock:(id /* block */)arg4;
+ (void)enumerateRequestURLBagKeysWithBlock:(id /* block */)arg0;
+ (NSString *)UPPDomainIdentifier;
+ (NSString *)ExtrasDomainIdentifier;

- (SBKStoreURLBagContext *)init;
- (NSString *)description;
- (NSString *)domain;
- (SBKStoreURLBagContext *)copyWithZone:(struct _NSZone *)arg0;
- (SBKStoreURLBagContext *)mutableCopyWithZone:(struct _NSZone *)arg0;
- (void).cxx_destruct;
- (SSURLBag *)bag;
- (void)setDomain:(NSString *)arg0;
- (NSURL *)pushKeyValueRequestURL;
- (NSURL *)syncRequestURL;
- (char)domainDisabled;
- (double)pollingIntervalInSeconds;
- (SBKStoreURLBagContext *)initWithBag:(SSURLBag *)arg0 domain:(NSString *)arg1;
- (NSString *)_initWithDomain:(NSString *)arg0 syncRequestURL:(NSURL *)arg1 domainDisabled:(char)arg2;
- (void)setPollingIntervalInSeconds:(double)arg0;
- (void)setSyncRequestURL:(NSURL *)arg0;
- (void)setPushKeyValueRequestURL:(NSURL *)arg0;
- (NSURL *)pullKeyValueRequestURL;
- (void)setPullKeyValueRequestURL:(NSURL *)arg0;
- (NSURL *)pushAllKeyValueRequestURL;
- (void)setPushAllKeyValueRequestURL:(NSURL *)arg0;
- (NSURL *)pullAllKeyValueRequestURL;
- (void)setPullAllKeyValueRequestURL:(NSURL *)arg0;
- (void)setDomainDisabled:(char)arg0;
- (void)setBag:(SSURLBag *)arg0;

@end
