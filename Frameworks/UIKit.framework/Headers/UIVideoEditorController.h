/* Runtime dump - UIVideoEditorController
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIVideoEditorController : UINavigationController
{
    int _previousStatusBarStyle;
    NSMutableDictionary * _properties;
    struct ? _flags;
}

@property (nonatomic) <UINavigationControllerDelegate><UIVideoEditorControllerDelegate> * delegate;
@property (copy, nonatomic) NSString * videoPath;
@property (nonatomic) double videoMaximumDuration;
@property (nonatomic) int videoQuality;

+ (char)canEditVideoAtPath:(NSString *)arg0;

- (UIVideoEditorController *)init;
- (void)viewWillAppear:(char)arg0;
- (void)viewWillUnload;
- (void)viewWillDisappear:(char)arg0;
- (void)viewDidDisappear:(char)arg0;
- (char)_isSupportedInterfaceOrientation:(int)arg0;
- (NSObject *)_valueForProperty:(NSString *)arg0;
- (void)_setValue:(NSValue *)arg0 forProperty:(NSString *)arg1;
- (void)_initializeProperties;
- (void)_removeAllChildren;
- (NSObject *)_createInitialController;
- (void)_autoDismiss;
- (double)videoMaximumDuration;
- (void)setVideoMaximumDuration:(double)arg0;
- (int)videoQuality;
- (void)setVideoQuality:(int)arg0;
- (void)_setProperties:(NSDictionary *)arg0;
- (NSDictionary *)_properties;
- (char)_didRevertStatusBar;
- (void)_setupControllers;
- (void)editVideoViewControllerDidCancel:(id)arg0;
- (NSURL *)_videoURL;
- (void)_setVideoURL:(NSURL *)arg0;
- (void)editVideoViewController:(BRController *)arg0 didTrimVideoWithOptions:(NSDictionary *)arg1;
- (void)editVideoViewController:(BRController *)arg0 didFailWithError:(char)arg1;
- (NSString *)videoPath;
- (void)setVideoPath:(NSString *)arg0;

@end
