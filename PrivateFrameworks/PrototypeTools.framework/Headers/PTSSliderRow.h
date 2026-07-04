/* Runtime dump - PTSSliderRow
 * Image: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
 */

@interface PTSSliderRow : PTSRow
{
    float _minValue;
    float _maxValue;
}

@property (nonatomic) float minValue;
@property (nonatomic) float maxValue;

- (PTSSliderRow *)init;
- (float)minValue;
- (void)setMaxValue:(float)arg0;
- (void)setMinValue:(float)arg0;
- (id)minValue:(float)arg0 maxValue:(float)arg1;
- (float)maxValue;
- (void)updateWithRow:(id)arg0;
- (Class)rowTableViewCellClass;

@end
