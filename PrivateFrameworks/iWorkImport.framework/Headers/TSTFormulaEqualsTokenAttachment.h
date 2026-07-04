/* Runtime dump - TSTFormulaEqualsTokenAttachment
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTFormulaEqualsTokenAttachment : TSWPUIGraphicalAttachment

- (TSTFormulaEqualsTokenAttachment *)initFromUnarchiver:(NSObject *)arg0;
- (void)saveToArchiver:(NSObject *)arg0;
- (void)saveToArchive:(struct FormulaEqualsTokenAttachmentArchive *)arg0 archiver:(NSObject *)arg1;
- (TSTFormulaEqualsTokenAttachment *)initFromArchive:(struct FormulaEqualsTokenAttachmentArchive *)arg0 unarchiver:(struct FormulaEqualsTokenAttachmentArchive)arg1;
- (char)wantsSelectionAtPoint:(struct CGPoint)arg0;
- (NSObject *)rendererForAttachment;
- (struct CGSize)size;
- (NSString *)description;
- (float)baselineOffset;

@end
