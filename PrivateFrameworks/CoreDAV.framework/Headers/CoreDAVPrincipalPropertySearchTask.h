/* Runtime dump - CoreDAVPrincipalPropertySearchTask
 * Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@interface CoreDAVPrincipalPropertySearchTask : CoreDAVPropertyFindBaseTask
{
    NSSet * _searchItems;
    char _applyToPrincipalCollectionSet;
    NSDictionary * _extraAttributes;
}

@property (retain, nonatomic) NSSet * searchItems;
@property (retain, nonatomic) NSDictionary * extraAttributes;
@property (nonatomic) char applyToPrincipalCollectionSet;

- (void)setExtraAttributes:(NSDictionary *)arg0;
- (NSSet *)searchItems;
- (void)setSearchItems:(NSSet *)arg0;
- (void)dealloc;
- (NSData *)requestBody;
- (NSString *)httpMethod;
- (void)finishCoreDAVTaskWithError:(NSError *)arg0;
- (CoreDAVPrincipalPropertySearchTask *)initWithPropertiesToFind:(NSSet *)arg0 atURL:(NSURL *)arg1;
- (void)setApplyToPrincipalCollectionSet:(char)arg0;
- (CoreDAVPrincipalPropertySearchTask *)initWithPropertySearches:(id)arg0 propertiesToFind:(NSSet *)arg1 atURL:(NSURL *)arg2 applyToPrincipalCollectionSet:(char)arg3 extraAttributes:(NSDictionary *)arg4;
- (char)applyToPrincipalCollectionSet;
- (NSDictionary *)extraAttributes;

@end
