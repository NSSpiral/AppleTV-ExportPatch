/* Runtime dump - SAUIRepeatIt
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAUIRepeatIt : SABaseClientBoundCommand

@property (copy, nonatomic) NSString * contingency;

+ (SAUIRepeatIt *)repeatIt;
+ (NSDictionary *)repeatItWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;
- (char)requiresResponse;
- (NSString *)contingency;
- (void)setContingency:(NSString *)arg0;

@end
