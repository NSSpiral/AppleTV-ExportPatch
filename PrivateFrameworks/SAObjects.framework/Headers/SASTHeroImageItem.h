/* Runtime dump - SASTHeroImageItem
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASTHeroImageItem : AceObject <SASTTemplateItem>

@property (retain, nonatomic) SAUINanoImageResource * watchImageResource;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSObject *)heroImageItem;
+ (NSDictionary *)heroImageItemWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;
- (SAUINanoImageResource *)watchImageResource;
- (void)setWatchImageResource:(SAUINanoImageResource *)arg0;

@end
