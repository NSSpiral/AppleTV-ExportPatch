/* Runtime dump - SAMPRateMediaEntity
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAMPRateMediaEntity : SABaseClientBoundCommand

@property (nonatomic) int rating;

+ (NSObject *)rateMediaEntity;
+ (NSDictionary *)rateMediaEntityWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (int)rating;
- (void)setRating:(int)arg0;
- (NSString *)encodedClassName;
- (char)requiresResponse;

@end
