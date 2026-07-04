/* Runtime dump - MPArtworkResizeUtility
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPArtworkResizeUtility : NSObject
{
    NSObject<OS_dispatch_queue> * _artworkResizingAccessQueue;
    NSOperationQueue * _artworkResizingOperationQueue;
    NSMapTable * _artworkResizingOperations;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> * artworkResizingAccessQueue;
@property (retain, nonatomic) NSOperationQueue * artworkResizingOperationQueue;
@property (retain, nonatomic) NSMapTable * artworkResizingOperations;

- (void)setArtworkResizingAccessQueue:(NSObject<OS_dispatch_queue> *)arg0;
- (void)setArtworkResizingOperationQueue:(NSOperationQueue *)arg0;
- (NSOperationQueue *)artworkResizingOperationQueue;
- (void)setArtworkResizingOperations:(NSMapTable *)arg0;
- (NSObject<OS_dispatch_queue> *)artworkResizingAccessQueue;
- (NSMapTable *)artworkResizingOperations;
- (void)cancelResizeImage:(UIImage *)arg0;
- (UIImage *)resizeImage:(UIImage *)arg0 scaledFittingSize:(struct CGSize)arg1 useExactFittingSizeAsDestinationSize:(char)arg2 saveToDestinationURL:(NSURL *)arg3 completionHandler:(id /* block */)arg4;
- (MPArtworkResizeUtility *)init;
- (void).cxx_destruct;

@end
