/* Runtime dump - PSSegmentableSlider
 * Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSSegmentableSlider : UISlider
{
    UIColor * _trackMarkersColor;
    char _segmented;
    unsigned int _segmentCount;
}

@property (nonatomic) char segmented;
@property (nonatomic) unsigned int segmentCount;

- (void)setSegmentCount:(unsigned int)arg0;
- (PSSegmentableSlider *)initWithFrame:(struct CGRect)arg0;
- (void)dealloc;
- (void)drawRect:(struct CGRect)arg0;
- (struct CGRect)trackRectForBounds:(id)arg0;
- (void)setValue:(float)arg0 animated:(char)arg1;
- (void)setSegmented:(char)arg0;
- (void)sliderTapped:(id)arg0;
- (unsigned int)numberOfTicks;
- (float)offsetBetweenTicksForNumberOfTicks:(unsigned int)arg0;
- (char)isSegmented;
- (unsigned int)segmentCount;

@end
