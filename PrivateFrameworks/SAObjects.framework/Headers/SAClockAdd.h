/* Runtime dump - SAClockAdd
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAClockAdd : SADomainCommand

@property (retain, nonatomic) SAClockObject * clockToAdd;

+ (int)add;
+ (NSDictionary *)addWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;
- (char)requiresResponse;
- (SAClockObject *)clockToAdd;
- (void)setClockToAdd:(SAClockObject *)arg0;

@end
