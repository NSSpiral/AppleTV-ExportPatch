/* Runtime dump - MFMessageComposeViewController
 * Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface MFMessageComposeViewController : UINavigationController
{
    <MFMessageComposeViewControllerDelegate> * _messageComposeDelegate;
    NSArray * _recipients;
    NSString * _body;
    NSString * _subject;
    NSMutableArray * _mutableAttachmentURLs;
    unsigned int _currentAttachedVideoCount;
    unsigned int _currentAttachedAudioCount;
    unsigned int _currentAttachedImageCount;
    NSArray * _attachments;
}

@property (nonatomic) <MFMessageComposeViewControllerDelegate> * messageComposeDelegate;
@property (copy, nonatomic) NSArray * recipients;
@property (copy, nonatomic) NSString * body;
@property (copy, nonatomic) NSString * subject;
@property (readonly, copy, nonatomic) NSArray * attachments;
@property (nonatomic) unsigned int currentAttachedVideoCount;
@property (nonatomic) unsigned int currentAttachedAudioCount;
@property (nonatomic) unsigned int currentAttachedImageCount;
@property (copy, nonatomic) NSMutableArray * mutableAttachmentURLs;

+ (char)_canSendText;
+ (void)_updateServiceAvailability;
+ (void)_serviceAvailabilityChanged:(NSNotification *)arg0;
+ (double)maxTrimDurationForAudio;
+ (double)maxTrimDurationForVideo;
+ (void)_setupAccountMonitor;
+ (char)canSendSubject;
+ (char)canSendAttachments;
+ (void)_startListeningForAvailabilityNotifications;
+ (void)initialize;
+ (char)canSendText;
+ (char)isMMSEnabled;
+ (char)isiMessageEnabled;
+ (char)canSendPhotos:(int)arg0 videos:(int)arg1 audioClips:(int)arg2;
+ (char)isSupportedAttachmentUTI:(id)arg0;

- (void)setRecipients:(NSArray *)arg0;
- (void)disableUserAttachments;
- (void)setCurrentAttachedVideoCount:(unsigned int)arg0;
- (void)setCurrentAttachedAudioCount:(unsigned int)arg0;
- (void)setCurrentAttachedImageCount:(unsigned int)arg0;
- (NSURL *)_MIMETypeForURL:(NSURL *)arg0;
- (char)_isVideoMIMEType:(NSObject *)arg0;
- (char)_isAudioMIMEType:(NSObject *)arg0;
- (char)_isImageMIMEType:(NSObject *)arg0;
- (NSMutableArray *)mutableAttachmentURLs;
- (NSObject *)_contentTypeForMIMEType:(NSObject *)arg0;
- (void)_updateAttachmentCountForAttachmentURL:(NSURL *)arg0;
- (NSURL *)_buildAttachmentInfoForAttachmentURL:(NSURL *)arg0 andAlternameFilename:(NSString *)arg1;
- (char)canAddAttachmentURL:(NSURL *)arg0;
- (char)addAttachmentData:(NSData *)arg0 withAlternateFilename:(UIView *)arg1;
- (void)smsComposeControllerCancelled:(id)arg0;
- (void)smsComposeControllerSendStarted:(id)arg0;
- (void)_setCanEditRecipients:(char)arg0;
- (<MFMessageComposeViewControllerDelegate> *)messageComposeDelegate;
- (void)setMutableAttachmentURLs:(NSMutableArray *)arg0;
- (unsigned int)currentAttachedVideoCount;
- (unsigned int)currentAttachedAudioCount;
- (unsigned int)currentAttachedImageCount;
- (void)dealloc;
- (MFMessageComposeViewController *)initWithNibName:(NSString *)arg0 bundle:(NSObject *)arg1;
- (void)setModalPresentationStyle:(int)arg0;
- (void)viewWillAppear:(char)arg0;
- (char)automaticallyForwardAppearanceAndRotationMethodsToChildViewControllers;
- (NSString *)body;
- (NSArray *)attachments;
- (void)setSubject:(NSString *)arg0;
- (NSString *)subject;
- (void)setMessageComposeDelegate:(<MFMessageComposeViewControllerDelegate> *)arg0;
- (void)setBody:(NSString *)arg0;
- (char)addAttachmentURL:(NSURL *)arg0 withAlternateFilename:(UIView *)arg1;
- (char)addAttachmentData:(NSData *)arg0 typeIdentifier:(NSString *)arg1 filename:(NSString *)arg2;
- (NSSet *)attachmentURLs;
- (NSArray *)recipients;

@end
