/* Runtime dump - LTMessagesController
 * Image: /Applications/AppleTV.app/AppleTV
 */


@protocol ATVMessageServiceDelegate;

@class ATVMessage, ATVMessageService;
@interface LTMessagesController : ATVBackgroundTask <ATVMessageServiceDelegate>

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (LTMessagesController *)sharedInstance;

- (void)messageService:(ATVMessageService *)arg0 didReceiveMessage:(ATVMessage *)arg1 userSawMessageBlock:(id /* block */)arg2;
- (void)messageService:(ATVMessageService *)arg0 didReceiveURLBase:(NSString *)arg1 userSawMessageBlock:(id /* block */)arg2;
- (LTMessagesController *)init;
- (void)stop;
- (char)perform;
- (LTMessagesController *)initWithType:(int)arg0 interval:(double)arg1 delay:(double)arg2 async:(char)arg3;

@end
