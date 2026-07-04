/* Runtime dump - TSAShortcutController
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSAShortcutController : TSPObject
{
    NSMutableDictionary * _shortcutToStyleDictionary;
    TSURetainedPointerKeyDictionary * _styleToShortcutDictionary;
    TSADocumentRoot * _documentRoot;
}

@property (readonly, nonatomic) char hasShortcuts;
@property (nonatomic) TSADocumentRoot * documentRoot;

+ (TSAShortcutController *)localizedStringForShortcut:(id)arg0;

- (TSAShortcutController *)initFromUnarchiver:(NSObject *)arg0;
- (void)saveToArchiver:(NSObject *)arg0;
- (void)saveToArchive:(struct ShortcutControllerArchive *)arg0 archiver:(NSObject *)arg1;
- (void)documentDidLoad;
- (void)loadFromArchive:(struct ShortcutControllerArchive *)arg0 unarchiver:(struct ShortcutControllerArchive)arg1;
- (char)hasShortcuts;
- (void)documentWillUnload;
- (TSAShortcutController *)initWithDocumentRoot:(TSADocumentRoot *)arg0;
- (id)styleForShortcut:(id)arg0;
- (NSObject *)shortcutForStyle:(NSObject *)arg0;
- (void)setStyle:(NSObject *)arg0 forShortcut:(id)arg1;
- (void)removeStylesNotInTheme;
- (void)dealloc;
- (TSADocumentRoot *)documentRoot;
- (void)setDocumentRoot:(TSADocumentRoot *)arg0;

@end
