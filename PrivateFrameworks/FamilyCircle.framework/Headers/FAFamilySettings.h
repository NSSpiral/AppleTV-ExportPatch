/* Runtime dump - FAFamilySettings
 * Image: /System/Library/PrivateFrameworks/FamilyCircle.framework/FamilyCircle
 */

@interface FAFamilySettings : FAFamilyCircleRequest <AAUIFamilySetupPrompterDelegate>
{
    AAUIFamilySetupPrompter * _prompter;
    FAFamilySettings * _retainedSelf;
    char _isFirstRun;
    UIViewController * _presentingViewController;
    SSAccount * _iTunesAccount;
}

@property UIViewController * presentingViewController;
@property (retain) SSAccount * iTunesAccount;
@property char isFirstRun;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (UIViewController *)presentingViewController;
- (void)setPresentingViewController:(UIViewController *)arg0;
- (void).cxx_destruct;
- (SSAccount *)iTunesAccount;
- (void)setITunesAccount:(SSAccount *)arg0;
- (void)familySetupPrompterDidFinish:(id)arg0;
- (void)_launchPrefsUsingDaemon;
- (void)launchiCloudFamilySettings;
- (char)isFirstRun;
- (void)setIsFirstRun:(char)arg0;

@end
