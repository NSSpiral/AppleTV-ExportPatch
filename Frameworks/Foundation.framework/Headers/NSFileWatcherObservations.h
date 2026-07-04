/* Runtime dump - NSFileWatcherObservations
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSFileWatcherObservations : NSObject
{
    char _attributesChanged;
    char _contentsChanged;
    char _deleted;
    char _moved;
    NSString * _lastObservedPath;
    char _didResetPath;
    NSString * _path;
}

- (void)addAttributeChange;
- (void)addContentsChange;
- (void)addDeletion;
- (void)addDetectedMoveToPath:(NSString *)arg0;
- (void)addAnnouncedMoveToPath:(NSString *)arg0;
- (void)notifyObserver:(NSObject *)arg0;
- (void)dealloc;
- (NSString *)description;
- (NSFileWatcherObservations *)initWithPath:(NSString *)arg0;

@end
