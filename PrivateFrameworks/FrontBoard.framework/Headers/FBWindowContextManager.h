/* Runtime dump - FBWindowContextManager
 * Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface FBWindowContextManager : NSObject
{
    NSHashTable * _observers;
    NSMutableOrderedSet * _orderedContexts;
    <FBWindowContextManagerDelegate> * _delegate;
    NSString * _identifier;
}

@property (nonatomic) <FBWindowContextManagerDelegate> * delegate;
@property (copy, nonatomic) NSString * identifier;

- (void)dealloc;
- (void)setDelegate:(<FBWindowContextManagerDelegate> *)arg0;
- (FBWindowContextManager *)init;
- (NSString *)description;
- (<FBWindowContextManagerDelegate> *)delegate;
- (NSString *)identifier;
- (void)removeObserver:(NSObject *)arg0;
- (void)setIdentifier:(NSString *)arg0;
- (void)addObserver:(NSObject *)arg0;
- (NSCountedSet *)contexts;
- (void)_enumerateObserversWithBlock:(id /* block */)arg0;
- (void)addContext:(NSObject *)arg0;
- (void)removeContext:(NSObject *)arg0;

@end
