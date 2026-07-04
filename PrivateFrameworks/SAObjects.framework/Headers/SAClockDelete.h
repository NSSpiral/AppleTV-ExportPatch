/* Runtime dump - SAClockDelete
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAClockDelete : SADomainCommand

@property (copy, nonatomic) NSArray * clockIds;

+ (SAClockDelete *)delete;
+ (NSDictionary *)deleteWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;
- (char)requiresResponse;
- (NSArray *)clockIds;
- (void)setClockIds:(NSArray *)arg0;

@end
