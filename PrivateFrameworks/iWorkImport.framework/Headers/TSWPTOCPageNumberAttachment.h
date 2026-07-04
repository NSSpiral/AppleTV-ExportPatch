/* Runtime dump - TSWPTOCPageNumberAttachment
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPTOCPageNumberAttachment : TSWPTextualAttachment
{
    NSString * _pageNumber;
    NSString * _bookmarkName;
}

@property (copy, nonatomic) NSString * pageNumber;
@property (copy, nonatomic) NSString * bookmarkName;

- (TSWPTOCPageNumberAttachment *)initFromUnarchiver:(NSObject *)arg0;
- (void)saveToArchiver:(NSObject *)arg0;
- (int)elementKind;
- (id)stringEquivalent;
- (NSNumber *)stringWithPageNumber:(unsigned int)arg0 pageCount:(unsigned int)arg1 charIndex:(unsigned int)arg2;
- (struct TextualAttachmentArchive *)textualAttachmentArchiveFromUnarchiver:(id)arg0;
- (NSString *)bookmarkName;
- (void)setBookmarkName:(NSString *)arg0;
- (void)dealloc;
- (NSString *)pageNumber;
- (void)setPageNumber:(NSString *)arg0;

@end
