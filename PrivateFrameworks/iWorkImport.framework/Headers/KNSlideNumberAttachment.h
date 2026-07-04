/* Runtime dump - KNSlideNumberAttachment
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface KNSlideNumberAttachment : TSWPPageNumberAttachment

+ (KNSlideNumberAttachment *)newObjectForUnarchiver:(TSPUnknownObjectUnarchiver *)arg0;
+ (struct TextualAttachmentArchive *)textualAttachmentArchiveFromUnarchiver:(id)arg0;

- (NSNumber *)stringWithPageNumber:(unsigned int)arg0 pageCount:(unsigned int)arg1 charIndex:(unsigned int)arg2;
- (struct TextualAttachmentArchive *)textualAttachmentArchiveFromUnarchiver:(id)arg0;
- (char)shouldArchiveStringEquivalent;

@end
