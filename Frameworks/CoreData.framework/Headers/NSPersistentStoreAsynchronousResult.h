/* Runtime dump - NSPersistentStoreAsynchronousResult
 * Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSPersistentStoreAsynchronousResult : NSPersistentStoreResult
{
    NSProgress * _requestProgress;
    NSError * _requestError;
    NSManagedObjectContext * _requestContext;
    id _requestCompletionBlock;
    int _flags;
}

@property (readonly) NSManagedObjectContext * managedObjectContext;
@property (retain) NSError * operationError;
@property (retain) NSProgress * progress;
@property (copy) id requestCompletionBlock;

- (NSPersistentStoreAsynchronousResult *)initWithContext:(NSObject *)arg0 andProgress:(id)arg1 completetionBlock:(id /* block */)arg2;
- (void)_cancelProgress;
- (char)_isCancelled;
- (NSError *)operationError;
- (void)setOperationError:(NSError *)arg0;
- (id /* block */)requestCompletionBlock;
- (void)cancel;
- (void)dealloc;
- (void)setProgress:(NSProgress *)arg0;
- (NSProgress *)progress;
- (NSManagedObjectContext *)managedObjectContext;
- (void)setRequestCompletionBlock:(id /* block */)arg0;

@end
