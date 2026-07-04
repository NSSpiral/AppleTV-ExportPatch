/* Runtime dump - MPArtworkRepresentation
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPArtworkRepresentation : NSObject
{
    UIImage * _image;
    id _representationToken;
    struct CGSize _representationSize;
}

@property (retain, nonatomic) UIImage * image;
@property (nonatomic) struct CGSize representationSize;
@property (retain, nonatomic) id representationToken;

+ (NSObject *)representationWithSize:(struct CGSize)arg0 image:(UIImage *)arg1;

- (struct CGSize)representationSize;
- (NSString *)representationToken;
- (void)setRepresentationToken:(NSString *)arg0;
- (void)setRepresentationSize:(struct CGSize)arg0;
- (void)setImage:(UIImage *)arg0;
- (UIImage *)image;
- (void).cxx_destruct;
- (NSObject *)debugQuickLookObject;

@end
