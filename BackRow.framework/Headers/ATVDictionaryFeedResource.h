/* Runtime dump - ATVDictionaryFeedResource
 * Image: /Applications/AppleTV.app/AppleTV
 */


@protocol ATVReadWriteFeedResource;
@interface ATVDictionaryFeedResource : NSObject <ATVReadWriteFeedResource>
{
    NSMutableDictionary * _prefs;
    NSLock * _prefsLock;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)setFeedResource:(<ATVReadWriteFeedResource> *)arg0 named:(NSString *)arg1;
- (id)feedResourceNamed:(NSString *)arg0;
- (void)clearFeedResources;
- (void)dealloc;
- (ATVDictionaryFeedResource *)init;

@end
