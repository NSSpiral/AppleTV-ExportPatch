/* Runtime dump - SAReminderListSearch
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAReminderListSearch : SADomainCommand

@property (copy, nonatomic) NSString * name;

+ (SAReminderListSearch *)listSearch;
+ (NSDictionary *)listSearchWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (void)setName:(NSString *)arg0;
- (NSString *)name;
- (NSString *)encodedClassName;
- (char)requiresResponse;

@end
