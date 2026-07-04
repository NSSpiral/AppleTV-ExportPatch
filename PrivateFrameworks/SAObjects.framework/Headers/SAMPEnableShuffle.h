/* Runtime dump - SAMPEnableShuffle
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAMPEnableShuffle : SADomainCommand

@property (nonatomic) char enable;

+ (SAMPEnableShuffle *)enableShuffle;
+ (NSDictionary *)enableShuffleWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (char)enable;
- (NSString *)encodedClassName;
- (char)requiresResponse;
- (void)setEnable:(char)arg0;

@end
