/* Runtime dump - MPPlaybackContext
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPPlaybackContext : NSObject
{
    char _shouldStartPlayback;
    char _shouldRestartPlayback;
    int _startIndex;
    unsigned int _shuffleType;
    unsigned int _repeatType;
}

@property (nonatomic) int startIndex;
@property (nonatomic) char shouldStartPlayback;
@property (nonatomic) char shouldRestartPlayback;
@property (nonatomic) unsigned int shuffleType;
@property (nonatomic) unsigned int repeatType;

+ (Class)queueFeederClass;

- (void)setShouldStartPlayback:(char)arg0;
- (unsigned int)repeatType;
- (unsigned int)shuffleType;
- (void)setRepeatType:(unsigned int)arg0;
- (void)setShuffleType:(unsigned int)arg0;
- (char)shouldStartPlayback;
- (char)shouldRestartPlayback;
- (NSArray *)descriptionComponents;
- (void)setShouldRestartPlayback:(char)arg0;
- (MPPlaybackContext *)init;
- (NSString *)description;
- (int)startIndex;
- (void)setStartIndex:(int)arg0;

@end
