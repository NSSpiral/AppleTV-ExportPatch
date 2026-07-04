/* Runtime dump - SAMPSetPlaybackPosition
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAMPSetPlaybackPosition : SADomainCommand

@property (nonatomic) int position;

+ (NSObject *)setPlaybackPosition;
+ (NSDictionary *)setPlaybackPositionWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (void)setPosition:(int)arg0;
- (int)position;
- (NSString *)encodedClassName;
- (char)requiresResponse;

@end
