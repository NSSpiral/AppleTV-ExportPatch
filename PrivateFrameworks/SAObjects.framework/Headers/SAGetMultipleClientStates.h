/* Runtime dump - SAGetMultipleClientStates
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAGetMultipleClientStates : SABaseClientBoundCommand

@property (copy, nonatomic) NSArray * clientStateGetters;

+ (NSArray *)getMultipleClientStates;
+ (NSDictionary *)getMultipleClientStatesWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;
- (char)requiresResponse;
- (NSArray *)clientStateGetters;
- (void)setClientStateGetters:(NSArray *)arg0;

@end
