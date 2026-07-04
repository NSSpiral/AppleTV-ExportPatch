/* Runtime dump - BRCAccountOnlinePerformer
 * Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCAccountOnlinePerformer : NSObject <BRCReachabilityDelegate>
{
    NSString * _accountID;
    NSObject<OS_dispatch_queue> * _queue;
    NSObject<OS_dispatch_source> * _source;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (char)addPerformer:(BRCAccountOnlinePerformer *)arg0;
+ (void)removePerformer:(BRCAccountOnlinePerformer *)arg0;

- (void)perform;
- (void).cxx_destruct;
- (NSString *)_key;
- (void)networkReachabilityChanged:(char)arg0;
- (BRCAccountOnlinePerformer *)initWithAccountID:(NSString *)arg0;
- (void)resumeAndAutoClose;
- (void)_close;

@end
