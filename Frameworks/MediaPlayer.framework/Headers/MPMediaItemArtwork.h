/* Runtime dump - MPMediaItemArtwork
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPMediaItemArtwork : NSObject
{
    UIImage * _image;
}

@property (readonly, nonatomic) struct CGRect bounds;
@property (readonly, nonatomic) struct CGRect imageCropRect;

- (NSObject *)imageWithSize:(struct CGSize)arg0;
- (struct CGRect)imageCropRect;
- (struct CGRect)bounds;
- (MPMediaItemArtwork *)initWithImage:(UIImage *)arg0;
- (void).cxx_destruct;

@end
