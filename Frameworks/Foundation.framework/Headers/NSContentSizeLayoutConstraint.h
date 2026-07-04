/* Runtime dump - NSContentSizeLayoutConstraint
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSContentSizeLayoutConstraint : NSLayoutConstraint
{
    float _huggingPriority;
    float _compressionResistancePriority;
}

@property (readonly) float huggingPriority;
@property (readonly) float compressionResistancePriority;

- (NSString *)_priorityDescription;
- (float)priorityForVariable:(id)arg0;
- (float)huggingPriority;
- (float)compressionResistancePriority;
- (NSContentSizeLayoutConstraint *)initWithLayoutItem:(TSCHChartLayoutItem *)arg0 value:(float)arg1 huggingPriority:(float)arg2 compressionResistancePriority:(float)arg3 orientation:(int)arg4;

@end
