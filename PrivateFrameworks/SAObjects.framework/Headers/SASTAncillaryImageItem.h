/* Runtime dump - SASTAncillaryImageItem
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASTAncillaryImageItem : AceObject <SASTTemplateItem>

@property (retain, nonatomic) SAUINanoImageResource * imageResource;
@property (retain, nonatomic) SAUIDecoratedText * subtitle;
@property (retain, nonatomic) SAUIDecoratedText * title;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSObject *)ancillaryImageItem;
+ (NSDictionary *)ancillaryImageItemWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (void)setTitle:(SAUIDecoratedText *)arg0;
- (SAUIDecoratedText *)title;
- (SAUIDecoratedText *)subtitle;
- (void)setSubtitle:(SAUIDecoratedText *)arg0;
- (NSString *)encodedClassName;
- (SAUINanoImageResource *)imageResource;
- (void)setImageResource:(SAUINanoImageResource *)arg0;

@end
