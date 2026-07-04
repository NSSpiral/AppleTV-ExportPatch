/* Runtime dump - UIMailActivity
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIMailActivity : UIActivity <UIStateRestoring>
{
    char _keyboardVisible;
    char _sourceIsManaged;
    char _hasAnyAccount;
    char _hasFilteredAccount;
    NSString * _autosaveIdentifier;
    MFMailComposeViewController * _mailComposeViewController;
}

@property (nonatomic) char keyboardVisible;
@property (nonatomic) char sourceIsManaged;
@property (retain, nonatomic) NSString * autosaveIdentifier;
@property (nonatomic) char hasAnyAccount;
@property (nonatomic) char hasFilteredAccount;
@property (retain, nonatomic) MFMailComposeViewController * mailComposeViewController;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly, nonatomic) <UIStateRestoring> * restorationParent;
@property (readonly, nonatomic) Class objectRestorationClass;

+ (int)activityCategory;

- (void)dealloc;
- (UIMailActivity *)init;
- (void)encodeRestorableStateWithCoder:(NSCoder *)arg0;
- (void)decodeRestorableStateWithCoder:(NSCoder *)arg0;
- (void)_cleanup;
- (NSString *)activityType;
- (UIImage *)_activityImage;
- (NSString *)activityTitle;
- (char)keyboardVisible;
- (UIImage *)_activitySettingsImage;
- (char)canPerformWithActivityItems:(NSArray *)arg0;
- (char)sourceIsManaged;
- (void)setSubject:(NSString *)arg0;
- (UIViewController *)activityViewController;
- (void)setSourceIsManaged:(char)arg0;
- (void)prepareWithActivityItems:(NSArray *)arg0;
- (void)_setSubject:(SBFSubject *)arg0;
- (void)autosaveWithHandler:(id /* block */)arg0;
- (void)setKeyboardVisible:(char)arg0;
- (void)setAutosaveIdentifier:(NSString *)arg0;
- (NSURL *)_mailDraftRestorationURL;
- (void)_deleteMailDraftIdentifierRestorationArchive:(id)arg0;
- (id)_stateRestorationDraftIsAvailable;
- (MFMailComposeViewController *)mailComposeViewController;
- (void)setHasAnyAccount:(char)arg0;
- (void)setHasFilteredAccount:(char)arg0;
- (char)hasAnyAccount;
- (char)hasFilteredAccount;
- (NSString *)autosaveIdentifier;
- (char)_restoreDraft;
- (void)setMailComposeViewController:(MFMailComposeViewController *)arg0;
- (void)_saveDraft:(id)arg0;
- (void)mailComposeController:(BRController *)arg0 didFinishWithResult:(int)arg1 error:(NSError *)arg2;

@end
