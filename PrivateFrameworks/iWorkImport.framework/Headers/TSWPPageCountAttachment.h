/* Runtime dump - TSWPPageCountAttachment
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPPageCountAttachment : TSWPNumberAttachment

- (void)saveToArchiver:(NSObject *)arg0;
- (int)elementKind;
- (char)changesWithPageCount;
- (NSNumber *)stringWithPageNumber:(unsigned int)arg0 pageCount:(unsigned int)arg1 charIndex:(unsigned int)arg2;
- (char)shouldArchiveStringEquivalent;

@end
