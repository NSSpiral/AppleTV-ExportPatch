/* Runtime dump - TSWPStorageStyler
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPStorageStyler : NSObject
{
    TSWPStorage * _storage;
    int _attributeArrayKind;
}

@property (readonly, retain, nonatomic) TSWPStorage * storage;

- (NSObject *)replacementStyleForStyle:(NSObject *)arg0 range:(struct _NSRange)arg1;
- (void)applyStyle:(NSObject *)arg0 range:(struct _NSRange)arg1 undoTransaction:(struct TSWPStorageTransaction *)arg2;
- (TSWPStorageStyler *)initWithStorage:(TSWPStorage *)arg0 attributeArrayKind:(int)arg1;
- (void)performStylingInRange:(struct _NSRange)arg0 undoTransaction:(struct TSWPStorageTransaction *)arg1;
- (TSWPStorage *)storage;

@end
