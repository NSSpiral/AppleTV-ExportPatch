/* Runtime dump - ATVCloudCollectionQueryHandler
 * Image: /System/Library/PrivateFrameworks/AppleTVServices.framework/AppleTVServices
 */

@interface ATVCloudCollectionQueryHandler : ATVCloudQueryHandler <ATVCloudCollectionQueryHandler>

- (void)handleQuery:(NSObject *)arg0 withContext:(void *)arg1;
- (NSObject *)orderingTermsForProperty:(NSString *)arg0;
- (NSObject *)blankProperty;
- (unsigned int)dmapResponseHeaderCode;
- (Class)collectionClass;
- (void)_handleDAAPQuery:(NSObject *)arg0;
- (void)_handleQuery:(NSObject *)arg0;
- (NSObject *)_mlQueryForATVMediaQuery:(NSObject *)arg0 usingSections:(char)arg1;
- (float)_durationOfAlbum:(unsigned long long)arg0;
- (Class)entityClass;
- (NSString *)foreignPersistentIDProperty;

@end
