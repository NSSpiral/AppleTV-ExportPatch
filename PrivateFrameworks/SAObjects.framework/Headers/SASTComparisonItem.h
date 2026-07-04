/* Runtime dump - SASTComparisonItem
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASTComparisonItem : AceObject <SASTTemplateItem>

@property (retain, nonatomic) SASTComparisonEntity * firstItem;
@property (retain, nonatomic) SAUIDecoratedText * footnote;
@property (retain, nonatomic) SASTComparisonEntity * secondItem;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSObject *)comparisonItem;
+ (NSDictionary *)comparisonItemWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (void)setFirstItem:(SASTComparisonEntity *)arg0;
- (SASTComparisonEntity *)firstItem;
- (SASTComparisonEntity *)secondItem;
- (NSString *)encodedClassName;
- (SAUIDecoratedText *)footnote;
- (void)setFootnote:(SAUIDecoratedText *)arg0;
- (void)setSecondItem:(SASTComparisonEntity *)arg0;

@end
