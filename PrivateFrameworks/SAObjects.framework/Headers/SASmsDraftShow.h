/* Runtime dump - SASmsDraftShow
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASmsDraftShow : SADomainCommand

@property (copy, nonatomic) NSURL * smsIdentifier;

+ (SASmsDraftShow *)draftShow;
+ (NSDictionary *)draftShowWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;
- (char)requiresResponse;
- (NSURL *)smsIdentifier;
- (void)setSmsIdentifier:(NSURL *)arg0;

@end
