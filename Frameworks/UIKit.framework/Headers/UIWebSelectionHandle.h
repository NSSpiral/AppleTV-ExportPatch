/* Runtime dump - UIWebSelectionHandle
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIWebSelectionHandle : UIView
{
    UITouch * _touch;
    UIImageView * _dragDotView;
    int _position;
    int _textPosition;
    UIWebSelectionView * _selectionView;
    struct CGSize _touchToCenterOffset;
    struct CGSize _centerToSelectionPointOffset;
}

@property (retain, nonatomic) UITouch * touch;
@property (nonatomic) int position;
@property (nonatomic) int textPosition;
@property (readonly, nonatomic) char hasTextPosition;
@property (readonly, nonatomic) struct CGSize touchToCenterOffset;
@property (nonatomic) struct CGSize centerToSelectionPointOffset;

- (void)dealloc;
- (void)drawRect:(struct CGRect)arg0;
- (char)pointInside:(struct CGPoint)arg0 withEvent:(Event *)arg1;
- (void)touchesBegan:(NSSet *)arg0 withEvent:(Event *)arg1;
- (void)touchesMoved:(NSSet *)arg0 withEvent:(Event *)arg1;
- (void)touchesEnded:(NSSet *)arg0 withEvent:(Event *)arg1;
- (void)touchesCancelled:(NSSet *)arg0 withEvent:(Event *)arg1;
- (void)setPosition:(int)arg0;
- (int)position;
- (UITouch *)touch;
- (void)setTouch:(UITouch *)arg0;
- (UIWebSelectionHandle *)initWithPosition:(int)arg0 selectionView:(UIWebSelectionView *)arg1;
- (void)snapToCornerOfRange:(NSObject *)arg0 atStart:(char)arg1;
- (char)hasTextPosition;
- (void)setTextPosition:(int)arg0;
- (struct CGPoint)applyTouchToCenterOffset:(struct CGPoint)arg0;
- (int)textPosition;
- (struct CGPoint)applyCenterToSelectionPointOffset:(struct CGPoint)arg0;
- (struct CGPoint)suggestedHandlePositionOnRect:(struct CGRect)arg0;
- (float)offsetInDirectionOfHandleFromFirstPoint:(struct CGPoint)arg0 toSecondPoint:(struct CGPoint)arg1;
- (struct CGSize)centerToSelectionPointOffset;
- (void)dropActiveTouch;
- (struct CGPoint)applyOffsetInDirectionOfHandle:(float)arg0 toPoint:(struct CGPoint)arg1;
- (struct CGSize)touchToCenterOffset;
- (void)setCenterToSelectionPointOffset:(struct CGSize)arg0;

@end
