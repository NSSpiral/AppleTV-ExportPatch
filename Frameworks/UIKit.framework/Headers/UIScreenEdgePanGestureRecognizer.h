/* Runtime dump - UIScreenEdgePanGestureRecognizer
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIScreenEdgePanGestureRecognizer : UIPanGestureRecognizer <_UIScreenEdgePanRecognizerDelegate>
{
    _UIScreenEdgePanRecognizer * _recognizer;
}

@property (nonatomic) unsigned int edges;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (UIScreenEdgePanGestureRecognizer *)initWithTarget:(NSObject *)arg0 action:(SEL)arg1;
- (void)setEdges:(unsigned int)arg0;
- (void)touchesBegan:(NSSet *)arg0 withEvent:(Event *)arg1;
- (void)touchesMoved:(NSSet *)arg0 withEvent:(Event *)arg1;
- (void)reset;
- (void)screenEdgePanRecognizerStateDidChange:(NSDictionary *)arg0;
- (float)_edgeRegionSize;
- (char)isRequiringLongPress;
- (char)_shouldTryToBeginWithEvent:(NSObject *)arg0;
- (unsigned int)edges;

@end
