/* Runtime dump - SASTRatingItem
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASTRatingItem : AceObject <SASTTemplateItem>

@property (retain, nonatomic) SASTTemplateRating * rating;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSObject *)ratingItem;
+ (NSDictionary *)ratingItemWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (SASTTemplateRating *)rating;
- (void)setRating:(SASTTemplateRating *)arg0;
- (NSString *)encodedClassName;

@end
