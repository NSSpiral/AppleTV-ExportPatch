/* Runtime dump - MusicCollectionController
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/MusicController.h>
@interface MusicCollectionController : MusicController
{
    NSString * _clientID;
}

@property (readonly, copy) NSString * clientID;

- (void)controlWasDeactivated;
- (void)controlWasActivated;
- (void)dealloc;
- (NSString *)clientID;

@end
