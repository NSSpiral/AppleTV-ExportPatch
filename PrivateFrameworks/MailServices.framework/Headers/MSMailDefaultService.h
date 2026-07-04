/* Runtime dump - MSMailDefaultService
 * Image: /System/Library/PrivateFrameworks/MailServices.framework/MailServices
 */

@interface MSMailDefaultService : MSService
{
    char _shouldLaunch;
}

@property (nonatomic) char shouldLaunchMobileMail;

- (MSMailDefaultService *)init;
- (id)_handleMessageSendFailure:(id)arg0 message:(NSString *)arg1 messageIndex:(long long)arg2 context:(id *)arg3;
- (NSOperationQueue *)_createServiceOnQueue:(NSObject *)arg0;
- (char)shouldLaunchMobileMail;
- (void)setShouldLaunchMobileMail:(char)arg0;

@end
