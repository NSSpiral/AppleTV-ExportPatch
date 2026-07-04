/* Runtime dump - UIKeyboardCandidateGridCellAttributes
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKeyboardCandidateGridCellAttributes : UICollectionViewLayoutAttributes
{
    char _dummy;
    char _groupHeader;
    char _needsPaddingForIndexScrubber;
    char _groupShowsAlternativeText;
    char _secondaryCandidateAppearance;
    char _emphasizedAppearance;
    NSIndexPath * _candidateIndexPath;
    struct ? _visualStyling;
    int _candidatesVisualStyle;
    unsigned int _candidateNumber;
    unsigned int _rowIndex;
    unsigned int _edges;
    struct CGSize _rowSize;
}

@property (retain, nonatomic) NSIndexPath * candidateIndexPath;
@property (nonatomic) struct ? visualStyling;
@property (nonatomic) int candidatesVisualStyle;
@property (nonatomic) char dummy;
@property (nonatomic) char groupHeader;
@property (nonatomic) unsigned int candidateNumber;
@property (nonatomic) unsigned int rowIndex;
@property (nonatomic) struct CGSize rowSize;
@property (nonatomic) unsigned int edges;
@property (nonatomic) char needsPaddingForIndexScrubber;
@property (nonatomic) char groupShowsAlternativeText;
@property (nonatomic) char secondaryCandidateAppearance;
@property (nonatomic) char emphasizedAppearance;

- (void)dealloc;
- (UIKeyboardCandidateGridCellAttributes *)init;
- (char)isEqual:(NSObject *)arg0;
- (NSString *)description;
- (void)setEdges:(unsigned int)arg0;
- (unsigned int)representedElementCategory;
- (UIKeyboardCandidateGridCellAttributes *)copyWithZone:(struct _NSZone *)arg0;
- (void)setVisualStyling:(struct ?)arg0;
- (struct ?)visualStyling;
- (void)setCandidatesVisualStyle:(int)arg0;
- (int)candidatesVisualStyle;
- (unsigned int)rowIndex;
- (char)dummy;
- (char)groupHeader;
- (NSIndexPath *)candidateIndexPath;
- (void)setNeedsPaddingForIndexScrubber:(char)arg0;
- (unsigned int)candidateNumber;
- (void)setDummy:(char)arg0;
- (struct CGSize)rowSize;
- (unsigned int)edges;
- (char)needsPaddingForIndexScrubber;
- (char)groupShowsAlternativeText;
- (void)setCandidateNumber:(unsigned int)arg0;
- (char)secondaryCandidateAppearance;
- (void)setSecondaryCandidateAppearance:(char)arg0;
- (char)emphasizedAppearance;
- (void)setEmphasizedAppearance:(char)arg0;
- (void)setCandidateIndexPath:(NSIndexPath *)arg0;
- (void)setGroupHeader:(char)arg0;
- (void)setRowIndex:(unsigned int)arg0;
- (void)setRowSize:(struct CGSize)arg0;
- (void)setGroupShowsAlternativeText:(char)arg0;

@end
