/* Runtime dump - TPLegacyPhonePad
 * Image: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

@interface TPLegacyPhonePad : UIControl
{
    int _downKey;
    int _highlightKey;
    id _delegate;
    char _playsSounds;
    char _supportsHardPause;
    float _topHeight;
    float _midHeight;
    float _bottomHeight;
    float _leftWidth;
    float _midWidth;
    float _rightWidth;
    struct __CFSet * _inflightSounds;
    struct __CFDictionary * _keyToButtonMap;
    unsigned int _incompleteSounds;
    id _delegateSoundCallbacks;
    id _soundsActivated;
}

@property char supportsHardPause;

+ (void)_delayedDeactivate;
+ (char)shouldStringAutoDial:(id)arg0 givenLastChar:(char)arg1;
+ (char)launchFieldTestIfNeeded:(id)arg0;

- (UIImage *)_highlightedImage;
- (TPLegacyPhonePad *)initWithFrame:(struct CGRect)arg0;
- (void)dealloc;
- (void)drawRect:(struct CGRect)arg0;
- (void)setDelegate:(NSObject *)arg0;
- (NSObject *)hitTest:(struct CGPoint)arg0 withEvent:(Event *)arg1;
- (void)removeFromSuperview;
- (NSArray *)scriptingInfoWithChildren;
- (char)cancelTouchTracking;
- (void)movedFromWindow:(NSObject *)arg0;
- (void)movedToWindow:(NSObject *)arg0;
- (void)setHighlighted:(char)arg0;
- (char)pointMostlyInside:(struct CGPoint)arg0 withEvent:(Event *)arg1;
- (void)_playSoundForKey:(unsigned int)arg0;
- (void)_stopSoundForKey:(unsigned int)arg0;
- (void)setNeedsDisplayForKey:(int)arg0;
- (void)_handleKey:(NSString *)arg0 forUIEvent:(NSObject *)arg1;
- (void)setPlaysSounds:(char)arg0;
- (void)_activateSounds:(char)arg0;
- (void)_stopAllSoundsForcingCallbacks:(char)arg0;
- (void)_appSuspended;
- (void)_appResumed;
- (struct CGRect)_rectForKey:(NSString *)arg0;
- (UIImage *)_keypadImage;
- (float)_yFudge;
- (struct CGRect)_updateRect:(NSObject *)arg0 withScale:(SEL)arg1;
- (struct CGPoint)_keypadOrigin;
- (UIImage *)_imageByCroppingImage:(UIImage *)arg0 toRect:(struct CGRect)arg1;
- (UIImage *)_pressedImage;
- (int)_keyForPoint:(struct CGPoint)arg0;
- (char)supportsHardPause;
- (void)setSupportsHardPause:(char)arg0;
- (void)highlightKeyAtIndex:(int)arg0;
- (int)indexForHighlightedKey;
- (void)setButton:(UIButton *)arg0 forKeyAtIndex:(unsigned int)arg1;
- (NSObject *)_buttonForKeyAtIndex:(unsigned int)arg0;
- (void)_notifySoundCompletionIfNecessary:(unsigned long)arg0;
- (void)_handleKeyPressAndHold:(id)arg0;

@end
