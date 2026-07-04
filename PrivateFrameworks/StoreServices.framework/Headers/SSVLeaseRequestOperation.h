/* Runtime dump - SSVLeaseRequestOperation
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSVLeaseRequestOperation : SSVOperation
{
    NSObject<OS_dispatch_semaphore> * _bagLoadSemaphore;
    NSString * _bagKey;
    NSData * _certificateData;
    NSString * _certificateURLBagKey;
    SSVPlaybackLeaseConfiguration * _configuration;
    SSVFairPlaySubscriptionController * _fairPlaySubscriptionController;
    id _outputBlock;
    SSVPlaybackLeaseRequest * _request;
    SSURLBag * _urlBag;
}

@property (copy) NSData * certificateData;
@property (copy) NSString * certificateURLBagKey;
@property (retain) SSVFairPlaySubscriptionController * fairPlaySubscriptionController;
@property (copy) id outputBlock;

- (void)cancel;
- (void)main;
- (void).cxx_destruct;
- (void)setCertificateData:(NSData *)arg0;
- (void)setOutputBlock:(id /* block */)arg0;
- (NSData *)certificateData;
- (id /* block */)outputBlock;
- (NSString *)certificateURLBagKey;
- (void)setCertificateURLBagKey:(NSString *)arg0;
- (SSVLeaseRequestOperation *)initWithLeaseRequest:(struct FPLeaseSyncOpaque_ *)arg0 configuration:(SSVPlaybackLeaseConfiguration *)arg1;
- (SSVLeaseRequestOperation *)initWithLeaseRequest:(struct FPLeaseSyncOpaque_ *)arg0 URLBag:(ISURLBag *)arg1;
- (void)setFairPlaySubscriptionController:(SSVFairPlaySubscriptionController *)arg0;
- (char)_resolveConfigurationAndURLReturningError:(id *)arg0;
- (char)_addRequestBodyToRequest:(NSURLRequest *)arg0 withCertificateData:(NSData *)arg1 error:(id *)arg2;
- (SSVFairPlaySubscriptionController *)fairPlaySubscriptionController;

@end
