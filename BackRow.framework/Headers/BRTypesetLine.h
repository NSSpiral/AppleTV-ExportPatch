/* Runtime dump - BRTypesetLine
 * Image: /Applications/AppleTV.app/AppleTV
 */

@interface BRTypesetLine : NSObject
{
    struct __CTLine * _line;
    struct CGSize _shadowOffset;
    float _shadowBlurAmount;
    float _flushFactor;
}

- (void)typographicBounds:(float *)arg0 descent:(float *)arg1 leading:(float *)arg2;
- (void)drawLineAtPoint:(struct CGPoint)arg0 withWidth:(float)arg1 inContext:(struct CGContext *)arg2;
- (BRTypesetLine *)initWithCTLineRef:(struct __CTLine *)arg0 shadowOffset:(struct CGSize)arg1 shadowBlurAmount:(float)arg2 flushFactor:(float)arg3;
- (void)dealloc;

@end
