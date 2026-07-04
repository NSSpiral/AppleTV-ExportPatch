/* Runtime dump - TSWPRubyField
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPRubyField : TSWPSmartField
{
    NSString * _rubyText;
}

@property (copy, nonatomic) NSString * rubyText;
@property (readonly, nonatomic) NSString * baseText;
@property (readonly, nonatomic) int baseTextScript;

- (TSWPRubyField *)initFromUnarchiver:(NSObject *)arg0;
- (void)saveToArchiver:(NSObject *)arg0;
- (NSString *)copyWithContext:(NSObject *)arg0;
- (void)saveToArchive:(struct RubyFieldArchive *)arg0 archiver:(NSObject *)arg1;
- (void)loadFromArchive:(struct RubyFieldArchive *)arg0 unarchiver:(struct RubyFieldArchive)arg1;
- (int)smartFieldKind;
- (int)styleAttributeArrayKind;
- (NSString *)baseText;
- (NSString *)rubyText;
- (char)canCopy:(struct _NSRange)arg0;
- (int)attributeArrayKind;
- (void)setRubyText:(NSString *)arg0;
- (TSWPRubyField *)initWithContext:(NSObject *)arg0 rubyText:(NSString *)arg1;
- (int)baseTextScript;
- (void)dealloc;
- (NSString *)text;
- (char)allowsEditing;

@end
