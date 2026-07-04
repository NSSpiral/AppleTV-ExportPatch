/* Runtime dump - ABPersonTableViewSharingDelegate
 * Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABPersonTableViewSharingDelegate : NSObject
{
    ABActionSheetDelegate * _actionSheetDelegate;
    char _shareMessageBodyIsHTML;
    ABStyleProvider * _styleProvider;
    ABPersonViewControllerHelper * _helper;
    NSString * _shareMessageBody;
    NSString * _shareMessageSubject;
    NSString * _shareLocationURL;
    UIImage * _shareLocationSnapshotImage;
    id _willTweetLocationCallback;
    id _willWeiboLocationCallback;
}

@property (retain, nonatomic) ABStyleProvider * styleProvider;
@property (nonatomic) ABPersonViewControllerHelper * helper;
@property (readonly, nonatomic) char canShareContact;
@property (readonly, nonatomic) char canSendMMS;
@property (readonly, nonatomic) char canSendMail;
@property (readonly, nonatomic) char canTweet;
@property (readonly, nonatomic) char canWeibo;
@property (nonatomic) char shareMessageBodyIsHTML;
@property (copy, nonatomic) NSString * shareMessageBody;
@property (copy, nonatomic) NSString * shareMessageSubject;
@property (copy, nonatomic) NSString * shareLocationURL;
@property (retain, nonatomic) UIImage * shareLocationSnapshotImage;
@property (copy, nonatomic) id willTweetLocationCallback;
@property (copy, nonatomic) id willWeiboLocationCallback;

+ (ABPersonTableViewSharingDelegate *)_fakePersonForMergedPeople:(id)arg0;

- (ABStyleProvider *)styleProvider;
- (void)setStyleProvider:(ABStyleProvider *)arg0;
- (ABPersonViewControllerHelper *)helper;
- (void)setHelper:(ABPersonViewControllerHelper *)arg0;
- (void)setWillTweetLocationCallback:(id /* block */)arg0;
- (char)loadMessageUIAndReturnBundle:(id *)arg0;
- (void)getVCardData:(id *)arg0 exportMode:(int)arg1 fileName:(id *)arg2;
- (NSString *)shareMessageSubject;
- (NSString *)shareLocationURL;
- (id /* block */)willTweetLocationCallback;
- (id /* block */)willWeiboLocationCallback;
- (void)shareContactByEmail:(id)arg0;
- (void)shareContactByTextMessage:(NSString *)arg0;
- (void)shareLocationOnTwitter:(id)arg0;
- (void)shareLocationOnWeibo:(id)arg0;
- (void)shareActionSheet:(NSObject *)arg0 clickedButtonAtIndex:(int)arg1;
- (void)shareContactFromButtonItem:(NSObject *)arg0 sender:(NSObject *)arg1;
- (char)loadChatKitAndReturnBundle:(id *)arg0;
- (NSString *)vCardFileName;
- (char)canSendMMS;
- (char)canTweet;
- (char)canWeibo;
- (void)shareContactFromButtonItem:(NSObject *)arg0;
- (void)shareContact:(id)arg0;
- (char)canShareContact;
- (char)shareMessageBodyIsHTML;
- (void)setShareMessageBodyIsHTML:(char)arg0;
- (NSString *)shareMessageBody;
- (void)setShareMessageBody:(NSString *)arg0;
- (void)setShareMessageSubject:(NSString *)arg0;
- (void)setShareLocationURL:(NSString *)arg0;
- (UIImage *)shareLocationSnapshotImage;
- (void)setShareLocationSnapshotImage:(UIImage *)arg0;
- (void)setWillWeiboLocationCallback:(id /* block */)arg0;
- (void)dealloc;
- (ABPersonTableViewSharingDelegate *)init;
- (char)canSendMail;
- (void)mailComposeController:(BRController *)arg0 didFinishWithResult:(int)arg1 error:(NSError *)arg2;
- (void)messageComposeViewController:(MFMessageComposeViewController *)arg0 didFinishWithResult:(int)arg1;

@end
