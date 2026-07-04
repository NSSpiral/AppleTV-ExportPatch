/* Runtime dump - DownloaderQueue
 * Image: /Applications/AppleTV.app/AppleTV
 */

@interface DownloaderQueue : NSObject
{
    int _count;
    int _capacity;
    NSMutableArray * _array;
    NSString * _networkType;
    NSString * _ssid;
}

@property (nonatomic) int count;
@property (nonatomic) int capacity;
@property (retain, nonatomic) NSMutableArray * array;
@property (retain, nonatomic) NSString * networkType;
@property (retain, nonatomic) NSString * ssid;

- (id)find:(unsigned int)arg0;
- (char)assignNetworkType:(NSObject *)arg0 andSsid:(id)arg1;
- (void)setCapacity:(int)arg0;
- (NSString *)networkType;
- (int)count;
- (DownloaderQueue *)init;
- (NSMutableArray *)array;
- (void)setCount:(int)arg0;
- (void)setArray:(NSMutableArray *)arg0;
- (void)clear;
- (void).cxx_destruct;
- (NSString *)ssid;
- (void)setSsid:(NSString *)arg0;
- (NSOperationQueue *)enqueue:(id)arg0;
- (NSOperationQueue *)dequeue;
- (int)capacity;
- (void)remove:(unsigned int)arg0;
- (void)setNetworkType:(NSString *)arg0;

@end
