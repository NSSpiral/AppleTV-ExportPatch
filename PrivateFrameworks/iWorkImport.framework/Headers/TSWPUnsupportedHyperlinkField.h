/* Runtime dump - TSWPUnsupportedHyperlinkField
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPUnsupportedHyperlinkField : TSWPPlaceholderSmartField
{
    NSString * _href;
}

@property (copy, nonatomic) NSString * href;

- (TSWPUnsupportedHyperlinkField *)initFromUnarchiver:(NSObject *)arg0;
- (void)saveToArchiver:(NSObject *)arg0;
- (NSString *)copyWithContext:(NSObject *)arg0;
- (int)smartFieldKind;
- (char)allowsPasteAsSmartField;
- (struct PlaceholderSmartFieldArchive *)placeholderSmartFieldArchiveFromUnarchiver:(id)arg0;
- (void)dealloc;
- (NSString *)href;
- (void)setHref:(NSString *)arg0;

@end
