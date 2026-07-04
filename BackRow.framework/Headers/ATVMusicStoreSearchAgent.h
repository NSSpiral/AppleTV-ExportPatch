/* Runtime dump - ATVMusicStoreSearchAgent
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/ATVSearchAgent.h>

@class ATVSearchTerm, BRMerchant;
@interface ATVMusicStoreSearchAgent : ATVSearchAgent
{
    NSString * _baseURLString;
    BRMerchant * _merchant;
}

- (char)isNetworkDependent;
- (void)search:(NSString *)arg0 ignoringCache:(char)arg1;
- (char)showRecentSearches;
- (ATVMusicStoreSearchAgent *)initWithBaseURLString:(NSString *)arg0 merchant:(BRMerchant *)arg1;
- (void)_loadSearchURL:(NSURL *)arg0 forSearchTerm:(ATVSearchTerm *)arg1;
- (void)_searchComplete:(id)arg0 forSearchTerm:(ATVSearchTerm *)arg1;
- (void)_searchRequestProcessed:(id)arg0;
- (void)dealloc;

@end
