/* Runtime dump - ATVCupidMyPSImageLoadTask
 * Image: /Applications/AppleTV.app/AppleTV
 */

@interface ATVCupidMyPSImageLoadTask : ATVBackgroundTask
{
    char _shouldPerformLoad;
    char _isLoading;
    <ATVCupidMyPSImageLoadTaskDelegate> * _delegate;
    unsigned int _loadID;
}

@property (nonatomic) char shouldPerformLoad;
@property (nonatomic) char isLoading;
@property (weak, nonatomic) <ATVCupidMyPSImageLoadTaskDelegate> * delegate;
@property (nonatomic) unsigned int loadID;

- (char)shouldPerformLoad;
- (void)setShouldPerformLoad:(char)arg0;
- (unsigned int)loadID;
- (void)setLoadID:(unsigned int)arg0;
- (void)setDelegate:(<ATVCupidMyPSImageLoadTaskDelegate> *)arg0;
- (ATVCupidMyPSImageLoadTask *)init;
- (<ATVCupidMyPSImageLoadTaskDelegate> *)delegate;
- (void)stop;
- (char)perform;
- (char)isLoading;
- (void).cxx_destruct;
- (void)setIsLoading:(char)arg0;

@end
