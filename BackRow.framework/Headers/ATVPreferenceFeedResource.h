/* Runtime dump - ATVPreferenceFeedResource
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/ATVDictionaryFeedResource.h>
@interface ATVPreferenceFeedResource : ATVDictionaryFeedResource
{
    NSString * _path;
    char _dirty;
    unsigned int _format;
    NSObject<OS_dispatch_queue> * _prefsWriteQueue;
}

- (void)setFeedResource:(<ATVReadWriteFeedResource> *)arg0 named:(NSString *)arg1;
- (void)clearFeedResources;
- (void)_savePrefs;
- (void)dealloc;
- (ATVPreferenceFeedResource *)initWithPath:(NSString *)arg0;

@end
