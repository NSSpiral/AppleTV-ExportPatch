/* Runtime dump - MPAVErrorResolver
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPAVErrorResolver : NSObject
{
    <MPAVErrorResolverDelegate> * _delegate;
}

@property (weak, nonatomic) <MPAVErrorResolverDelegate> * delegate;

- (void)resolveError:(NSError *)arg0;
- (void)sendDidResolveError:(NSError *)arg0 withResolution:(int)arg1;
- (void)setDelegate:(<MPAVErrorResolverDelegate> *)arg0;
- (<MPAVErrorResolverDelegate> *)delegate;
- (void).cxx_destruct;

@end
