/* Runtime dump - ATVCloudItemQueryHandler
 * Image: /System/Library/PrivateFrameworks/AppleTVServices.framework/AppleTVServices
 */

@interface ATVCloudItemQueryHandler : ATVCloudQueryHandler

+ (NSObject *)mlPredicatePropertyForATVProperty:(NSObject *)arg0;
+ (NSObject *)mlQueryPropertyForATVProperty:(NSObject *)arg0;
+ (NSObject *)mlPropertyForATVProperty:(NSObject *)arg0;
+ (ATVCloudItemQueryHandler *)atvMediaItemsForTrackIDs:(id)arg0 mlLibrary:(ML3MusicLibrary *)arg1 dataClient:(ATVDataClient *)arg2 propertiesRequested:(id)arg3;
+ (NSDictionary *)_mlPropertiesForATVProperties:(NSDictionary *)arg0;
+ (NSObject *)_bookmarkForStoreID:(NSObject *)arg0 mediaType:(NSObject *)arg1;
+ (char)_evaluateNumericFilter:(NSObject *)arg0 dataToTest:(unsigned int)arg1;
+ (NSObject *)_atvDataTypeForMLMediaType:(unsigned long)arg0;
+ (ATVCloudItemQueryHandler *)atvMediaItemsForCloudIDs:(id)arg0 mlLibrary:(ML3MusicLibrary *)arg1 dataClient:(ATVDataClient *)arg2 propertiesRequested:(id)arg3;

- (void)handleQuery:(NSObject *)arg0 withContext:(void *)arg1;
- (void)_handleDAAPQuery:(NSObject *)arg0;
- (void)_handleQuery:(NSObject *)arg0;
- (NSObject *)_orderingTermsForProperty:(NSString *)arg0;
- (NSObject *)_mlQueryForATVMediaQuery:(NSObject *)arg0 playlist:(id *)arg1 usingSections:(char *)arg2;
- (void)_setValue:(NSValue *)arg0 forKey:(NSString *)arg1 inResponseBuffer:(NSObject *)arg2;

@end
