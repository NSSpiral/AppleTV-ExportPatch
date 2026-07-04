/* Runtime dump - SBUIEmergencyCallHostViewController
 * Image: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
 */

@interface SBUIEmergencyCallHostViewController : _UIRemoteViewController <SBUIEmergencyCallHostInterface>
{
    _UIBackdropView * _blurView;
    UIColor * _tintColor;
    int _backgroundStyle;
    float _blurRadius;
    char _blursSelf;
}

@property (nonatomic) int backgroundStyle;
@property (retain, nonatomic) UIColor * tintColor;
@property (nonatomic) float blurRadius;
@property (nonatomic) char blursSelf;

+ (SBUIEmergencyCallHostViewController *)serviceViewControllerInterface;
+ (NSXPCInterface *)exportedInterface;
+ (void)requestEmergencyCallControllerWithCompletion:(id /* block */)arg0;

- (void)dealloc;
- (float)blurRadius;
- (void)setBlurRadius:(float)arg0;
- (UIColor *)tintColor;
- (void)setTintColor:(UIColor *)arg0;
- (void)viewWillAppear:(char)arg0;
- (void)dismiss;
- (void)setBackgroundStyle:(int)arg0;
- (int)backgroundStyle;
- (NSObject *)tintColorForBackgroundStyle:(int)arg0 outBlurRadius:(float *)arg1;
- (void)setBlursSelf:(char)arg0;
- (void)_createAndAddBlurViewIfNecessary;
- (char)blursSelf;

@end
