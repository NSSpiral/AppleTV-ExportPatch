/* Runtime dump - SAGetClientState
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAGetClientState : SABaseClientBoundCommand

@property (copy, nonatomic) NSArray * statesToGet;

+ (NSObject *)getClientState;
+ (NSDictionary *)getClientStateWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;
- (char)requiresResponse;
- (NSArray *)statesToGet;
- (void)setStatesToGet:(NSArray *)arg0;

@end
