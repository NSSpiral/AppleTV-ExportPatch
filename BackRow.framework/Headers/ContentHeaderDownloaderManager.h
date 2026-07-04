/* Runtime dump - ContentHeaderDownloaderManager
 * Image: /Applications/AppleTV.app/AppleTV
 */


@class DownloaderQueue, MovieHeaderDownloader;
@interface ContentHeaderDownloaderManager : NSObject
{
    char _isDownloadingForPlayback;
    DownloaderQueue * _movieHeaderCache;
    int _playingMovieId;
    MovieHeaderDownloader * _movieHeaderDownloaderInPlayback;
    NSDate * _timingStartDownloading;
    NSDate * _timingFinishDownloading;
    NSDate * _timingReturnMasterPlaylist;
    NSMutableDictionary * _movieDurations;
}

@property (retain, nonatomic) DownloaderQueue * movieHeaderCache;
@property (nonatomic) int playingMovieId;
@property (nonatomic) char isDownloadingForPlayback;
@property (retain, nonatomic) MovieHeaderDownloader * movieHeaderDownloaderInPlayback;
@property (retain, nonatomic) NSDate * timingStartDownloading;
@property (retain, nonatomic) NSDate * timingFinishDownloading;
@property (retain, nonatomic) NSDate * timingReturnMasterPlaylist;
@property (retain, nonatomic) NSMutableDictionary * movieDurations;

+ (ContentHeaderDownloaderManager *)sharedInstance;

- (DownloaderQueue *)movieHeaderCache;
- (void)clearManifestCacheForMovieId:(unsigned int)arg0;
- (char)shouldAbortDownload:(unsigned int)arg0;
- (NSMutableDictionary *)movieDurations;
- (void)getDownloadingState:(char *)arg0 andPlayingMovieId:(unsigned int *)arg1;
- (char)isDownloadingForPlayback;
- (int)playingMovieId;
- (void)setIsDownloadingForPlayback:(char)arg0;
- (void)setPlayingMovieId:(int)arg0;
- (MovieHeaderDownloader *)movieHeaderDownloaderInPlayback;
- (void)setTimingStartDownloading:(NSDate *)arg0;
- (void)setTimingFinishDownloading:(NSDate *)arg0;
- (void)setTimingReturnMasterPlaylist:(NSDate *)arg0;
- (void)storeTrackId:(unsigned int *)arg0 videoProfiles:(struct vector<netflix::ContentProfile, std::allocator<netflix::ContentProfile> > *)arg1 audioProfiles:(struct vector<netflix::ContentProfile, std::allocator<netflix::ContentProfile> >)arg2 timedtextProfiles:(struct vector<netflix::ContentProfile, std::allocator<netflix::ContentProfile> >)arg3 forMovieId:(struct vector<netflix::ContentProfile, std::allocator<netflix::ContentProfile> > *)arg4;
- (void)retrieveTrackId:(unsigned int *)arg0 videoProfiles:(struct vector<netflix::ContentProfile, std::allocator<netflix::ContentProfile> > *)arg1 audioProfiles:(struct vector<netflix::ContentProfile, std::allocator<netflix::ContentProfile> >)arg2 timedtextProfiles:(struct vector<netflix::ContentProfile, std::allocator<netflix::ContentProfile> > *)arg3 forMovieId:(NSObject *)arg4;
- (void)storeNccpErrorCode:(unsigned int *)arg0 forMovieId:(unsigned int)arg1;
- (void)retrieveNccpErrorCode:(unsigned int *)arg0 forMovieId:(unsigned int)arg1;
- (void)storeResponse:(struct shared_ptr<netflix::nccp::AuthorizationResponse> *)arg0 forMovieId:(struct __shared_count<2>)arg1;
- (void)retrieveResponse:(struct shared_ptr<netflix::nccp::AuthorizationResponse> *)arg0 forMovieId:(struct __shared_count<2>)arg1;
- (NSObject *)findMovieHeaderDownloaderForMovieId:(unsigned int)arg0;
- (char)findManfiest:(struct shared_ptr<netflix::ase::Manifest> *)arg0 forMovie:(struct __shared_count<2>)arg1;
- (char)downloadContentHeaderUsingManifest:(struct shared_ptr<netflix::ase::Manifest> *)arg0 forMvoieId:(struct shared_ptr<netflix::ase::Manifest>)arg1;
- (void)setDownloadingState:(char)arg0 andPlayingMovieId:(unsigned int)arg1;
- (void)clearManifestCache;
- (struct shared_ptr<netflix::HLSManager>)getHlsManagerForCurrentMovie;
- (void)setDuration:(unsigned int)arg0 forMovieId:(unsigned int)arg1;
- (void)resetTimingValues;
- (void)getMticketForMovieInPlayback:(struct shared_ptr<const netflix::nccp::MTicketEntity> *)arg0;
- (char)waitForPlaybackMovieToFinishDownload:(double)arg0;
- (void)setMovieHeaderCache:(DownloaderQueue *)arg0;
- (void)setMovieHeaderDownloaderInPlayback:(MovieHeaderDownloader *)arg0;
- (NSDate *)timingStartDownloading;
- (NSDate *)timingFinishDownloading;
- (NSDate *)timingReturnMasterPlaylist;
- (void)setMovieDurations:(NSMutableDictionary *)arg0;
- (ContentHeaderDownloaderManager *)init;
- (void).cxx_destruct;

@end
