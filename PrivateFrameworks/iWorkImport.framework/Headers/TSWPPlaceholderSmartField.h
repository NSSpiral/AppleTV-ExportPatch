/* Runtime dump - TSWPPlaceholderSmartField
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPPlaceholderSmartField : TSWPSmartField
{
    char _localizable;
    NSString * _scriptTag;
}

@property (nonatomic) char isLocalizable;
@property (copy, nonatomic) NSString * scriptTag;

- (TSWPPlaceholderSmartField *)initFromUnarchiver:(NSObject *)arg0;
- (void)saveToArchiver:(NSObject *)arg0;
- (NSString *)copyWithContext:(NSObject *)arg0;
- (void)saveToArchive:(struct PlaceholderSmartFieldArchive *)arg0 archiver:(NSObject *)arg1;
- (void)loadFromArchive:(struct PlaceholderSmartFieldArchive *)arg0 unarchiver:(struct PlaceholderSmartFieldArchive)arg1;
- (int)smartFieldKind;
- (struct PlaceholderSmartFieldArchive *)placeholderSmartFieldArchiveFromUnarchiver:(id)arg0;
- (char)isLocalizable;
- (void)setIsLocalizable:(char)arg0;
- (NSString *)scriptTag;
- (void)setScriptTag:(NSString *)arg0;
- (void)dealloc;
- (TSWPPlaceholderSmartField *)initWithContext:(TSPObjectContext *)arg0;

@end
