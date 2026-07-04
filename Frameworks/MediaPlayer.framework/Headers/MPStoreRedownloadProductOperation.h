/* Runtime dump - MPStoreRedownloadProductOperation
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPStoreRedownloadProductOperation : NSOperation
{
    NSObject<OS_dispatch_queue> * _accessQueue;
    MPStoreRedownloadProductResponse * _redownloadProductResponse;
    NSError * _responseError;
    SSURLConnectionRequest * _URLConnectionRequest;
    NSString * _buyParameters;
    unsigned int _endpointType;
}

@property (readonly, copy, nonatomic) NSString * buyParameters;
@property (readonly, nonatomic) unsigned int endpointType;
@property (readonly, nonatomic) MPStoreRedownloadProductResponse * redownloadProductResponse;
@property (readonly, copy, nonatomic) NSError * responseError;

- (NSString *)buyParameters;
- (MPStoreRedownloadProductOperation *)initWithBuyParameters:(NSString *)arg0 endpointType:(unsigned int)arg1;
- (MPStoreRedownloadProductResponse *)redownloadProductResponse;
- (unsigned int)endpointType;
- (void)cancel;
- (MPStoreRedownloadProductOperation *)init;
- (void)main;
- (void).cxx_destruct;
- (NSError *)responseError;

@end
