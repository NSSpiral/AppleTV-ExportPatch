/* Runtime dump - RUIYTSearchResultsLoader
 * Image: /Applications/AppleTV.app/AppleTV
 */


@protocol RUIYTDocumentLoaderDelegate;

@class RUIYTDocument, RUIYTDocumentLoader;
@interface RUIYTSearchResultsLoader : NSObject <RUIYTDocumentLoaderDelegate>
{
    RUIYTDocumentLoader * _documentLoader;
    NSMutableDictionary * _loadingResults;
    NSString * _searchTerm;
}

@property (readonly, weak) NSString * searchTerm;
@property (readonly) NSDictionary * results;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)documentLoader:(RUIYTDocumentLoader *)arg0 didLoadDocument:(RUIYTDocument *)arg1;
- (void)loadResultsForSearchTerm:(id)arg0;
- (NSString *)searchTerm;
- (void)dealloc;
- (RUIYTSearchResultsLoader *)init;
- (NSDictionary *)results;
- (void).cxx_destruct;

@end
