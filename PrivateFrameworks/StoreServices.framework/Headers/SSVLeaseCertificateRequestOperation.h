/* Runtime dump - SSVLeaseCertificateRequestOperation
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSVLeaseCertificateRequestOperation : SSVComplexOperation
{
    NSObject<OS_dispatch_semaphore> * _bagLoadSemaphore;
    NSString * _certificateURLBagKey;
    SSVPlaybackLeaseConfiguration * _configuration;
    id _outputBlock;
    SSURLBag * _urlBag;
}

@property (copy) NSString * certificateURLBagKey;
@property (copy) id outputBlock;

- (SSVLeaseCertificateRequestOperation *)initWithURLBag:(NSString *)arg0;
- (void)cancel;
- (void)main;
- (void).cxx_destruct;
- (void)setOutputBlock:(id /* block */)arg0;
- (SSVLeaseCertificateRequestOperation *)initWithConfiguration:(SSVPlaybackLeaseConfiguration *)arg0;
- (id /* block */)outputBlock;
- (NSError *)_resolveCertificateURLReturningError:(id *)arg0;
- (NSString *)certificateURLBagKey;
- (void)setCertificateURLBagKey:(NSString *)arg0;

@end
