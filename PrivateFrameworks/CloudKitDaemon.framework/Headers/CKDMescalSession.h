/* Runtime dump - CKDMescalSession
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDMescalSession : NSObject
{
    char _isSetup;
    char _renewing;
    CKDClientContext * _context;
    NSError * _lastSetupError;
    NSObject<OS_dispatch_queue> * _opQueue;
    NSObject<OS_dispatch_group> * _renewalGroup;
    NSOperationQueue * _renewQueue;
    struct FPSAPContextOpaque_ * _mescalSession;
    struct FairPlayHWInfo_ _mescalHWInfo;
}

@property (readonly, weak, nonatomic) CKDClientContext * context;
@property (nonatomic) char isSetup;
@property char renewing;
@property (retain, nonatomic) NSError * lastSetupError;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> * opQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_group> * renewalGroup;
@property (retain, nonatomic) NSOperationQueue * renewQueue;
@property (nonatomic) struct FPSAPContextOpaque_ * mescalSession;
@property (nonatomic) struct FairPlayHWInfo_ mescalHWInfo;

- (void)dealloc;
- (CKDClientContext *)context;
- (CKDMescalSession *)initWithContext:(CKDClientContext *)arg0;
- (void).cxx_destruct;
- (struct FPSAPContextOpaque_ *)mescalSession;
- (void)setMescalSession:(struct FPSAPContextOpaque_ *)arg0;
- (void)exchangeData:(NSData *)arg0 serverVersion:(int)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)resetMescalSession;
- (char)isSetup;
- (void)signData:(NSData *)arg0 forRequest:(NSURLRequest *)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)processSignedData:(NSData *)arg0 signature:(NSObject *)arg1 forRequest:(NSURLRequest *)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)renewMescalSessionForRequest:(NSURLRequest *)arg0 withCallback:(id /* block */)arg1;
- (void)setIsSetup:(char)arg0;
- (NSObject<OS_dispatch_queue> *)opQueue;
- (void)_teardownLocked;
- (void)_getHardwareInfo:(struct FairPlayHWInfo_ *)arg0 withCompletionHandler:(id /* block */)arg1;
- (void)_reallyExchangeData:(NSData *)arg0 serverVersion:(int)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)_setUpWithCompletionHandler:(id /* block */)arg0;
- (char)renewing;
- (void)setRenewing:(char)arg0;
- (NSObject<OS_dispatch_group> *)renewalGroup;
- (void)setLastSetupError:(NSError *)arg0;
- (NSOperationQueue *)renewQueue;
- (NSError *)lastSetupError;
- (void)_reallySignData:(NSData *)arg0 withCompletionHandler:(id /* block */)arg1;
- (void)_reallyProcessSignedData:(NSData *)arg0 signature:(NSObject *)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)setOpQueue:(NSObject<OS_dispatch_queue> *)arg0;
- (void)setRenewalGroup:(NSObject<OS_dispatch_group> *)arg0;
- (void)setRenewQueue:(NSOperationQueue *)arg0;
- (struct FairPlayHWInfo_)mescalHWInfo;
- (void)setMescalHWInfo:(struct FairPlayHWInfo_)arg0;
- (void)_teardown;

@end
