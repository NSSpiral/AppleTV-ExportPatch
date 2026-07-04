/* Runtime dump - TSWPTOCPartitioner
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPTOCPartitioner : NSObject <TSDPartitioner>
{
    TSWPTOCInfo * _info;
}

@property (readonly, nonatomic) TSWPTOCInfo * info;

- (NSObject *)nextHintForSize:(struct CGSize)arg0 parentLayout:(TSWPTextParentLayout *)arg1 previousHint:(NSObject *)arg2 horizontally:(char)arg3 outFinished:(char *)arg4;
- (id)layoutForHint:(TSTLayoutHint *)arg0 parentLayout:(TSWPTextParentLayout *)arg1;
- (NSObject *)nextLayoutForSize:(struct CGSize)arg0 parentLayout:(TSWPTextParentLayout *)arg1 previousHint:(NSObject *)arg2 horizontally:(char)arg3 outFinished:(char *)arg4;
- (char)didHint:(id)arg0 syncWithNextHint:(id)arg1 horizontally:(char)arg2 delta:(int)arg3;
- (NSObject *)hintForLayout:(NSObject *)arg0;
- (TSWPTOCPartitioner *)initWithInfo:(TSWPTOCInfo *)arg0;
- (TSWPTOCInfo *)info;

@end
