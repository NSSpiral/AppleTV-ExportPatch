/* Runtime dump - DAContactsSearchQuery
 * Image: /System/Library/PrivateFrameworks/DataAccessExpress.framework/DataAccessExpress
 */

@interface DAContactsSearchQuery : DASearchQuery
{
    char _includePhotos;
    NSString * _searchBase;
    NSString * _searchScope;
}

@property (copy, nonatomic) NSString * searchBase;
@property (copy, nonatomic) NSString * searchScope;
@property (nonatomic) char includePhotos;

+ (NSString *)contactsSearchQueryWithSearchString:(NSString *)arg0 searchBase:(NSString *)arg1 searchScope:(NSString *)arg2 consumer:(<DASearchQueryConsumer> *)arg3;

- (void)setIncludePhotos:(char)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void).cxx_destruct;
- (char)includePhotos;
- (DAContactsSearchQuery *)initWithDictionaryRepresentation:(NSDictionary *)arg0 consumer:(<DASearchQueryConsumer> *)arg1;
- (DAContactsSearchQuery *)initWithSearchString:(NSString *)arg0 searchBase:(NSString *)arg1 searchScope:(NSString *)arg2 consumer:(<DASearchQueryConsumer> *)arg3;
- (void)setSearchBase:(NSString *)arg0;
- (void)setSearchScope:(NSString *)arg0;
- (NSString *)searchBase;
- (NSString *)searchScope;

@end
