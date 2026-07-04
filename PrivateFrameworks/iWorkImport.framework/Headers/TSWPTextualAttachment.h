/* Runtime dump - TSWPTextualAttachment
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPTextualAttachment : TSWPAttachment

+ (TSWPTextualAttachment *)newObjectForUnarchiver:(TSPUnknownObjectUnarchiver *)arg0;

- (TSWPTextualAttachment *)initFromUnarchiver:(NSObject *)arg0;
- (void)saveToArchiver:(NSObject *)arg0;
- (void)saveToArchive:(struct TextualAttachmentArchive *)arg0 archiver:(NSObject *)arg1;
- (id)stringEquivalent;
- (NSNumber *)stringWithPageNumber:(unsigned int)arg0 pageCount:(unsigned int)arg1 charIndex:(unsigned int)arg2;
- (struct TextualAttachmentArchive *)textualAttachmentArchiveFromUnarchiver:(id)arg0;
- (char)shouldArchiveStringEquivalent;
- (void)setStringEquivalent:(id)arg0;
- (NSObject *)stringEquivalentWithLayoutParent:(NSObject *)arg0;

@end
