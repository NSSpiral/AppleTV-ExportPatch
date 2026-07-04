/* Runtime dump - MPPlayableContentCallbackContext
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPPlayableContentCallbackContext : NSObject
{
    char _serviced;
    NSIndexPath * _indexPath;
}

@property (readonly, nonatomic) NSIndexPath * indexPath;
@property (nonatomic) char serviced;

- (char)serviced;
- (void)setServiced:(char)arg0;
- (MPPlayableContentCallbackContext *)initWithIndexPath:(NSIndexPath *)arg0;
- (NSIndexPath *)indexPath;
- (void).cxx_destruct;

@end
