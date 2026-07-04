/* Runtime dump - MFMailComposeViewController
 * Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface MFMailComposeViewController : UINavigationController
{
    id _internal;
    id _setupAnimationBlock;
    char _didChangeStatusBarStyle;
    int _savedStatusBarStyle;
}

@property (nonatomic) <MFMailComposeViewControllerDelegate> * mailComposeDelegate;

+ (void)removeAutosavedMessageWithIdentifier:(NSString *)arg0;
+ (unsigned int)maximumAttachmentSize;
+ (char)hasAutosavedMessageWithIdentifier:(NSString *)arg0;
+ (char)canSendMail;
+ (char)canSendMailSourceAccountManagement:(int)arg0;

- (void)setCaretPosition:(unsigned int)arg0;
- (void)setToRecipients:(NSArray *)arg0;
- (void)setCcRecipients:(NSArray *)arg0;
- (void)setBccRecipients:(NSArray *)arg0;
- (void)finalizeCompositionValues;
- (NSObject *)_internalViewController;
- (<MFMailComposeViewControllerDelegate> *)mailComposeDelegate;
- (NSArray *)_validEmailAddressesFromArray:(NSArray *)arg0;
- (NSData *)_addAttachmentData:(NSData *)arg0 mimeType:(NSString *)arg1 fileName:(NSString *)arg2;
- (void)requestFramesForAttachmentsWithIdentifiers:(id)arg0 resultHandler:(id /* block */)arg1;
- (void)addSetupAnimationBlock:(id /* block */)arg0;
- (void)setAutorotationDelegate:(NSObject *)arg0;
- (void)dealloc;
- (MFMailComposeViewController *)initWithNibName:(NSString *)arg0 bundle:(NSObject *)arg1;
- (char)shouldAutorotateToInterfaceOrientation:(int)arg0;
- (void)viewWillAppear:(char)arg0;
- (char)automaticallyForwardAppearanceAndRotationMethodsToChildViewControllers;
- (void)viewDidAppear:(char)arg0;
- (void)viewWillDisappear:(char)arg0;
- (void)__viewControllerWillBePresented:(char)arg0;
- (MFMailComposeViewController *)initWithURL:(NSString *)arg0;
- (void)setContentVisible:(char)arg0;
- (void)setSubject:(NSString *)arg0;
- (void)autosaveWithHandler:(id /* block */)arg0;
- (void)setKeyboardVisible:(char)arg0;
- (void)setMailComposeDelegate:(<MFMailComposeViewControllerDelegate> *)arg0;
- (void)recoverAutosavedMessageWithIdentifier:(NSString *)arg0;
- (void)setSourceAccountManagement:(int)arg0;
- (void)setMessageBody:(NSObject *)arg0 isHTML:(char)arg1;
- (void)addAttachmentData:(NSData *)arg0 mimeType:(NSString *)arg1 fileName:(NSString *)arg2;

@end
