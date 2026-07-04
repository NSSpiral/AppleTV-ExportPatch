/* Runtime dump - SANPSetPlaybackSpeed
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SANPSetPlaybackSpeed : SADomainCommand

@property (nonatomic) double scalingFactor;

+ (SANPSetPlaybackSpeed *)setPlaybackSpeed;
+ (NSDictionary *)setPlaybackSpeedWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (void)setScalingFactor:(double)arg0;
- (double)scalingFactor;
- (NSString *)encodedClassName;
- (char)requiresResponse;

@end
