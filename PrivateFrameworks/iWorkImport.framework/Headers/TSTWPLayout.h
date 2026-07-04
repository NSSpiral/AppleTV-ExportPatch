/* Runtime dump - TSTWPLayout
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTWPLayout : TSWPLayout
{
    char _cachedCellWraps;
    char _cacheIsValid;
    struct ? _cachedCellID;
    TSTCellStyle * _cachedCellStyle;
    TSWPParagraphStyle * _cachedTextStyle;
    int _cachedVerticalAlignment;
    int _cachedParagraphAlignment;
    unsigned int _cachedAutoSizeFlags;
    TSWPPadding * _cachedPadding;
    struct TSUColumnRowRect _cachedMergeRange;
    struct TSUColumnRowRect _cachedMaskSpillRange;
    struct CGRect _cachedMaskRect;
    struct CGRect _cachedAutosizedFrame;
}

@property (nonatomic) struct ? cachedCellID;
@property (retain, nonatomic) TSTCellStyle * cachedCellStyle;
@property (retain, nonatomic) TSWPParagraphStyle * cachedTextStyle;
@property (nonatomic) char cachedCellWraps;
@property (nonatomic) int cachedVerticalAlignment;
@property (nonatomic) int cachedParagraphAlignment;
@property (nonatomic) struct TSUColumnRowRect cachedMergeRange;
@property (nonatomic) unsigned int cachedAutoSizeFlags;
@property (nonatomic) struct CGRect cachedMaskRect;
@property (nonatomic) struct TSUColumnRowRect cachedMaskSpillRange;
@property (retain, nonatomic) TSWPPadding * cachedPadding;
@property (nonatomic) struct CGRect cachedAutosizedFrame;
@property (nonatomic) char cacheIsValid;

- (struct ?)cachedCellID;
- (struct TSUColumnRowRect)cachedMergeRange;
- (char)cachedCellWraps;
- (int)cachedParagraphAlignment;
- (struct CGRect)cachedAutosizedFrame;
- (TSTCellStyle *)cachedCellStyle;
- (TSWPParagraphStyle *)cachedTextStyle;
- (TSTWPLayout *)initWithStorage:(TSWPStorage *)arg0 parentLayout:(TSWPTextParentLayout *)arg1 cellID:(struct ?)arg2 frame:(struct CGRect)arg3;
- (TSWPPadding *)cachedPadding;
- (unsigned int)cachedAutoSizeFlags;
- (int)cachedVerticalAlignment;
- (void)setCachedAutosizedFrame:(struct CGRect)arg0;
- (struct CGRect)cachedMaskRect;
- (void)setCachedMaskRect:(struct CGRect)arg0;
- (void)setCachedMaskSpillRange:(struct TSUColumnRowRect)arg0;
- (void)setCacheIsValid:(char)arg0;
- (char)cacheIsValid;
- (void)setCachedCellWraps:(char)arg0;
- (void)setCachedVerticalAlignment:(int)arg0;
- (void)setCachedParagraphAlignment:(int)arg0;
- (void)setCachedMergeRange:(struct TSUColumnRowRect)arg0;
- (void)setCachedAutoSizeFlags:(unsigned int)arg0;
- (void)setCachedCellStyle:(TSTCellStyle *)arg0;
- (void)setCachedTextStyle:(TSWPParagraphStyle *)arg0;
- (void)setCachedPadding:(TSWPPadding *)arg0;
- (void)setCachedCellID:(struct ?)arg0;
- (struct TSUColumnRowRect)cachedMaskSpillRange;
- (void)dealloc;
- (void)invalidate;
- (void)validate;
- (void).cxx_construct;

@end
