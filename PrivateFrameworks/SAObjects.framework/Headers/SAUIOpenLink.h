/* Runtime dump - SAUIOpenLink
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAUIOpenLink : SABaseClientBoundCommand

@property (copy, nonatomic) NSURL * ref;

+ (SAUIOpenLink *)openLink;
+ (NSDictionary *)openLinkWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;
- (char)requiresResponse;
- (NSURL *)ref;
- (void)setRef:(NSURL *)arg0;

@end
