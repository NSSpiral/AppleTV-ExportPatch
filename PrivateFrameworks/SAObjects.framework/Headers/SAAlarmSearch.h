/* Runtime dump - SAAlarmSearch
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAAlarmSearch : SADomainCommand

@property (copy, nonatomic) NSNumber * enabled;
@property (copy, nonatomic) NSArray * frequency;
@property (copy, nonatomic) NSNumber * hour;
@property (copy, nonatomic) NSURL * identifier;
@property (copy, nonatomic) NSString * label;
@property (copy, nonatomic) NSNumber * minute;

+ (NSDictionary *)searchWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;
+ (NSString *)search;

- (NSString *)groupIdentifier;
- (NSURL *)identifier;
- (void)setEnabled:(NSNumber *)arg0;
- (void)setIdentifier:(NSURL *)arg0;
- (NSString *)label;
- (void)setLabel:(NSString *)arg0;
- (NSArray *)frequency;
- (void)setFrequency:(NSArray *)arg0;
- (void)setHour:(NSNumber *)arg0;
- (NSNumber *)hour;
- (NSNumber *)enabled;
- (NSNumber *)minute;
- (void)setMinute:(NSNumber *)arg0;
- (NSString *)encodedClassName;
- (char)requiresResponse;

@end
