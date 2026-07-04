/* Runtime dump - ATVCupidMediaURLCacheRecord
 * Image: /Applications/AppleTV.app/AppleTV
 */

@interface ATVCupidMediaURLCacheRecord : NSObject
{
    NSURL * _url;
    NSDate * _expiration;
}

@property (retain, nonatomic) NSURL * url;
@property (retain, nonatomic) NSDate * expiration;

- (NSURL *)url;
- (void)setUrl:(NSURL *)arg0;
- (void).cxx_destruct;
- (NSDate *)expiration;
- (void)setExpiration:(NSDate *)arg0;

@end
