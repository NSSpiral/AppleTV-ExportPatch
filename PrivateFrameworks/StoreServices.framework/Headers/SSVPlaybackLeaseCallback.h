/* Runtime dump - SSVPlaybackLeaseCallback
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSVPlaybackLeaseCallback : NSObject
{
    id _block;
    SSVPlaybackLeaseResponse * _response;
    NSError * _error;
}

@property (copy, nonatomic) id block;
@property (retain, nonatomic) SSVPlaybackLeaseResponse * response;
@property (retain, nonatomic) NSError * error;

- (SSVPlaybackLeaseResponse *)response;
- (void).cxx_destruct;
- (NSError *)error;
- (void)setResponse:(SSVPlaybackLeaseResponse *)arg0;
- (id /* block */)block;
- (void)setBlock:(id /* block */)arg0;
- (void)setError:(NSError *)arg0;

@end
