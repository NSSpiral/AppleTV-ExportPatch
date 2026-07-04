/* Runtime dump - MPStoreLookupBatchOperation
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPStoreLookupBatchOperation : NSOperation
{
    SSLookupRequest * _subrequest;
    SSLookupResponse * _response;
    NSError * _error;
}

@property (readonly, nonatomic) SSLookupRequest * subrequest;
@property (readonly, nonatomic) SSLookupResponse * response;
@property (readonly, nonatomic) NSError * error;

- (MPStoreLookupBatchOperation *)initWithSubrequest:(SSLookupRequest *)arg0;
- (SSLookupRequest *)subrequest;
- (SSLookupResponse *)response;
- (void)main;
- (void).cxx_destruct;
- (NSError *)error;

@end
