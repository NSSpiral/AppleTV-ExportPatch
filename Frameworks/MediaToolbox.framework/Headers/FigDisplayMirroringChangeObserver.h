/* Runtime dump - FigDisplayMirroringChangeObserver
 * Image: /System/Library/Frameworks/MediaToolbox.framework/MediaToolbox
 */

@interface FigDisplayMirroringChangeObserver : NSObject
{
    struct OpaqueFigPlayer * _player;
    NSObject<OS_dispatch_queue> * _accessQueue;
    NSMutableSet * _clonedDisplays;
    NSMutableSet * _cloningSupportedDisplays;
    NSArray * _baseDisplayList;
}

- (FigDisplayMirroringChangeObserver *)initWithPlayer:(struct OpaqueFigPlayer *)arg0;
- (void)setBaseDisplayList:(NSArray *)arg0;
- (void)removeReferenceToPlayer;
- (void)updatePlayerDisplayList;
- (void)dealloc;
- (void)observeValueForKeyPath:(NSString *)arg0 ofObject:(NSObject *)arg1 change:(NSDictionary *)arg2 context:(void *)arg3;

@end
