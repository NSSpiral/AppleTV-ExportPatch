/* Runtime dump - ATVCloudPlaylistQueryHandler
 * Image: /System/Library/PrivateFrameworks/AppleTVServices.framework/AppleTVServices
 */

@interface ATVCloudPlaylistQueryHandler : ATVCloudCollectionQueryHandler

+ (NSObject *)mlPredicatePropertyForATVProperty:(NSObject *)arg0;
+ (NSObject *)mlQueryPropertyForATVProperty:(NSObject *)arg0;
+ (NSObject *)mlPropertyForATVProperty:(NSObject *)arg0;

- (void)handleQuery:(NSObject *)arg0 withContext:(void *)arg1;
- (NSObject *)orderingTermsForProperty:(NSString *)arg0;
- (Class)collectionClass;
- (void)_handleDAAPQuery:(NSObject *)arg0;
- (void)_handleQuery:(NSObject *)arg0;
- (NSObject *)_predicateForPlaylistMediaType:(NSObject *)arg0;
- (NSObject *)_mlQueryForATVMediaQuery:(NSObject *)arg0 mediaTypePredicate:(id *)arg1;
- (unsigned long)_specialPlaylistKindForMLKind:(id)arg0;
- (Class)entityClass;
- (NSString *)foreignPersistentIDProperty;

@end
