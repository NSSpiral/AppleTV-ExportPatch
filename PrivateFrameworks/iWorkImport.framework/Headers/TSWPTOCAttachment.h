/* Runtime dump - TSWPTOCAttachment
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPTOCAttachment : TSWPDrawableAttachment

@property (readonly, retain, nonatomic) TSWPTOCInfo * tocInfo;

- (TSWPTOCAttachment *)initFromUnarchiver:(NSObject *)arg0;
- (void)saveToArchiver:(NSObject *)arg0;
- (int)elementKind;
- (TSWPTOCInfo *)tocInfo;
- (void)loadTOCAttachmentMessage:(struct TOCAttachmentArchive *)arg0 fromUnarchiver:(struct TOCAttachmentArchive)arg1;
- (void)saveTOCAttachmentMessage:(struct TOCAttachmentArchive *)arg0 archiver:(NSObject *)arg1;

@end
