/* Runtime dump - MUSICDataClientTopShelfHelper
 * Image: /Applications/AppleTV.app/AppleTV
 */

@interface MUSICDataClientTopShelfHelper : NSObject
{
    ATVDataQuery * _dateAddedQuery;
    ATVDataQuery * _datePlayedQuery;
    ATVDataQuery * _albumQuery;
    char _queryResultsParseable;
    ATVDataType * _mediaType;
    long _numOfRentals;
    id _queryCompletionHandler;
    id _albumQueryCompletionHandler;
}

@property (readonly, nonatomic) long numOfRentals;
@property (copy, nonatomic) id _queryCompletionHandler;
@property (copy, nonatomic) id _albumQueryCompletionHandler;

- (void)_cancelQueries;
- (void)set_queryCompletionHandler:(id /* block */)arg0;
- (void)set_albumQueryCompletionHandler:(id /* block */)arg0;
- (void)_submitHomeShareDateAddedQuery:(NSObject *)arg0 mediaType:(ATVDataType *)arg1;
- (void)_submitHomeShareDatePlayedQuery:(NSObject *)arg0 mediaType:(ATVDataType *)arg1;
- (void)queryDataWithMediaType:(ATVDataType *)arg0 dataClient:(ATVDataClient *)arg1 completionHandler:(id /* block */)arg2;
- (void)queryAlbumWithAlbumID:(NSNumber *)arg0 dataClient:(ATVDataClient *)arg1 completionHandler:(id /* block */)arg2;
- (long)numOfRentals;
- (id /* block */)_queryCompletionHandler;
- (id /* block */)_albumQueryCompletionHandler;
- (NSObject *)newBaseQuery:(NSObject *)arg0;
- (void)_itemsQueryComplete;
- (void)_albumQueryComplete;
- (void)dealloc;
- (void).cxx_destruct;

@end
