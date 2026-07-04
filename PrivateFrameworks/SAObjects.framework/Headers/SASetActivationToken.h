/* Runtime dump - SASetActivationToken
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASetActivationToken : SABaseClientBoundCommand

@property (copy, nonatomic) NSData * activationToken;
@property (copy, nonatomic) NSString * language;

+ (NSString *)setActivationToken;
+ (NSDictionary *)setActivationTokenWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)language;
- (void)setLanguage:(NSString *)arg0;
- (NSString *)encodedClassName;
- (char)requiresResponse;
- (NSData *)activationToken;
- (void)setActivationToken:(NSData *)arg0;

@end
