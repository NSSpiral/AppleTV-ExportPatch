/* Runtime dump - MCWebContentFilterPayload
 * Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@interface MCWebContentFilterPayload : MCPayload
{
    char _autoFilterEnabled;
    char _filterBrowsers;
    char _filterSockets;
    NSString * _filterType;
    NSArray * _permittedURLStrings;
    NSArray * _whitelistedBookmarks;
    NSArray * _blacklistedURLStrings;
    NSDictionary * _pluginConfiguration;
    NSString * _name;
    NSString * _pluginBundleID;
}

@property (copy, nonatomic) NSString * filterType;
@property (nonatomic) char autoFilterEnabled;
@property (retain, nonatomic) NSArray * permittedURLStrings;
@property (retain, nonatomic) NSArray * whitelistedBookmarks;
@property (retain, nonatomic) NSArray * blacklistedURLStrings;
@property (retain, nonatomic) NSDictionary * pluginConfiguration;
@property (copy, nonatomic) NSString * name;
@property (copy, nonatomic) NSString * pluginBundleID;
@property (nonatomic) char filterBrowsers;
@property (nonatomic) char filterSockets;

+ (NSArray *)typeStrings;
+ (NSString *)localizedSingularForm;
+ (NSString *)localizedPluralForm;
+ (NSArray *)pluginFilterKeysAndClasses;

- (NSString *)description;
- (void)setName:(NSString *)arg0;
- (NSString *)name;
- (NSString *)title;
- (NSString *)filterType;
- (void)setFilterType:(NSString *)arg0;
- (void).cxx_destruct;
- (NSArray *)restrictions;
- (MCWebContentFilterPayload *)initWithDictionary:(NSDictionary *)arg0 profile:(MCProfile *)arg1 outError:(id *)arg2;
- (NSDictionary *)stubDictionary;
- (NSString *)subtitle1Label;
- (NSString *)subtitle1Description;
- (NSArray *)payloadDescriptionKeyValueSections;
- (NSArray *)installationWarnings;
- (NSString *)pluginBundleID;
- (char)autoFilterEnabled;
- (NSArray *)permittedURLStrings;
- (NSArray *)whitelistedBookmarks;
- (NSArray *)blacklistedURLStrings;
- (void)setAutoFilterEnabled:(char)arg0;
- (void)setPermittedURLStrings:(NSArray *)arg0;
- (void)setWhitelistedBookmarks:(NSArray *)arg0;
- (void)setBlacklistedURLStrings:(NSArray *)arg0;
- (NSDictionary *)pluginConfiguration;
- (void)setPluginConfiguration:(NSDictionary *)arg0;
- (void)setPluginBundleID:(NSString *)arg0;
- (char)filterBrowsers;
- (void)setFilterBrowsers:(char)arg0;
- (char)filterSockets;
- (void)setFilterSockets:(char)arg0;

@end
