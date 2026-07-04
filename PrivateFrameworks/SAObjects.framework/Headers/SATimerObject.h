/* Runtime dump - SATimerObject
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SATimerObject : SADomainObject

@property (copy, nonatomic) NSString * state;
@property (copy, nonatomic) NSNumber * timerValue;

+ (NSObject *)object;
+ (NSDictionary *)objectWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)state;
- (void)setState:(NSString *)arg0;
- (NSString *)encodedClassName;
- (void)updateUsingSet:(NSSet *)arg0 add:(int)arg1 remove:(NSIndexSet *)arg2;
- (NSNumber *)timerValue;
- (void)setTimerValue:(NSNumber *)arg0;

@end
