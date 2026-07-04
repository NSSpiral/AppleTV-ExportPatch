/* Runtime dump - UIKBHandwritingBoxcarFilterPointFIFO
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKBHandwritingBoxcarFilterPointFIFO : UIKBHandwritingPointFIFO
{
    NSMutableArray * _prevPoints;
    unsigned int _width;
}

@property (retain, nonatomic) NSMutableArray * prevPoints;
@property (nonatomic) unsigned int width;

- (void)dealloc;
- (void)flush;
- (unsigned int)width;
- (void)addPoint:(struct CGPoint)arg0;
- (void)setWidth:(unsigned int)arg0;
- (void)clear;
- (UIKBHandwritingBoxcarFilterPointFIFO *)initWithFIFO:(id)arg0 width:(unsigned int)arg1;
- (void)setPrevPoints:(NSMutableArray *)arg0;
- (NSMutableArray *)prevPoints;
- (void)emitAveragedPoint;

@end
