/* Runtime dump - TSWPTextHostLayout
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPTextHostLayout : TSDDrawableLayout
{
    TSWPShapeInfo * _editingShapeInfo;
    TSWPShapeLayout * _editingShapeLayout;
}

@property (readonly, nonatomic) TSWPShapeLayout * editingShapeLayout;

- (void)updateChildrenFromInfo;
- (TSWPShapeLayout *)editingShapeLayout;
- (void)dealloc;

@end
