/* Runtime dump - CAMPhysicalCaptureRecognizer
 * Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@interface CAMPhysicalCaptureRecognizer : UIGestureRecognizer
{
    char _suspended;
    int _activeButton;
    NSArray * _desiredButtons;
    int _physicalButtonType;
}

@property (nonatomic) int activeButton;
@property (copy, nonatomic) NSArray * desiredButtons;
@property (nonatomic) char suspended;
@property (nonatomic) int physicalButtonType;

- (char)isSuspended;
- (CAMPhysicalCaptureRecognizer *)initWithTarget:(NSObject *)arg0 action:(SEL)arg1;
- (void)touchesBegan:(NSSet *)arg0 withEvent:(Event *)arg1;
- (void)_physicalButtonsBegan:(NSSet *)arg0 withEvent:(Event *)arg1;
- (void)_physicalButtonsEnded:(NSSet *)arg0 withEvent:(Event *)arg1;
- (void)_physicalButtonsCancelled:(NSSet *)arg0 withEvent:(Event *)arg1;
- (void)reset;
- (void)setEnabled:(char)arg0;
- (void).cxx_destruct;
- (void)setSuspended:(char)arg0;
- (void)setDesiredButtons:(NSArray *)arg0;
- (void)setActiveButton:(int)arg0;
- (int)activeButton;
- (int)physicalButtonType;
- (void)_updateApplicationButtonStatus;
- (NSArray *)desiredButtons;
- (int)_captureButtonForPhysicalButtonType:(int)arg0;
- (void)setPhysicalButtonType:(int)arg0;

@end
