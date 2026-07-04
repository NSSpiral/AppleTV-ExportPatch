/* Runtime dump - ATVFeedEvaluator
 * Image: /Applications/AppleTV.app/AppleTV
 */

@interface ATVFeedEvaluator : NSObject
{
    NSDateFormatter * _zuluDateFormatter;
    NSNumberFormatter * _numberFormatter;
    NSMutableDictionary * _dateFormatterCache;
    <ATVReadWriteFeedResource> * _feedResource;
}

@property (retain) <ATVReadWriteFeedResource> * feedResource;

+ (NSDictionary *)evaluatePlist:(id)arg0 withFeedResource:(<ATVReadWriteFeedResource> *)arg1;

- (void)setFeedResource:(<ATVReadWriteFeedResource> *)arg0;
- (NSObject *)_evaluateObject:(NSObject *)arg0 withRecursionLevel:(int)arg1;
- (<ATVReadWriteFeedResource> *)feedResource;
- (NSString *)_evaluateFunctionString:(NSString *)arg0;
- (NSArray *)_evaluateArguments:(NSDictionary *)arg0 commandForErrorLogging:(id)arg1;
- (id)_evaluateStoreCoverArts:(id)arg0;
- (id)_ifElse:(id)arg0;
- (id)_lookup:(BRCPathToItemLookup *)arg0;
- (id)_localtime:(id)arg0;
- (NSObject *)_setPreference:(NSObject *)arg0;
- (id)_removePreferences:(ATVPreferences *)arg0;
- (void)dealloc;
- (ATVFeedEvaluator *)init;

@end
