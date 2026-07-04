/* Runtime dump - BRKeyValueObservingRegistry
 * Image: /Applications/AppleTV.app/AppleTV
 */


@class BRKeyValueObservationEntry;
@interface BRKeyValueObservingRegistry : NSObject
{
    NSIndexSet * _indexesToRemove;
    NSArray * _observationEntries;
}

@property (retain) NSArray * observationEntries;

- (void)unregisterAll;
- (void)registerObserver:(NSObject *)arg0 ofObject:(NSObject *)arg1 forKeyPath:(NSString *)arg2 handler:(<BRSelectionHandler> *)arg3;
- (void)unregisterObserversOfObject:(NSObject *)arg0 forKeyPath:(NSString *)arg1;
- (void)unregisterObserversOfObject:(NSObject *)arg0;
- (void)setObservationEntries:(NSArray *)arg0;
- (void)_removeObservationEntriesAtIndexes:(NSArray *)arg0 inDealloc:(char)arg1;
- (void)registerObserver:(NSObject *)arg0 ofObject:(NSObject *)arg1 forKeyPath:(NSString *)arg2 options:(unsigned int)arg3 handler:(<BRSelectionHandler> *)arg4;
- (void)_addObservationEntry:(BRKeyValueObservationEntry *)arg0 options:(unsigned int)arg1;
- (NSArray *)observationEntries;
- (void)dealloc;
- (BRKeyValueObservingRegistry *)init;
- (void)observeValueForKeyPath:(NSString *)arg0 ofObject:(NSObject *)arg1 change:(NSDictionary *)arg2 context:(void *)arg3;
- (void)unregisterObserver:(NSObject *)arg0;

@end
