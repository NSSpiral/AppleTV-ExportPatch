/* Runtime dump - EDOneCellAnchor
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EDOneCellAnchor : EDAnchor
{
    struct EDCellAnchorMarker mFrom;
    struct CGSize mSize;
    char mIsRelative;
}

- (struct CGSize)size;
- (void)setSize:(struct CGSize)arg0;
- (void).cxx_construct;
- (void)setFrom:(struct EDCellAnchorMarker)arg0;
- (struct EDCellAnchorMarker)from;
- (char)isRelative;
- (void)setRelative:(char)arg0;

@end
