/* Runtime dump - CAMHardwareLockIndicatorView
 * Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@interface CAMHardwareLockIndicatorView : UIView
{
    char _focusLocked;
    char _exposureLocked;
    NSDictionary * __indicatorTextAttributes;
}

@property (nonatomic) char focusLocked;
@property (nonatomic) char exposureLocked;
@property (readonly, nonatomic) NSDictionary * _indicatorTextAttributes;

- (CAMHardwareLockIndicatorView *)initWithFrame:(struct CGRect)arg0;
- (void)drawRect:(struct CGRect)arg0;
- (CAMHardwareLockIndicatorView *)initWithCoder:(NSCoder *)arg0;
- (struct CGSize)sizeThatFits:(struct CGSize)arg0;
- (void).cxx_destruct;
- (void)_updateFromHardwareChange;
- (void)_commonCAMHardwareLockIndicatorViewInitialization;
- (NSObject *)_textForCurrentHardwareState;
- (NSDictionary *)_indicatorTextAttributes;
- (struct CGSize)_roundedSizeOfText:(NSString *)arg0 withAttributes:(NSDictionary *)arg1;
- (void)setFocusLocked:(char)arg0;
- (void)setExposureLocked:(char)arg0;
- (char)isFocusLocked;
- (char)isExposureLocked;

@end
