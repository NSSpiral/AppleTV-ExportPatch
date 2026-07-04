/* Runtime dump - MSVArtworkServiceOperation
 * Image: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
 */

@interface MSVArtworkServiceOperation : NSOperation
{
    NSError * _operationError;
    NSString * _debugMessage;
    MSVArtworkServiceRequest * _request;
}

@property (readonly, nonatomic) MSVArtworkServiceRequest * request;
@property (readonly, nonatomic) NSError * operationError;
@property (readonly, copy, nonatomic) NSString * debugMessage;

- (NSError *)operationError;
- (void)setOperationError:(NSError *)arg0;
- (MSVArtworkServiceRequest *)request;
- (void).cxx_destruct;
- (void)setDebugMessage:(NSString *)arg0;
- (MSVArtworkServiceOperation *)initWithArtworkRequest:(MPMediaLibraryArtworkRequest *)arg0;
- (NSString *)debugMessage;

@end
