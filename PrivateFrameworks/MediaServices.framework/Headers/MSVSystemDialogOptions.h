/* Runtime dump - MSVSystemDialogOptions
 * Image: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
 */

@interface MSVSystemDialogOptions : NSObject
{
    char _showAsTopmost;
    char _forceModalAlertAppearance;
    char _showOnLockscreen;
    char _dismissOverlaysOnLockscreen;
    NSString * _alertHeader;
    NSString * _alertMessage;
    NSArray * _allowedApplicationBundleIDs;
    NSString * _defaultButtonTitle;
    NSString * _alternateButtonTitle;
}

@property (copy, nonatomic) NSString * alertHeader;
@property (copy, nonatomic) NSString * alertMessage;
@property (copy, nonatomic) NSArray * allowedApplicationBundleIDs;
@property (copy, nonatomic) NSString * defaultButtonTitle;
@property (copy, nonatomic) NSString * alternateButtonTitle;
@property (nonatomic) char showAsTopmost;
@property (nonatomic) char forceModalAlertAppearance;
@property (nonatomic) char showOnLockscreen;
@property (nonatomic) char dismissOverlaysOnLockscreen;

- (void).cxx_destruct;
- (void)setAlertHeader:(NSString *)arg0;
- (void)setAlertMessage:(NSString *)arg0;
- (NSString *)alertMessage;
- (void)setDefaultButtonTitle:(NSString *)arg0;
- (void)setAlternateButtonTitle:(NSString *)arg0;
- (NSString *)alternateButtonTitle;
- (NSString *)defaultButtonTitle;
- (NSString *)alertHeader;
- (char)showAsTopmost;
- (char)forceModalAlertAppearance;
- (char)showOnLockscreen;
- (char)dismissOverlaysOnLockscreen;
- (NSArray *)allowedApplicationBundleIDs;
- (void)setAllowedApplicationBundleIDs:(NSArray *)arg0;
- (void)setShowAsTopmost:(char)arg0;
- (void)setForceModalAlertAppearance:(char)arg0;
- (void)setShowOnLockscreen:(char)arg0;
- (void)setDismissOverlaysOnLockscreen:(char)arg0;

@end
