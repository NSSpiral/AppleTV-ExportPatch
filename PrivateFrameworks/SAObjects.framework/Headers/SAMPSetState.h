/* Runtime dump - SAMPSetState
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAMPSetState : SADomainCommand

@property (nonatomic) int state;

+ (NSObject *)setState;
+ (NSDictionary *)setStateWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (int)state;
- (void)setState:(int)arg0;
- (NSString *)encodedClassName;
- (char)requiresResponse;

@end
