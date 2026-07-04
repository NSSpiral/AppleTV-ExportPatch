/* Runtime dump - SASTTemplatePercentageRating
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASTTemplatePercentageRating : SASTTemplateRating

@property (retain, nonatomic) SAUILocalImageResource * localImageResource;
@property (retain, nonatomic) SAUIDecoratedText * value;

+ (SASTTemplatePercentageRating *)templatePercentageRating;
+ (NSDictionary *)templatePercentageRatingWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (SAUIDecoratedText *)value;
- (void)setValue:(SAUIDecoratedText *)arg0;
- (NSString *)encodedClassName;
- (SAUILocalImageResource *)localImageResource;
- (void)setLocalImageResource:(SAUILocalImageResource *)arg0;

@end
