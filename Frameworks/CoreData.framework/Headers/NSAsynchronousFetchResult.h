/* Runtime dump - NSAsynchronousFetchResult
 * Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSAsynchronousFetchResult : NSPersistentStoreAsynchronousResult
{
    NSAsynchronousFetchRequest * _fetchRequest;
    NSArray * _finalResult;
    id _intermediateResultCallback;
}

@property (readonly) NSAsynchronousFetchRequest * fetchRequest;
@property (retain) NSArray * finalResult;
@property (copy) id intermediateResultCallback;

- (NSAsynchronousFetchResult *)initForFetchRequest:(NSURLRequest *)arg0 withContext:(NSObject *)arg1 andProgress:(id)arg2 completetionBlock:(id /* block */)arg3;
- (NSArray *)finalResult;
- (void)setFinalResult:(NSArray *)arg0;
- (id /* block */)intermediateResultCallback;
- (void)setIntermediateResultCallback:(id /* block */)arg0;
- (void)dealloc;
- (NSAsynchronousFetchRequest *)fetchRequest;

@end
