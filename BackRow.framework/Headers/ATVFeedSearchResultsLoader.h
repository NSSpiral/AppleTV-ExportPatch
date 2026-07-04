/* Runtime dump - ATVFeedSearchResultsLoader
 * Image: /Applications/AppleTV.app/AppleTV
 */


@class ATVFeedDocument, ATVMerchant, ATVURLDocument;
@interface ATVFeedSearchResultsLoader : NSObject
{
    ATVURLDocument * _document;
    NSString * _baseURLString;
    ATVMerchant * _merchant;
    NSString * _searchTerm;
    NSDictionary * _results;
    ATVFeedDocument * _resultsFeedDocument;
}

@property (readonly) NSString * searchTerm;
@property (readonly) NSDictionary * results;
@property (readonly) ATVFeedDocument * resultsFeedDocument;

- (ATVFeedSearchResultsLoader *)initWithSearchTerm:(NSString *)arg0 baseURLString:(NSString *)arg1 merchant:(ATVMerchant *)arg2;
- (ATVFeedDocument *)resultsFeedDocument;
- (void)_setDocument:(NSObject *)arg0;
- (NSString *)_escapedSearchStringForString:(NSString *)arg0;
- (void)_loadResultsFromURL:(NSURL *)arg0;
- (NSString *)searchTerm;
- (void)dealloc;
- (NSDictionary *)results;
- (void)load;

@end
