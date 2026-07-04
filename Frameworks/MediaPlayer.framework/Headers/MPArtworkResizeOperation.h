/* Runtime dump - MPArtworkResizeOperation
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPArtworkResizeOperation : NSOperation
{
    char _usesExactFittingSizeAsDestinationSize;
    NSURL * _destinationURL;
    NSObject<OS_dispatch_group> * _operationGroup;
    NSError * _error;
    UIImage * _resizedImage;
    UIImage * _image;
    struct CGSize _scaledFittingSize;
}

@property (readonly, nonatomic) NSURL * destinationURL;
@property (readonly, nonatomic) NSObject<OS_dispatch_group> * operationGroup;
@property (readonly, nonatomic) NSError * error;
@property (readonly, nonatomic) UIImage * resizedImage;
@property (retain, nonatomic) UIImage * image;
@property (nonatomic) struct CGSize scaledFittingSize;
@property (nonatomic) char usesExactFittingSizeAsDestinationSize;

- (NSURL *)destinationURL;
- (struct CGSize)scaledFittingSize;
- (MPArtworkResizeOperation *)initWithImage:(UIImage *)arg0 scaledFittingSize:(struct CGSize)arg1 useExactFittingSizeAsDestinationSize:(char)arg2 destinationURL:(NSURL *)arg3;
- (NSObject<OS_dispatch_group> *)operationGroup;
- (UIImage *)resizedImage;
- (MPArtworkResizeOperation *)initWithImage:(UIImage *)arg0 scaledFittingSize:(struct CGSize)arg1 destinationURL:(NSURL *)arg2;
- (struct CGSize)_resizedScaledSizeForScaledImageSize:(struct CGSize)arg0 scaledFittingSize:(struct CGSize)arg1;
- (char)usesExactFittingSizeAsDestinationSize;
- (MPArtworkResizeOperation *)initWithImage:(UIImage *)arg0 scaledFittingSize:(struct CGSize)arg1;
- (void)setScaledFittingSize:(struct CGSize)arg0;
- (void)setUsesExactFittingSizeAsDestinationSize:(char)arg0;
- (void)setImage:(UIImage *)arg0;
- (UIImage *)image;
- (void)main;
- (void).cxx_destruct;
- (NSError *)error;

@end
