/* Runtime dump - TPLegacyBottomLockBar
 * Image: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

@interface TPLegacyBottomLockBar : TPLegacyBottomBar
{
    NSArray * _labels;
    int _currentLabelIndex;
    NSTimer * _cycleLabelTimer;
    id _delegate;
    id _representedObject;
    TPLegacyLockKnobView * _knobView;
    UIView * _trackArrow;
    TPLegacyLockTextView * _labelView;
    TPLegacyWell * _well;
    float _knobTrackInsetLeft;
    float _fontSize;
    float _deltaFromDefaultLabelWidth;
    UIImageView * _backgroundView;
}

+ (struct CGSize)defaultSize;
+ (float)defaultLabelFontSize;

- (TPLegacyLockTextView *)labelView;
- (void)dealloc;
- (void)drawRect:(struct CGRect)arg0;
- (void)setDelegate:(NSObject *)arg0;
- (NSObject *)hitTest:(struct CGPoint)arg0 withEvent:(Event *)arg1;
- (char)pointInside:(struct CGPoint)arg0 withEvent:(Event *)arg1;
- (void)unlock;
- (char)_canDrawContent;
- (char)isAnimating;
- (void)stopAnimating;
- (void)startAnimating;
- (void)setLabel:(NSString *)arg0;
- (void)setFontSize:(float)arg0;
- (void)setKnobColor:(int)arg0;
- (void)setKnobImage:(UIImage *)arg0;
- (<NSObject> *)representedObject;
- (void)setRepresentedObject:(NSObject *)arg0;
- (float)fontSize;
- (void)setLabels:(NSArray *)arg0;
- (void)setSuppressDrawingBackground:(char)arg0;
- (void)setWellAlpha:(float)arg0;
- (void)downInKnob;
- (float)knobTrackInsetLeft;
- (float)knobTrackInsetRight;
- (char)allowsTouchTrackingBeyondVerticalThreshold;
- (void)knobDragged:(float)arg0;
- (void)upInKnob;
- (void)slideBack:(char)arg0;
- (char)usesBackgroundImage;
- (NSString *)wellImageName;
- (float)defaultWellWidth;
- (UIColor *)_knobImageForColor:(int)arg0;
- (TPLegacyBottomLockBar *)initWithFrame:(struct CGRect)arg0 knobImage:(struct CGSize)arg1;
- (void)_adjustKnobOrigin;
- (TPLegacyBottomLockBar *)initWithFrame:(struct CGRect)arg0 knobColor:(struct CGSize)arg1;
- (void)startCyclingLabels;
- (void)stopCyclingLabels;
- (char)_shouldStopLabelAnimationForGrab;
- (void)_setLabel:(NSString *)arg0;
- (float)_calcKnobYOffset;
- (void)_adjustLabelOrigin;
- (void)cycleToNextLabel;
- (void)cycleToLabelAtIndex:(int)arg0;
- (void)finishedCyclingLabelOut;
- (TPLegacyBottomLockBar *)initForIncomingCallWithFrame:(struct CGRect)arg0;
- (UIView *)knob;
- (int)currentLabelIndex;
- (void)relock;
- (void)freezeKnobInUnlockedPosition;
- (TPLegacyWell *)well;
- (void)setKnobWellWidth:(float)arg0;
- (void)setKnobWellWidthToDefault;
- (void)setTextAlpha:(float)arg0;
- (NSArray *)labels;

@end
