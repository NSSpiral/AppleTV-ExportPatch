/* Runtime dump - AVAssetSynchronousInspectorLoader
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVAssetSynchronousInspectorLoader : AVAssetInspectorLoader
{
    AVAssetInspector * _assetInspector;
}

- (void)loadValuesAsynchronouslyForKeys:(NSArray *)arg0 keysForCollectionKeys:(NSArray *)arg1 completionHandler:(id /* block */)arg2;
- (char)isExportable;
- (char)isComposable;
- (AVAssetInspector *)assetInspector;
- (AVAssetSynchronousInspectorLoader *)initWithAssetInspector:(AVAssetInspector *)arg0;
- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (struct ?)duration;
- (NSString *)lyrics;
- (char)isReadable;
- (char)isCompatibleWithSavedPhotosAlbum;
- (int)statusOfValueForKey:(NSString *)arg0 error:(id *)arg1;
- (void)loadValuesAsynchronouslyForKeys:(NSArray *)arg0 completionHandler:(id /* block */)arg1;
- (char)isPlayable;

@end
