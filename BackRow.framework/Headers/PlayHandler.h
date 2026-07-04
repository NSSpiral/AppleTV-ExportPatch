/* Runtime dump - PlayHandler
 * Image: /Applications/AppleTV.app/AppleTV
 */

@interface PlayHandler : NSObject
{
    <ATVDataBaseItem> * _mediaObject;
    ATVDataQuery * _query;
    char _playbackStarted;
}

- (void)cancelPlayIfNotStarted;
- (void)_queryComplete:(id)arg0;
- (char)play;
- (void)dealloc;
- (PlayHandler *)initWithObject:(NSObject *)arg0;

@end
