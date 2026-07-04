/* Runtime dump - UIKeyboardCandidateGridLayout
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKeyboardCandidateGridLayout : UICollectionViewLayout
{
    struct CGSize _contentSize;
    char _expanded;
    char _needsPaddingForIndexScrubber;
    char _supportsNumberKeySelection;
    char _hasSecondaryCandidates;
    char _needsLayout;
    NSArray * _candidateGroups;
    unsigned int _columnsCount;
    struct ? _visualStyling;
    int _candidatesVisualStyle;
    float _headerViewHeight;
    NSSet * _emphasizedCandidates;
    NSMutableArray * _cellAttributes;
    NSMutableDictionary * _supplementaryAttributes;
}

@property (retain, nonatomic) NSArray * candidateGroups;
@property (nonatomic) unsigned int columnsCount;
@property (nonatomic) struct ? visualStyling;
@property (nonatomic) int candidatesVisualStyle;
@property (nonatomic) char expanded;
@property (nonatomic) char needsPaddingForIndexScrubber;
@property (nonatomic) float headerViewHeight;
@property (nonatomic) char supportsNumberKeySelection;
@property (readonly, nonatomic) float groupBarWidth;
@property (nonatomic) char hasSecondaryCandidates;
@property (retain, nonatomic) NSSet * emphasizedCandidates;
@property (nonatomic) char needsLayout;
@property (retain, nonatomic) NSMutableArray * cellAttributes;
@property (retain, nonatomic) NSMutableDictionary * supplementaryAttributes;
@property (readonly, nonatomic) struct CGSize rowSize;

+ (UIKeyboardLayoutStar *)layout;
+ (Class)layoutAttributesClass;
+ (void)deemphasizeLastItemIfNeeded:(id)arg0;

- (void)dealloc;
- (UIKeyboardCandidateGridLayout *)init;
- (unsigned int)numberOfItemsInSection:(int)arg0;
- (unsigned int)numberOfSections;
- (NSObject *)layoutAttributesForElementsInRect:(struct CGRect)arg0;
- (NSString *)layoutAttributesForItemAtIndexPath:(NSIndexPath *)arg0;
- (char)needsLayout;
- (void)setVisualStyling:(struct ?)arg0;
- (struct ?)visualStyling;
- (struct CGSize)collectionViewContentSize;
- (void)setCandidatesVisualStyle:(int)arg0;
- (char)hasSecondaryCandidates;
- (int)candidatesVisualStyle;
- (void)setEmphasizedCandidates:(NSSet *)arg0;
- (NSArray *)candidateGroups;
- (NSString *)layoutAttributesForCandidateIndexPath:(NSIndexPath *)arg0;
- (char)supportsNumberKeySelection;
- (void)setSupportsNumberKeySelection:(char)arg0;
- (void)setExpanded:(char)arg0;
- (void)setColumnsCount:(unsigned int)arg0;
- (void)setCandidateGroups:(NSArray *)arg0;
- (void)setHeaderViewHeight:(float)arg0;
- (void)setNeedsPaddingForIndexScrubber:(char)arg0;
- (void)setHasSecondaryCandidates:(char)arg0;
- (void)invalidateLayout;
- (float)groupBarWidth;
- (char)expanded;
- (NSSet *)emphasizedCandidates;
- (NSString *)nextCandidateIndexPathFromIndexPath:(NSIndexPath *)arg0;
- (NSString *)previousCandidateIndexPathFromIndexPath:(NSIndexPath *)arg0;
- (void)setNeedsLayout:(char)arg0;
- (UICollectionViewLayoutAttributes *)layoutAttributesForSupplementaryViewOfKind:(id)arg0 atIndexPath:(NSIndexPath *)arg1;
- (void)prepareLayout;
- (struct CGSize)rowSize;
- (char)needsPaddingForIndexScrubber;
- (char)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg0;
- (NSMutableArray *)cellAttributes;
- (NSMutableDictionary *)supplementaryAttributes;
- (void)getGroupBarWidth:(float *)arg0 headerAttributes:(id *)arg1;
- (NSObject *)attributesWithFrame:(struct CGRect)arg0;
- (unsigned int)columnsCount;
- (float)headerViewHeight;
- (void)finishLayoutForRowWithAttributes:(NSDictionary *)arg0 minimumCellWidth:(float)arg1 remainingWidth:(float)arg2 rowOrigin:(struct CGPoint)arg3 isFirstRow:(char)arg4 isLastRow:(char)arg5 zIndex:(int)arg6;
- (unsigned int)numberOfCandidateSections;
- (void)setCellAttributes:(NSMutableArray *)arg0;
- (void)setSupplementaryAttributes:(NSMutableDictionary *)arg0;

@end
