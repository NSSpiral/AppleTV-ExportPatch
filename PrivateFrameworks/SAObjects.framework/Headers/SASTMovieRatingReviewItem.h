/* Runtime dump - SASTMovieRatingReviewItem
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASTMovieRatingReviewItem : AceObject <SASTTemplateItem>

@property (retain, nonatomic) SAUIDecoratedText * reviews;
@property (retain, nonatomic) SASTTemplatePercentageRating * templatePercentageRating;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSObject *)movieRatingReviewItem;
+ (NSDictionary *)movieRatingReviewItemWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (void)setReviews:(SAUIDecoratedText *)arg0;
- (SAUIDecoratedText *)reviews;
- (NSString *)encodedClassName;
- (SASTTemplatePercentageRating *)templatePercentageRating;
- (void)setTemplatePercentageRating:(SASTTemplatePercentageRating *)arg0;

@end
