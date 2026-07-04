/* Runtime dump - RUIYTListCacheItem
 * Image: /Applications/AppleTV.app/AppleTV
 */

@interface RUIYTListCacheItem : NSObject
{
    NSDate * _creationDate;
    id _results;
    double _timeInterval;
}

@property (retain) id results;
@property double timeInterval;

- (RUIYTListCacheItem *)init;
- (NSArray *)results;
- (double)timeInterval;
- (void)setTimeInterval:(double)arg0;
- (void).cxx_destruct;
- (void)setResults:(NSArray *)arg0;
- (char)hasExpired;

@end
