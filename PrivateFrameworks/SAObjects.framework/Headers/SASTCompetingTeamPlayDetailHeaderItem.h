/* Runtime dump - SASTCompetingTeamPlayDetailHeaderItem
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASTCompetingTeamPlayDetailHeaderItem : AceObject <SASTTemplateItem>

@property (retain, nonatomic) SAUIDecoratedText * firstTeam;
@property (retain, nonatomic) SAUIDecoratedText * secondTeam;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSObject *)competingTeamPlayDetailHeaderItem;
+ (NSDictionary *)competingTeamPlayDetailHeaderItemWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;
- (SAUIDecoratedText *)firstTeam;
- (void)setFirstTeam:(SAUIDecoratedText *)arg0;
- (SAUIDecoratedText *)secondTeam;
- (void)setSecondTeam:(SAUIDecoratedText *)arg0;

@end
