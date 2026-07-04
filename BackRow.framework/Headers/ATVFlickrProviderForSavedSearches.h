/* Runtime dump - ATVFlickrProviderForSavedSearches
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/ATVFlickrProvider.h>
@interface ATVFlickrProviderForSavedSearches : ATVFlickrProvider
{
    NSMutableArray * _savedSearchCollections;
}

+ (ATVFlickrProviderForSavedSearches *)providerOfSavedSearchCollections;

- (NSString *)hashForDataAtIndex:(long)arg0;
- (char)_handlesObject:(NSObject *)arg0;
- (void)_newSavedSearchToAddCollectionFor:(id)arg0;
- (void)_savedSearchTermRemoved:(id)arg0;
- (NSData *)_data;
- (void)dealloc;
- (ATVFlickrProviderForSavedSearches *)init;

@end
