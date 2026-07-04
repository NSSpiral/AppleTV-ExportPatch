/* Runtime dump - UIKBHandwritingPointFIFO
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKBHandwritingPointFIFO : NSObject
{
    UIKBHandwritingPointFIFO * _nextFIFO;
}

@property (retain, nonatomic) UIKBHandwritingPointFIFO * nextFIFO;

- (void)dealloc;
- (void)flush;
- (void)addPoint:(struct CGPoint)arg0;
- (void)clear;
- (UIKBHandwritingPointFIFO *)initWithFIFO:(id)arg0;
- (void)setNextFIFO:(UIKBHandwritingPointFIFO *)arg0;
- (UIKBHandwritingPointFIFO *)nextFIFO;
- (void)emitPoint:(struct CGPoint)arg0;

@end
