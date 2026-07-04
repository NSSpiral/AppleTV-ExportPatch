/* Runtime dump - SASTMovieStatItem
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASTMovieStatItem : AceObject <SASTTemplateItem>

@property (copy, nonatomic) NSString * contentRating;
@property (retain, nonatomic) SASTTemplatePercentageRating * reviewerRating;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSObject *)movieStatItem;
+ (NSDictionary *)movieStatItemWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)contentRating;
- (void)setContentRating:(NSString *)arg0;
- (NSString *)encodedClassName;
- (SASTTemplatePercentageRating *)reviewerRating;
- (void)setReviewerRating:(SASTTemplatePercentageRating *)arg0;

@end
