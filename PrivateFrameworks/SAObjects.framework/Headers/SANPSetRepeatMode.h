/* Runtime dump - SANPSetRepeatMode
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SANPSetRepeatMode : SADomainCommand

@property (copy, nonatomic) NSString * repeatMode;

+ (SANPSetRepeatMode *)setRepeatMode;
+ (NSDictionary *)setRepeatModeWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)repeatMode;
- (void)setRepeatMode:(NSString *)arg0;
- (NSString *)encodedClassName;
- (char)requiresResponse;

@end
