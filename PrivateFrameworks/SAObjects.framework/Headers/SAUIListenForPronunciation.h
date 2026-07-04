/* Runtime dump - SAUIListenForPronunciation
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAUIListenForPronunciation : SABaseClientBoundCommand

@property (retain, nonatomic) SASPronunciationContext * context;

+ (SAUIListenForPronunciation *)listenForPronunciation;
+ (NSDictionary *)listenForPronunciationWithDictionary:(NSDictionary *)arg0 context:(SASPronunciationContext *)arg1;

- (NSString *)groupIdentifier;
- (SASPronunciationContext *)context;
- (void)setContext:(SASPronunciationContext *)arg0;
- (NSString *)encodedClassName;
- (char)requiresResponse;

@end
