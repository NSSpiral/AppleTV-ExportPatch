/* Runtime dump - SASTGridCell
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASTGridCell : AceObject <SAAceSerializable>

@property (retain, nonatomic) SAUIDecoratedText * subTitle;
@property (retain, nonatomic) SAUIDecoratedText * title;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSObject *)gridCell;
+ (NSDictionary *)gridCellWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (void)setSubTitle:(SAUIDecoratedText *)arg0;
- (SAUIDecoratedText *)subTitle;
- (void)setTitle:(SAUIDecoratedText *)arg0;
- (SAUIDecoratedText *)title;
- (NSString *)encodedClassName;

@end
