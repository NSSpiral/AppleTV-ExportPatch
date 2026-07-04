/* Runtime dump - MPPlayableContentManagerContext
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPPlayableContentManagerContext : NSObject
{
    char _contentLimitsEnabled;
    char _endpointAvailable;
    int _enforcedContentItemsCount;
    int _enforcedContentTreeDepth;
}

@property (nonatomic) int enforcedContentItemsCount;
@property (nonatomic) int enforcedContentTreeDepth;
@property (nonatomic) char contentLimitsEnabled;
@property (nonatomic) char endpointAvailable;

- (void)setContentLimitsEnabled:(char)arg0;
- (void)setEndpointAvailable:(char)arg0;
- (int)enforcedContentItemsCount;
- (void)setEnforcedContentItemsCount:(int)arg0;
- (int)enforcedContentTreeDepth;
- (void)setEnforcedContentTreeDepth:(int)arg0;
- (char)contentLimitsEnabled;
- (char)endpointAvailable;

@end
