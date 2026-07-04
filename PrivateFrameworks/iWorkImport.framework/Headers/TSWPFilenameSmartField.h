/* Runtime dump - TSWPFilenameSmartField
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPFilenameSmartField : TSWPPlaceholderSmartField
{
    unsigned int _displayFlags;
}

@property (nonatomic) unsigned int displayFlags;

- (TSWPFilenameSmartField *)initFromUnarchiver:(NSObject *)arg0;
- (void)saveToArchiver:(NSObject *)arg0;
- (NSString *)copyWithContext:(NSObject *)arg0;
- (int)smartFieldKind;
- (char)allowsPasteAsSmartField;
- (struct PlaceholderSmartFieldArchive *)placeholderSmartFieldArchiveFromUnarchiver:(id)arg0;
- (void)setDisplayFlags:(unsigned int)arg0;
- (unsigned int)displayFlags;

@end
