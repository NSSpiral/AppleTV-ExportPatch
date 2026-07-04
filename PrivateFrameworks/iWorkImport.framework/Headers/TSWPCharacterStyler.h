/* Runtime dump - TSWPCharacterStyler
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPCharacterStyler : TSWPStorageStyler

- (TSWPCharacterStyler *)initWithStorage:(TSWPStorage *)arg0;
- (void)applyStyle:(NSObject *)arg0 range:(struct _NSRange)arg1 undoTransaction:(struct TSWPStorageTransaction *)arg2;
- (void)performStylingInRange:(struct _NSRange)arg0 undoTransaction:(struct TSWPStorageTransaction *)arg1;

@end
