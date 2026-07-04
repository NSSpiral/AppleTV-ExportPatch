/* Runtime dump - SSVPlaybackLease
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSVPlaybackLease : NSObject
{
    NSMutableArray * _assetOperations;
    NSData * _certificateData;
    NSString * _certificateURLBagKey;
    SSVPlaybackLeaseConfiguration * _configuration;
    <SSVPlaybackLeaseDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _delegateQueue;
    SSVFairPlaySubscriptionController * _fairPlaySubscriptionController;
    int _leaseDidEndNotificationToken;
    NSDate * _leaseExpirationDate;
    SSVRefreshSubscriptionRequest * _offlineSlotRequest;
    SSVBarrierOperationQueue * _operationQueue;
    char _refreshesAutomatically;
    NSObject<OS_dispatch_source> * _refreshTimer;
    NSObject<OS_dispatch_queue> * _serialQueue;
    SSURLBag * _urlBag;
}

@property (weak) <SSVPlaybackLeaseDelegate> * delegate;
@property char refreshesAutomatically;
@property (copy) NSData * certificateData;
@property (copy) NSString * certificateURLBagKey;

- (void)cancelAllAssetRequests;
- (void)beginLeaseWithRequest:(NSURLRequest *)arg0 completionBlock:(id /* block */)arg1;
- (void)setRefreshesAutomatically:(char)arg0;
- (void)endLease;
- (void)getAssetWithRequest:(NSURLRequest *)arg0 completionBlock:(id /* block */)arg1;
- (void)preheatLeaseRequestsWithCompletionBlock:(id /* block */)arg0;
- (void)refreshLeaseWithRequest:(NSURLRequest *)arg0 completionBlock:(id /* block */)arg1;
- (SSVPlaybackLease *)initWithURLBag:(NSString *)arg0;
- (void)dealloc;
- (void)setDelegate:(<SSVPlaybackLeaseDelegate> *)arg0;
- (SSVPlaybackLease *)init;
- (<SSVPlaybackLeaseDelegate> *)delegate;
- (void).cxx_destruct;
- (void)setCertificateData:(NSData *)arg0;
- (NSData *)certificateData;
- (NSString *)certificateURLBagKey;
- (void)setCertificateURLBagKey:(NSString *)arg0;
- (SSVPlaybackLease *)_initSSVPlaybackLease;
- (NSURLRequest *)_addOperationWithRequest:(NSURLRequest *)arg0 configurationURL:(NSURL *)arg1 bagKey:(NSString *)arg2 completionBlock:(id /* block */)arg3;
- (void)_endLease;
- (void)getCertificateDataWithCompletionBlock:(id /* block */)arg0;
- (void)_startRefreshTimerIfNecessary;
- (void)_cancelRefreshTimer;
- (void)_updateForLeaseResponse:(NSURLResponse *)arg0 error:(NSError *)arg1;
- (void)_fireRefreshTimer;
- (char)_shouldEndLeaseForError:(NSError *)arg0 returningEndReasonType:(unsigned int *)arg1;
- (void)_sendLeaseDidEndWithEndReasonType:(unsigned int)arg0;
- (SSVPlaybackLease *)initWithLeaseConfiguration:(struct FPLeaseSyncOpaque_ *)arg0;
- (char)refreshesAutomatically;

@end
