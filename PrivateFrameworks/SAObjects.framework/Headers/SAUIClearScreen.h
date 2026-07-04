/* Runtime dump - SAUIClearScreen
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAUIClearScreen : SABaseClientBoundCommand

@property (retain, nonatomic) SAAceView * initialView;

+ (NSObject *)clearScreen;
+ (NSDictionary *)clearScreenWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;
- (char)requiresResponse;
- (SAAceView *)initialView;
- (void)setInitialView:(SAAceView *)arg0;

@end
