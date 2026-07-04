/* Runtime dump - FBDisplayManager
 * Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface FBDisplayManager : NSObject
{
    NSHashTable * _observers;
    NSMapTable * _displayIDToFBSDisplayMap;
    NSMutableSet * _displaysDebouncing;
    FBSDisplay * _mainDisplay;
}

@property (retain, nonatomic) FBSDisplay * mainDisplay;

+ (FBDisplayManager *)sharedInstance;
+ (FBSDisplay *)mainDisplay;

- (FBDisplayManager *)init;
- (NSString *)description;
- (FBSDisplay *)mainDisplay;
- (NSArray *)displays;
- (void)removeObserver:(NSObject *)arg0;
- (void)observeValueForKeyPath:(NSString *)arg0 ofObject:(NSObject *)arg1 change:(NSDictionary *)arg2 context:(void *)arg3;
- (void)addObserver:(NSObject *)arg0;
- (void)_initializeDisplays;
- (char)_caDisplayIsMainDisplay:(NSObject *)arg0;
- (void)_caDisplayDidConnect:(id)arg0 debounce:(char)arg1 broadcast:(char)arg2;
- (NSObject *)_fbsDisplayForCADisplay:(NSObject *)arg0;
- (void)setMainDisplay:(FBSDisplay *)arg0;
- (void)_broadcastFBSDisplayDidConnect:(NSNotification *)arg0;
- (void)_debounceDisplay:(NSObject *)arg0 broadcast:(char)arg1;
- (void)_displayDidDebounce:(id)arg0 broadcast:(char)arg1;
- (void)_caDisplayDidDisconnect:(NSNotification *)arg0;

@end
