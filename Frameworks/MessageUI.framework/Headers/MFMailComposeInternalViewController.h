/* Runtime dump - MFMailComposeInternalViewController
 * Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface MFMailComposeInternalViewController : UIViewController <MFMailComposeRemoteViewControllerDelegate>
{
    <MFMailComposeViewControllerDelegate> * _mailComposeDelegate;
    MFMailComposePlaceholderViewController * _placeholderViewController;
    MFMailComposeRemoteViewController * _serviceViewController;
    _UIAsyncInvocation * _cancellationInvocation;
    NSMutableDictionary * _compositionValues;
    NSMutableArray * _attachments;
    NSString * _placeholderSubject;
    int _composeResult;
    NSError * _composeResultError;
    double _presentationDelayBeganTimestamp;
    id _hasDelayedPresentation;
    id _didEndDelayedPresentation;
    id _compositionValuesAreFinalized;
    id _remoteViewControllerIsConfigured;
    id _isAppearing;
    id _didAppear;
    id _didFinish;
    id _delegateRespondsToBodyFinishedLoadingWithResult;
    id _autorotationDelegate;
}

@property (nonatomic) <MFMailComposeViewControllerDelegate> * mailComposeDelegate;
@property (nonatomic) id autorotationDelegate;

- (void)setCaretPosition:(unsigned int)arg0;
- (void)setToRecipients:(NSArray *)arg0;
- (void)setCcRecipients:(NSArray *)arg0;
- (void)setBccRecipients:(NSArray *)arg0;
- (void)setShowKeyboardImmediately:(char)arg0;
- (void)finalizeCompositionValues;
- (<MFMailComposeViewControllerDelegate> *)mailComposeDelegate;
- (void)requestFramesForAttachmentsWithIdentifiers:(id)arg0 resultHandler:(id /* block */)arg1;
- (void)setAutorotationDelegate:(NSObject *)arg0;
- (void)_serviceViewControllerReady:(id)arg0 error:(NSError *)arg1;
- (void)_loadContentViewControllerForcingPlaceholder:(char)arg0;
- (void)_cancelComposition:(id)arg0;
- (void)_notifyCompositionDidFinish;
- (void)_beginDelayingCompositionPresenation;
- (double)_delayedPresentationTimeout;
- (void)_didEndDelayingCompositionPresentation;
- (void)_configureRemoteViewContoller;
- (void)_finishServiceViewControllerRequestWithSuccess:(char)arg0;
- (void)_notifyBodyDidFinishLoadingWithResult:(char)arg0;
- (void)compositionFinishedWithResult:(int)arg0 error:(NSError *)arg1;
- (void)_endDelayingCompositionPresentation;
- (void)_cancelRemoteServiceViewControllerRequest;
- (void)_setCompositionValue:(id)arg0 forKey:(NSString *)arg1;
- (void)_setPlaceHolderSubject:(id)arg0;
- (void)compositionViewServiceTerminatedWithError:(NSError *)arg0;
- (NSObject *)autorotationDelegate;
- (void)dealloc;
- (MFMailComposeInternalViewController *)initWithNibName:(NSString *)arg0 bundle:(NSObject *)arg1;
- (void)loadView;
- (char)shouldAutorotateToInterfaceOrientation:(int)arg0;
- (void)viewWillAppear:(char)arg0;
- (void)viewDidLoad;
- (void)willMoveToParentViewController:(BRController *)arg0;
- (char)automaticallyForwardAppearanceAndRotationMethodsToChildViewControllers;
- (void)viewDidAppear:(char)arg0;
- (void)setContentVisible:(char)arg0;
- (void)setURL:(NSString *)arg0;
- (void)setSubject:(NSString *)arg0;
- (void)autosaveWithHandler:(id /* block */)arg0;
- (void)setAutosaveIdentifier:(NSString *)arg0;
- (void)setMailComposeDelegate:(<MFMailComposeViewControllerDelegate> *)arg0;
- (void)setSourceAccountManagement:(int)arg0;
- (void)setMessageBody:(NSObject *)arg0 isHTML:(char)arg1;
- (NSData *)addAttachmentData:(NSData *)arg0 mimeType:(NSString *)arg1 fileName:(NSString *)arg2;

@end
