/* Runtime dump - SASTTemplateStarRating
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASTTemplateStarRating : SASTTemplateRating

@property (nonatomic) double maximumValue;
@property (nonatomic) double value;

+ (NSNumber *)templateStarRating;
+ (NSDictionary *)templateStarRatingWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (double)value;
- (void)setValue:(double)arg0;
- (double)maximumValue;
- (void)setMaximumValue:(double)arg0;
- (NSString *)encodedClassName;

@end
