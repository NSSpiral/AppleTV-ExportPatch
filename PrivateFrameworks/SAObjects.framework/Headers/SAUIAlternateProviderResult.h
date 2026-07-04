/* Runtime dump - SAUIAlternateProviderResult
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAUIAlternateProviderResult : SADomainObject

@property (copy, nonatomic) NSArray * commands;
@property (copy, nonatomic) NSNumber * numberOfResults;
@property (retain, nonatomic) SAUIImageResource * providerImage;
@property (copy, nonatomic) NSString * providerName;

+ (NSObject *)alternateProviderResult;
+ (NSDictionary *)alternateProviderResultWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSArray *)commands;
- (void)setCommands:(NSArray *)arg0;
- (NSString *)providerName;
- (void)setNumberOfResults:(NSNumber *)arg0;
- (NSNumber *)numberOfResults;
- (NSString *)encodedClassName;
- (void)updateUsingSet:(NSSet *)arg0 add:(int)arg1 remove:(NSIndexSet *)arg2;
- (SAUIImageResource *)providerImage;
- (void)setProviderImage:(SAUIImageResource *)arg0;
- (void)setProviderName:(NSString *)arg0;

@end
