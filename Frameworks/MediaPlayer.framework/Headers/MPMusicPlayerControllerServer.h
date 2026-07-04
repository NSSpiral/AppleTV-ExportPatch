/* Runtime dump - MPMusicPlayerControllerServer
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPMusicPlayerControllerServer : NSObject
{
    MPMusicPlayerControllerServerInternal * _internal;
}

@property (readonly, nonatomic) MPAVController * player;

+ (void)startMusicPlayerControllerServerWithDelegate:(NSObject *)arg0;
+ (char)isMusicPlayerControllerServerRunning;
+ (MPMusicPlayerControllerServer *)sharedInstance;

- (void)_runMigServer;
- (void)setDelegate:(NSObject *)arg0;
- (MPMusicPlayerControllerServer *)init;
- (NSString *)methodSignatureForSelector:(SEL)arg0;
- (void)forwardInvocation:(NSInvocation *)arg0;
- (void).cxx_destruct;
- (MPAVController *)player;

@end
