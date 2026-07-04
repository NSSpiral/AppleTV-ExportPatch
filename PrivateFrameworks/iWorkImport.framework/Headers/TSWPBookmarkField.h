/* Runtime dump - TSWPBookmarkField
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPBookmarkField : TSWPSmartField
{
    NSString * _name;
    char _forRange;
    char _hidden;
}

@property (retain, nonatomic) NSString * name;
@property (nonatomic) char forRange;
@property (nonatomic) char hidden;

- (TSWPBookmarkField *)initFromUnarchiver:(NSObject *)arg0;
- (void)saveToArchiver:(NSObject *)arg0;
- (NSString *)copyWithContext:(NSObject *)arg0;
- (int)smartFieldKind;
- (int)styleAttributeArrayKind;
- (int)attributeArrayKind;
- (char)forRange;
- (void)setForRange:(char)arg0;
- (void)dealloc;
- (void)setHidden:(char)arg0;
- (void)setName:(NSString *)arg0;
- (NSString *)name;
- (TSWPBookmarkField *)initWithContext:(TSPObjectContext *)arg0;
- (char)allowsEditing;
- (char)hidden;

@end
