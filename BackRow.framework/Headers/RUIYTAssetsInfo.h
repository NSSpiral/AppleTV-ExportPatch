/* Runtime dump - RUIYTAssetsInfo
 * Image: /Applications/AppleTV.app/AppleTV
 */

@interface RUIYTAssetsInfo : NSObject
{
    int _type;
    int _count;
    NSArray * _assets;
    NSDate * _timeStamp;
    int _totalQueryResults;
}

+ (NSObject *)infoFromVideosDocument:(NSObject *)arg0 timeStamp:(NSDate *)arg1;
+ (NSObject *)infoFromCollectionsDocument:(NSObject *)arg0 timeStamp:(NSDate *)arg1;
+ (NSObject *)infoWithType:(int)arg0 assets:(NSArray *)arg1 count:(int)arg2 totalQueryResults:(int)arg3 timeStamp:(NSDate *)arg4;

- (int)totalQueryResults;
- (RUIYTAssetsInfo *)initWithType:(int)arg0 assets:(NSArray *)arg1 count:(int)arg2 totalQueryResults:(int)arg3 timeStamp:(NSDate *)arg4;
- (void)setTotalQueryResults:(int)arg0;
- (int)count;
- (int)type;
- (void)setCount:(int)arg0;
- (void).cxx_destruct;
- (NSDate *)timeStamp;
- (void)setTimeStamp:(NSDate *)arg0;
- (NSArray *)assets;
- (void)setAssets:(NSArray *)arg0;

@end
