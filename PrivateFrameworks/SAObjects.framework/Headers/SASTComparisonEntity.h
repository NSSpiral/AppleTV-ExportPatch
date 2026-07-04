/* Runtime dump - SASTComparisonEntity
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASTComparisonEntity : AceObject <SAAceSerializable>

@property (retain, nonatomic) SAUIDecoratedText * decoratedTitle;
@property (retain, nonatomic) SAUIDecoratedText * decoratedValue;
@property (retain, nonatomic) SAUINanoImageResource * imageResource;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSObject *)comparisonEntity;
+ (NSDictionary *)comparisonEntityWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;
- (SAUINanoImageResource *)imageResource;
- (void)setImageResource:(SAUINanoImageResource *)arg0;
- (SAUIDecoratedText *)decoratedTitle;
- (void)setDecoratedTitle:(SAUIDecoratedText *)arg0;
- (SAUIDecoratedText *)decoratedValue;
- (void)setDecoratedValue:(SAUIDecoratedText *)arg0;

@end
