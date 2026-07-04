/* Runtime dump - EDTwoCellAnchor
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EDTwoCellAnchor : EDAnchor
{
    struct EDCellAnchorMarker mFrom;
    struct EDCellAnchorMarker mTo;
    char mIsRelative;
    int mEditAs;
}

- (EDTwoCellAnchor *)init;
- (void).cxx_construct;
- (void)setFrom:(struct EDCellAnchorMarker)arg0;
- (struct EDCellAnchorMarker)from;
- (void)setTo:(struct EDCellAnchorMarker)arg0;
- (struct EDCellAnchorMarker)to;
- (char)isRelative;
- (void)setRelative:(char)arg0;
- (int)editAs;
- (void)setEditAs:(int)arg0;

@end
