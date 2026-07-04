/* Runtime dump - MovieHeaderDownloader
 * Image: /Applications/AppleTV.app/AppleTV
 */


@class ContentHeaderDownloader;
@interface MovieHeaderDownloader : NSObject
{
    unsigned int _trackId;
    struct vector<netflix::ContentProfile, std::allocator<netflix::ContentProfile> > _videoProfiles;
    struct vector<netflix::ContentProfile, std::allocator<netflix::ContentProfile> > _audioProfiles;
    struct vector<netflix::ContentProfile, std::allocator<netflix::ContentProfile> > _timedtextProfiles;
    unsigned int _nccpErrorCode;
    struct shared_ptr<netflix::nccp::AuthorizationResponse> _response;
    struct shared_ptr<netflix::ase::Manifest> _manifest;
    struct shared_ptr<netflix::HLSManager> _hlsManager;
    NSDate * _expirationDate;
    char _isStarted;
    int _movieId;
    int _movieDuration;
    NSMutableDictionary * _headerDownloaders;
    ContentHeaderDownloader * _cdnSelectionHeaderDownloader;
    NSCondition * _startCondition;
}

@property (nonatomic) int movieId;
@property (nonatomic) int movieDuration;
@property (retain, nonatomic) NSMutableDictionary * headerDownloaders;
@property (retain, nonatomic) ContentHeaderDownloader * cdnSelectionHeaderDownloader;
@property (retain, nonatomic) NSCondition * startCondition;
@property (nonatomic) char isStarted;

- (NSMutableDictionary *)headerDownloaders;
- (void)setCdnSelectionHeaderDownloader:(ContentHeaderDownloader *)arg0;
- (ContentHeaderDownloader *)cdnSelectionHeaderDownloader;
- (NSCondition *)startCondition;
- (char)loadupMetadata;
- (int)movieDuration;
- (id)setupContentHeaderDownloaderForCdnSelection:(struct shared_ptr<netflix::ase::ManifestStream> *)arg0 movieDuration:(struct shared_ptr<netflix::ase::ManifestStream>)arg1 trackName:(struct __shared_count<2>)arg2;
- (NSObject *)setupContentHeaderDownloaderForStream:(struct shared_ptr<netflix::ase::ManifestStream> *)arg0 movieDuration:(struct shared_ptr<netflix::ase::ManifestStream>)arg1 trackName:(struct __shared_count<2>)arg2;
- (char)waitForDownloadingWithTimeout:(double)arg0;
- (void)cancelAllDownloading;
- (void)storeTrackId:(unsigned int *)arg0 videoProfiles:(struct vector<netflix::ContentProfile, std::allocator<netflix::ContentProfile> > *)arg1 audioProfiles:(struct vector<netflix::ContentProfile, std::allocator<netflix::ContentProfile> >)arg2 timedtextProfiles:(struct vector<netflix::ContentProfile, std::allocator<netflix::ContentProfile> >)arg3;
- (void)retrieveTrackId:(unsigned int *)arg0 videoProfiles:(struct vector<netflix::ContentProfile, std::allocator<netflix::ContentProfile> > *)arg1 audioProfiles:(struct vector<netflix::ContentProfile, std::allocator<netflix::ContentProfile> >)arg2 timedtextProfiles:(struct vector<netflix::ContentProfile, std::allocator<netflix::ContentProfile> > *)arg3;
- (void)storeNccpErrorCode:(unsigned int *)arg0;
- (void)retrieveNccpErrorCode:(unsigned int *)arg0;
- (void)storeResponse:(struct shared_ptr<netflix::nccp::AuthorizationResponse> *)arg0;
- (void)retrieveResponse:(struct shared_ptr<netflix::nccp::AuthorizationResponse> *)arg0;
- (void)storeManifest:(struct shared_ptr<netflix::ase::Manifest> *)arg0;
- (void)retrieveManifest:(struct shared_ptr<netflix::ase::Manifest> *)arg0;
- (char)isManifestExpired;
- (char)waitForDownloadingToStart:(double)arg0;
- (char)hasDownloadingFailed;
- (char)downloadMovieHeaders:(struct shared_ptr<const netflix::ase::Manifest> *)arg0;
- (struct shared_ptr<netflix::HLSManager>)getHlsManager;
- (int)movieId;
- (void)setMovieId:(int)arg0;
- (void)setMovieDuration:(int)arg0;
- (void)setHeaderDownloaders:(NSMutableDictionary *)arg0;
- (void)setStartCondition:(NSCondition *)arg0;
- (void)dealloc;
- (MovieHeaderDownloader *)init;
- (void).cxx_construct;
- (void).cxx_destruct;
- (char)isStarted;
- (void)setIsStarted:(char)arg0;

@end
