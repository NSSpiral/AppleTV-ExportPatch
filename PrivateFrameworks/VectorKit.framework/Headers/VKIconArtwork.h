/* Runtime dump - VKIconArtwork
 * Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKIconArtwork : NSObject
{
    char _hasIcon;
    VKImage * _image;
    float _contentScale;
    NSMutableArray * _completionHandlers;
}

@property (readonly, nonatomic) struct CGSize size;
@property (readonly, nonatomic) float contentScale;

- (void)dealloc;
- (struct CGSize)size;
- (VKImage *)image;
- (float)contentScale;
- (UIImage *)_newImage;
- (void)_cleanUpAfterDrawing;
- (VKIconArtwork *)initWithImage:(struct CGImage *)arg0 contentScale:(float)arg1;
- (void)getImage:(UIImage *)arg0;

@end
