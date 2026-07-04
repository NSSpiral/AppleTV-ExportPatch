/* Runtime dump - UIInlineCandidateTextView
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIInlineCandidateTextView : UIView
{
    int m_type;
    int m_edgeType;
    char m_animating;
    NSMutableArray * _candidateCellArray;
    NSArray * _candidates;
    id _target;
    SEL _action;
    unsigned int _selectedItem;
    _UIInlineCandidateCell * _currentlyPushedItem;
    char _showingArrow;
    char _arrowHighlighted;
    char _phraseEditable;
}

- (void)dealloc;
- (void)drawRect:(struct CGRect)arg0;
- (NSObject *)hitTest:(struct CGPoint)arg0 withEvent:(Event *)arg1;
- (char)pointInside:(struct CGPoint)arg0 withEvent:(Event *)arg1;
- (char)pointInside:(struct CGPoint)arg0 forEvent:(struct __GSEvent *)arg1;
- (void)touchesBegan:(NSSet *)arg0 withEvent:(Event *)arg1;
- (void)touchesMoved:(NSSet *)arg0 withEvent:(Event *)arg1;
- (void)touchesEnded:(NSSet *)arg0 withEvent:(Event *)arg1;
- (void)touchesCancelled:(NSSet *)arg0 withEvent:(Event *)arg1;
- (void)setSelectedItem:(unsigned int)arg0;
- (void)setAnimating:(char)arg0;
- (int)textEffectsVisibilityLevel;
- (void)setEdgeType:(int)arg0;
- (struct CGRect)_calculateRectForExpandedHitRegion;
- (unsigned int)numberOfShownItems;
- (UIInlineCandidateTextView *)initWithFrame:(struct CGRect)arg0 candidates:(struct CGSize)arg1 type:(NSObject *)arg2 maxScreenWidth:(id)arg3 hasExtensionCandidates:(int)arg4;
- (int)edgeType;
- (void)setTarget:(NSObject *)arg0 action:(SEL)arg1;
- (unsigned int)selectedItem;
- (float)_layoutCandidates:(id)arg0 maxCount:(int)arg1 height:(float)arg2 maxScreenWidth:(float)arg3 hasExtensionCandidates:(char)arg4;
- (void)_cellSelected:(id)arg0;
- (NSObject *)findCell:(struct CGPoint)arg0;
- (void)redrawArrow;
- (char)_arrowHighlighted;
- (void)showHighlightedArrow;

@end
