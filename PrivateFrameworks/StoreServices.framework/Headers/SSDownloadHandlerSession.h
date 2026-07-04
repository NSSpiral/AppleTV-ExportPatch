/* Runtime dump - SSDownloadHandlerSession
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSDownloadHandlerSession : SSDownloadSession
{
    NSString * _downloadPhase;
    NSNumber * _duetTimeoutInterval;
}

@property (readonly) NSString * downloadPhase;
@property (readonly) NSNumber * duetTimeoutInterval;
@property char blocksOtherDownloads;
@property char canBePaused;
@property char needsPowerAssertion;

- (void)releaseSessionControl;
- (NSString *)downloadPhase;
- (void)setCanBePaused:(char)arg0;
- (void)setStatusDescription:(NSString *)arg0;
- (void)dealloc;
- (void)setPercentComplete:(float)arg0;
- (NSString *)_initWithMessage:(NSString *)arg0 controlConnection:(SSXPCConnection *)arg1;
- (void)_finishWithType:(int)arg0 error:(NSError *)arg1;
- (void)_setBool:(char)arg0 forSessionProperty:(char *)arg1;
- (char)blocksOtherDownloads;
- (char)canBePaused;
- (void)disavowSessionWithError:(NSError *)arg0;
- (void)finishSessionWithSuccess:(char)arg0 error:(NSError *)arg1;
- (char)needsPowerAssertion;
- (void)setBlocksOtherDownloads:(char)arg0;
- (void)setNeedsPowerAssertion:(char)arg0;
- (NSNumber *)duetTimeoutInterval;

@end
