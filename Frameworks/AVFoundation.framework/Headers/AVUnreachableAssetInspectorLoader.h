/* Runtime dump - AVUnreachableAssetInspectorLoader
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVUnreachableAssetInspectorLoader : AVAssetInspectorLoader
{
    long _figError;
    NSDictionary * _figErrorUserInfo;
}

- (Class)_classForTrackInspectors;
- (AVUnreachableAssetInspectorLoader *)initWithFigError:(long)arg0 userInfo:(NSDictionary *)arg1;
- (void)dealloc;
- (int)statusOfValueForKey:(NSString *)arg0 error:(id *)arg1;
- (void)loadValuesAsynchronouslyForKeys:(NSArray *)arg0 completionHandler:(id /* block */)arg1;

@end
