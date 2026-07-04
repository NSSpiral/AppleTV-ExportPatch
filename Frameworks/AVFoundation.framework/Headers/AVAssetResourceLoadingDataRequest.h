/* Runtime dump - AVAssetResourceLoadingDataRequest
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVAssetResourceLoadingDataRequest : NSObject
{
    AVAssetResourceLoadingDataRequestInternal * _dataRequest;
}

@property (readonly, nonatomic) long long requestedOffset;
@property (readonly, nonatomic) int requestedLength;
@property (readonly, nonatomic) long long currentOffset;

- (AVAssetResourceLoadingDataRequest *)initWithLoadingRequest:(char)arg0 requestedOffset:(long long)arg1 requestedLength:(int)arg2 canSupplyIncrementalDataImmediately:(char)arg3;
- (NSURLRequest *)_loadingRequest;
- (void)dealloc;
- (AVAssetResourceLoadingDataRequest *)init;
- (NSString *)description;
- (void)finalize;
- (int)requestedLength;
- (long long)currentOffset;
- (long long)requestedOffset;
- (void)respondWithData:(NSData *)arg0;

@end
