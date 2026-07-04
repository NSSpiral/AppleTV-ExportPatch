/* Runtime dump - SBUIEmergencyCallServiceViewController
 * Image: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
 */

@interface SBUIEmergencyCallServiceViewController : UIViewController <SBUIEmergencyCallServiceInterface>
{
    int _backgroundStyle;
    UIColor * _tintColor;
}

@property (nonatomic) int backgroundStyle;
@property (readonly, retain, nonatomic) UIColor * tintColor;

+ (NSXPCInterface *)_exportedInterface;
+ (SBUIEmergencyCallServiceViewController *)_remoteViewControllerInterface;

- (void)dealloc;
- (UIColor *)tintColor;
- (SBUIEmergencyCallServiceViewController *)initWithNibName:(NSString *)arg0 bundle:(NSObject *)arg1;
- (void)setBackgroundStyle:(int)arg0;
- (int)backgroundStyle;
- (void)backgroundStyle:(int)arg0;
- (void)noteTintColorForBackgroundStyleChanged:(NSNotification *)arg0;
- (void)noteViewMovedOffscreenTemporarily;

@end
