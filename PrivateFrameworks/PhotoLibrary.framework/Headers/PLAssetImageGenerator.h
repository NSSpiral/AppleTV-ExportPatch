/* Runtime dump - PLAssetImageGenerator
 * Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@interface PLAssetImageGenerator : NSObject
{
    char _inUse;
    AVAssetImageGenerator * _imageGenerator;
}

@property (retain, nonatomic) AVAssetImageGenerator * imageGenerator;
@property (nonatomic) char inUse;

- (void)dealloc;
- (PLAssetImageGenerator *)initWithAsset:(NSSet *)arg0;
- (AVAssetImageGenerator *)imageGenerator;
- (void)setImageGenerator:(AVAssetImageGenerator *)arg0;
- (void)setInUse:(char)arg0;
- (char)inUse;

@end
