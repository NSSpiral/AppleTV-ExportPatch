/* Runtime dump - ATVMusicStoreMoviePreviewController
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRController.h>

@class ATVURLDocument, BREvent, BRWaitPromptControl;
@interface ATVMusicStoreMoviePreviewController : BRController
{
    BRWaitPromptControl * _waitPrompt;
    NSTimer * _timer;
    NSDictionary * _dictionary;
    ATVURLDocument * _document;
}

+ (NSDictionary *)previewControllerWithDictionary:(NSDictionary *)arg0;

- (char)brEventAction:(BREvent *)arg0;
- (void)controlWasDeactivated;
- (void)controlWasActivated;
- (ATVMusicStoreMoviePreviewController *)initWithStoreDictionary:(NSDictionary *)arg0;
- (void)_movieDataFetchRequestProcessed:(id)arg0;
- (void)_showPromptTimer:(NSObject *)arg0;
- (void)dealloc;
- (ATVMusicStoreMoviePreviewController *)init;

@end
