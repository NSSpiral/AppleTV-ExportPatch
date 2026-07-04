/* Runtime dump - EKPredicateSearch
 * Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKPredicateSearch : NSObject <EKCancellableRemoteOperation>
{
    id _callback;
    Class _entityClass;
    NSPredicate * _predicate;
    EKEventStore * _store;
    id _cancellationToken;
    char _finished;
    char _isCancelled;
    int _retryCount;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSObject *)searchWithEntityClass:(Class)arg0 predicate:(NSPredicate *)arg1 store:(EKEventStore *)arg2;

- (id)startWithCompletion:(id /* block */)arg0;
- (EKPredicateSearch *)initWithEntityClass:(Class)arg0 predicate:(NSPredicate *)arg1 store:(EKEventStore *)arg2;
- (void)_startActualWithCompletion:(id /* block */)arg0;
- (void)terminate;
- (void)cancel;
- (void)dealloc;
- (void)disconnect;

@end
