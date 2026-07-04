/* Runtime dump - UIScrollTestParameters
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIScrollTestParameters : NSObject
{
    int _iterations;
    int _delta;
    int _scrollLength;
    float _startOffset;
    NSString * _currentTest;
    int _axis;
    CADisplayLink * _displayLink;
}

@property (nonatomic) int iterations;
@property (nonatomic) int delta;
@property (nonatomic) int scrollLength;
@property (nonatomic) float startOffset;
@property (readonly, nonatomic) float endOffset;
@property (nonatomic) int axis;
@property (retain, nonatomic) NSString * currentTest;
@property (retain, nonatomic) CADisplayLink * displayLink;

- (void)dealloc;
- (UIScrollTestParameters *)initWithName:(NSString *)arg0 iterations:(int)arg1 delta:(int)arg2 length:(int)arg3 startOffset:(float)arg4 scrollAxis:(int)arg5;
- (void)setDisplayLink:(CADisplayLink *)arg0;
- (CADisplayLink *)displayLink;
- (NSString *)currentTest;
- (int)scrollLength;
- (int)axis;
- (int)delta;
- (float)endOffset;
- (float)startOffset;
- (void)setDelta:(int)arg0;
- (int)iterations;
- (void)setIterations:(int)arg0;
- (void)setCurrentTest:(NSString *)arg0;
- (void)setScrollLength:(int)arg0;
- (void)setStartOffset:(float)arg0;
- (void)setAxis:(int)arg0;

@end
