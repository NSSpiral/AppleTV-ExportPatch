/* Runtime dump - TSWPUIGraphicalAttachment
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPUIGraphicalAttachment : TSWPAttachment

@property (readonly, nonatomic) struct CGSize size;
@property (readonly, nonatomic) float baselineOffset;

- (TSWPUIGraphicalAttachment *)initFromUnarchiver:(NSObject *)arg0;
- (void)saveToArchiver:(NSObject *)arg0;
- (void)saveToArchive:(struct UIGraphicalAttachment *)arg0 archiver:(NSObject *)arg1;
- (int)elementKind;
- (TSWPUIGraphicalAttachment *)initFromArchive:(struct UIGraphicalAttachment *)arg0 unarchiver:(struct UIGraphicalAttachment)arg1;
- (char)wantsSelectionAtPoint:(struct CGPoint)arg0;
- (NSObject *)rendererForAttachment;
- (struct CGSize)size;
- (void)invalidate;
- (float)baselineOffset;

@end
