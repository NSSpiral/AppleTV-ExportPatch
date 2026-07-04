/* Runtime dump - MPVolumeHUDController
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPVolumeHUDController : NSObject
{
    NSMutableArray * _contexts;
    NSMutableSet * _categories;
}

@property (readonly, nonatomic) id mainContext;

+ (MPVolumeHUDController *)sharedInstance;

- (void)registerView:(NSObject *)arg0 inContext:(NSObject *)arg1;
- (void)unregisterView:(NSObject *)arg0 inContext:(NSObject *)arg1;
- (NSString *)pushContext;
- (void)_updateVisibility;
- (void)popContext;
- (MPVolumeHUDController *)init;
- (NSString *)mainContext;
- (void).cxx_destruct;
- (void)setNeedsUpdate;

@end
