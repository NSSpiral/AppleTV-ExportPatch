/* Runtime dump - SASTLocationListItem
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASTLocationListItem : AceObject <SASTActionableTemplateItem>

@property (retain, nonatomic) <SASTTemplateAction> * action;
@property (retain, nonatomic) SAUIDecoratedText * formattedDistance;
@property (retain, nonatomic) SASTTemplateStarRating * rating;
@property (retain, nonatomic) SAUIDecoratedText * subtitle;
@property (retain, nonatomic) SAUIDecoratedText * title;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSObject *)locationListItem;
+ (NSDictionary *)locationListItemWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (void)setTitle:(SAUIDecoratedText *)arg0;
- (<SASTTemplateAction> *)action;
- (SAUIDecoratedText *)title;
- (void)setAction:(<SASTTemplateAction> *)arg0;
- (SAUIDecoratedText *)subtitle;
- (void)setSubtitle:(SAUIDecoratedText *)arg0;
- (SASTTemplateStarRating *)rating;
- (void)setRating:(SASTTemplateStarRating *)arg0;
- (NSString *)encodedClassName;
- (SAUIDecoratedText *)formattedDistance;
- (void)setFormattedDistance:(SAUIDecoratedText *)arg0;

@end
