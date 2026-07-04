/* Runtime dump - UIKBHandwritingStrokePointFIFO
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKBHandwritingStrokePointFIFO : UIKBHandwritingPointFIFO
{
    TIHandwritingStrokes * _strokes;
}

@property (retain, nonatomic) TIHandwritingStrokes * strokes;

- (void)dealloc;
- (void)flush;
- (void)addPoint:(struct CGPoint)arg0;
- (void)clear;
- (UIKBHandwritingStrokePointFIFO *)initWithFIFO:(id)arg0;
- (TIHandwritingStrokes *)strokes;
- (void)setStrokes:(TIHandwritingStrokes *)arg0;

@end
