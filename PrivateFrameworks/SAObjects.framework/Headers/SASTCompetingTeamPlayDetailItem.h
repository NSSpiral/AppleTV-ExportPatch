/* Runtime dump - SASTCompetingTeamPlayDetailItem
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASTCompetingTeamPlayDetailItem : AceObject <SASTTemplateItem>

@property (nonatomic) char firstEntity;
@property (retain, nonatomic) SAUIDecoratedText * playDetail;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSObject *)competingTeamPlayDetailItem;
+ (NSDictionary *)competingTeamPlayDetailItemWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;
- (char)firstEntity;
- (void)setFirstEntity:(char)arg0;
- (SAUIDecoratedText *)playDetail;
- (void)setPlayDetail:(SAUIDecoratedText *)arg0;

@end
