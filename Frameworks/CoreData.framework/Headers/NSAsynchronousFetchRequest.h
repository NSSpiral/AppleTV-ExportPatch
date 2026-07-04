/* Runtime dump - NSAsynchronousFetchRequest
 * Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSAsynchronousFetchRequest : NSPersistentStoreRequest
{
    NSFetchRequest * _fetchRequest;
    id _requestCompletionBlock;
    int _estimatedResultCount;
}

@property (readonly) NSFetchRequest * fetchRequest;
@property (readonly) id completionBlock;
@property (nonatomic) int estimatedResultCount;

- (int)estimatedResultCount;
- (NSAsynchronousFetchRequest *)initWithFetchRequest:(NSFetchRequest *)arg0 completionBlock:(id /* block */)arg1;
- (void)setEstimatedResultCount:(int)arg0;
- (void)dealloc;
- (NSString *)description;
- (id /* block */)completionBlock;
- (NSFetchRequest *)fetchRequest;
- (unsigned int)requestType;

@end
