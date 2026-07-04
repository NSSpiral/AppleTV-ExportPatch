/* Runtime dump - PSIQuery
 * Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PSIQuery : NSObject
{
    PSIDatabase * _idx;
    NSObject<OS_dispatch_queue> * _syncQueue;
    char _didStart;
    char _isCanceled;
    NSString * _searchText;
    int _queryId;
}

@property (readonly, copy, nonatomic) NSString * searchText;
@property (readonly) char canceled;
@property (readonly, nonatomic) int queryId;

- (void)cancel;
- (void)dealloc;
- (NSString *)searchText;
- (PSIQuery *)initWithQueryId:(int)arg0 index:(NSObject *)arg1 searchText:(NSString *)arg2;
- (void)runWithResultsHandler:(id /* block */)arg0;
- (char)isCanceled;
- (int)queryId;

@end
