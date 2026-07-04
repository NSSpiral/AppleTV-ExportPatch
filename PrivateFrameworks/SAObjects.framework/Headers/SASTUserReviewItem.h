/* Runtime dump - SASTUserReviewItem
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASTUserReviewItem : AceObject <SASTTemplateItem>

@property (retain, nonatomic) SAUIDecoratedText * reviewDate;
@property (retain, nonatomic) SAUIDecoratedText * reviewText;
@property (retain, nonatomic) SAUIDecoratedText * reviewer;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSObject *)userReviewItem;
+ (NSDictionary *)userReviewItemWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (void)setReviewText:(SAUIDecoratedText *)arg0;
- (void)setReviewer:(SAUIDecoratedText *)arg0;
- (SAUIDecoratedText *)reviewer;
- (NSString *)encodedClassName;
- (SAUIDecoratedText *)reviewDate;
- (void)setReviewDate:(SAUIDecoratedText *)arg0;
- (SAUIDecoratedText *)reviewText;

@end
