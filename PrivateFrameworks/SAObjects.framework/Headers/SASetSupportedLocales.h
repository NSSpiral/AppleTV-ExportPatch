/* Runtime dump - SASetSupportedLocales
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASetSupportedLocales : SABaseClientBoundCommand

@property (copy, nonatomic) NSArray * locales;

+ (SASetSupportedLocales *)setSupportedLocales;
+ (NSDictionary *)setSupportedLocalesWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;
- (char)requiresResponse;
- (NSArray *)locales;
- (void)setLocales:(NSArray *)arg0;

@end
