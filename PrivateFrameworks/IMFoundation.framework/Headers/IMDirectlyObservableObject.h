/* Runtime dump - IMDirectlyObservableObject
 * Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

@interface IMDirectlyObservableObject : NSObject
{
    NSArray * _observers;
}

@property (retain) NSArray * observers;

- (void)dealloc;
- (void)removeObserver:(NSObject *)arg0;
- (void)setObservers:(NSArray *)arg0;
- (NSArray *)observers;
- (void)addObserver:(NSObject *)arg0;
- (void)informObserversOfNotification:(NSNotification *)arg0;
- (void)_objectDidPostNotification:(NSNotification *)arg0;

@end
