/* Runtime dump - NetflixEmbeddedLocalizedStringsProvider
 * Image: /Applications/AppleTV.app/AppleTV
 */


@protocol NetflixLocalizedStringProvider;
@interface NetflixEmbeddedLocalizedStringsProvider : NSObject <NetflixLocalizedStringProvider>
{
    NSString * stringsTableName;
    NSString * localeIdentifier;
    NSDictionary * stringsTable;
}

@property (readonly) NSString * localeIdentifier;
@property (readonly) NSString * stringsTableName;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (NetflixEmbeddedLocalizedStringsProvider *)initWithLocaleIdentifier:(NSString *)arg0 tableName:(NSString *)arg1 dictionary:(NSDictionary *)arg2;
- (NSString *)stringsTableName;
- (NSString *)localeIdentifier;
- (void).cxx_destruct;
- (NSString *)localizedString:(NSString *)arg0;

@end
