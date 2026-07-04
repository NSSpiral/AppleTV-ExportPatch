/* Runtime dump - TSKAVQueuePlayerController
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSKAVQueuePlayerController : TSKAVPlayerController
{
    NSArray * mAssets;
}

- (void)playerItemDidPlayToEndTimeAtRate:(float)arg0;
- (TSKAVQueuePlayerController *)initWithQueuePlayer:(AVQueuePlayerInternal *)arg0 delegate:(NSObject *)arg1 assets:(NSArray *)arg2 initialAssetIndex:(unsigned int)arg3;
- (void)p_enqueueAssetsFromIndex:(unsigned int)arg0;
- (TSKAVQueuePlayerController *)initWithQueuePlayer:(AVQueuePlayerInternal *)arg0 delegate:(NSObject *)arg1 assets:(NSArray *)arg2;
- (void)skipToAssetAtIndex:(unsigned int)arg0;
- (void)dealloc;

@end
