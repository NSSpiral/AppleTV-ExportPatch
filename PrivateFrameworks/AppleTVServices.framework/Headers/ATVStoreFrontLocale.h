/* Runtime dump - ATVStoreFrontLocale
 * Image: /System/Library/PrivateFrameworks/AppleTVServices.framework/AppleTVServices
 */

@interface ATVStoreFrontLocale : NSObject
{
    NSDictionary * _storeFrontDictionary;
}

@property (readonly, retain) NSString * uniqueIdentifier;
@property (readonly, retain) NSString * displayName;
@property (readonly, retain) NSArray * availableLanguages;
@property (readonly, retain) NSString * countryCode;
@property (readonly) char isCurrent;

+ (NSDictionary *)localeWithStoreFrontDictionary:(NSDictionary *)arg0;

- (char)isEqual:(NSObject *)arg0;
- (NSURL *)url;
- (NSString *)valueForUndefinedKey:(NSString *)arg0;
- (NSString *)uniqueIdentifier;
- (NSArray *)availableLanguages;
- (void).cxx_destruct;
- (NSString *)displayName;
- (ATVStoreFrontLocale *)initWithStoreFrontDictionary:(NSDictionary *)arg0;
- (char)isCurrent;
- (NSString *)countryCode;

@end
