/* Runtime dump - UIKeyboardCandidateGridCell
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKeyboardCandidateGridCell : UICollectionViewCell
{
    char _dummy;
    char _usesGroupHeaderAppearance;
    char _shouldShowCandidateNumber;
    char _secondaryCandidateAppearance;
    char _emphasizedAppearance;
    NSString * _text;
    NSString * _alternativeText;
    unsigned int _candidateNumber;
    unsigned int _edges;
    float _rowHeight;
    float _rightPadding;
    struct ? _visualStyling;
    int _candidatesVisualStyle;
    int _textAlignment;
    float _cellPadding;
    float _minimumWidth;
    UILabel * _textLabel;
    UILabel * _alternativeTextLabel;
    UILabel * _candidateNumberLabel;
    struct CGSize _size;
    struct CGSize _candidateNumberSize;
    struct CGRect _visibleBounds;
}

@property (nonatomic) char dummy;
@property (nonatomic) char usesGroupHeaderAppearance;
@property (copy, nonatomic) NSString * text;
@property (copy, nonatomic) NSString * alternativeText;
@property (nonatomic) unsigned int candidateNumber;
@property (nonatomic) char shouldShowCandidateNumber;
@property (nonatomic) struct CGRect visibleBounds;
@property (nonatomic) char secondaryCandidateAppearance;
@property (nonatomic) char emphasizedAppearance;
@property (nonatomic) unsigned int edges;
@property (nonatomic) float rowHeight;
@property (nonatomic) float rightPadding;
@property (nonatomic) struct ? visualStyling;
@property (nonatomic) int candidatesVisualStyle;
@property (nonatomic) int textAlignment;
@property (nonatomic) struct CGSize size;
@property (nonatomic) struct CGSize candidateNumberSize;
@property (nonatomic) float cellPadding;
@property (nonatomic) float minimumWidth;
@property (readonly, nonatomic) char canShowCandidateNumber;
@property (retain, nonatomic) UILabel * textLabel;
@property (retain, nonatomic) UILabel * alternativeTextLabel;
@property (retain, nonatomic) UILabel * candidateNumberLabel;

+ (NSString *)reuseIdentifier;
+ (char)drawsSideBorders;
+ (struct CGColor *)legacy_outlineShadowColorForVisualStyling:(struct ?)arg0 candidatesVisualStyle:(int)arg1;
+ (struct CGColor *)legacy_outlineColorForVisualStyling:(struct ?)arg0 candidatesVisualStyle:(int)arg1;
+ (float)rightPaddingForIndex;
+ (struct CGSize)sizeForGroupHeader:(NSString *)arg0 visualStyle:(int)arg1;
+ (float)widthForCandidate:(NSDate *)arg0 candidateNumber:(unsigned int)arg1 visualStyle:(int)arg2;

- (UIKeyboardCandidateGridCell *)initWithFrame:(struct CGRect)arg0;
- (void)dealloc;
- (struct CGSize)size;
- (void)drawRect:(struct CGRect)arg0;
- (void)setRowHeight:(float)arg0;
- (float)rowHeight;
- (void)setEdges:(unsigned int)arg0;
- (void)setTextAlignment:(int)arg0;
- (NSString *)text;
- (void)setText:(NSString *)arg0;
- (void)setSize:(struct CGSize)arg0;
- (struct CGRect)visibleBounds;
- (void)setHighlighted:(char)arg0;
- (void)setMinimumWidth:(float)arg0;
- (float)minimumWidth;
- (void)prepareForReuse;
- (void)setSelected:(char)arg0;
- (UILabel *)textLabel;
- (int)textAlignment;
- (void)setVisualStyling:(struct ?)arg0;
- (struct ?)visualStyling;
- (void)setCandidatesVisualStyle:(int)arg0;
- (int)candidatesVisualStyle;
- (char)dummy;
- (NSString *)alternativeText;
- (void)setAlternativeText:(NSString *)arg0;
- (void)setShouldShowCandidateNumber:(char)arg0;
- (char)shouldShowCandidateNumber;
- (unsigned int)candidateNumber;
- (char)usesGroupHeaderAppearance;
- (void)setVisibleBounds:(struct CGRect)arg0;
- (void)updateLabels;
- (void)applyLayoutAttributes:(NSDictionary *)arg0;
- (void)setDummy:(char)arg0;
- (void)setUsesGroupHeaderAppearance:(char)arg0;
- (unsigned int)edges;
- (void)setRightPadding:(float)arg0;
- (void)setCellPadding:(float)arg0;
- (void)setCandidateNumber:(unsigned int)arg0;
- (char)secondaryCandidateAppearance;
- (void)setSecondaryCandidateAppearance:(char)arg0;
- (char)emphasizedAppearance;
- (void)setEmphasizedAppearance:(char)arg0;
- (void)drawBackgroundAndBorders;
- (UILabel *)alternativeTextLabel;
- (UILabel *)candidateNumberLabel;
- (void)setTextLabel:(UILabel *)arg0;
- (float)rightPadding;
- (float)cellPadding;
- (char)canShowCandidateNumber;
- (void)setAlternativeTextLabel:(UILabel *)arg0;
- (void)setCandidateNumberLabel:(UILabel *)arg0;
- (void)updateLabelColors;
- (void)updateGroupHeaderLabelPosition;
- (struct CGSize)candidateNumberSize;
- (void)setCandidateNumberSize:(struct CGSize)arg0;

@end
