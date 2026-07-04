/* Runtime dump - UITextMagnifierTimeWeightedPoint
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UITextMagnifierTimeWeightedPoint : NSObject
{
    int m_index;
    id m_points;
}

@property (readonly, nonatomic) struct CGPoint weightedPoint;

- (void)addPoint:(struct CGPoint)arg0;
- (float)distanceCoveredInInterval:(double)arg0 priorTo:(double)arg1;
- (struct CGSize)displacementInInterval:(double)arg0 priorTo:(double)arg1;
- (void)clearHistory;
- (struct CGPoint)weightedPoint;
- (char)historyCovers:(double)arg0;
- (float)distanceCoveredInInterval:(double)arg0;
- (struct CGSize)displacementInInterval:(double)arg0;

@end
