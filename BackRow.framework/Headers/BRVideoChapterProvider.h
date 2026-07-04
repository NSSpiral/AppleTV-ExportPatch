/* Runtime dump - BRVideoChapterProvider
 * Image: /Applications/AppleTV.app/AppleTV
 */


@protocol BRProvider;

@class BRMediaPlayer;
@interface BRVideoChapterProvider : NSObject <BRProvider>
{
    BRMediaPlayer * _player;
    struct _NSRange _invalidTitlesRange;
    NSTimer * _checkForChapterTitleUpdateTimer;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (long)dataCount;
- (id /* <BRControlFactory> */)controlFactory;
- (NSString *)hashForDataAtIndex:(long)arg0;
- (char)_videoIsLoaded;
- (void)_movieLoadedHandler:(id /* block */)arg0;
- (void)_checkChapterTitle:(NSString *)arg0;
- (BRVideoChapterProvider *)initWithPlayer:(BRMediaPlayer *)arg0;
- (void)dealloc;
- (void)stopMonitoring;
- (NSObject *)dataAtIndex:(long)arg0;

@end
