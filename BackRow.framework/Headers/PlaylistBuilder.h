/* Runtime dump - PlaylistBuilder
 * Image: /Applications/AppleTV.app/AppleTV
 */

@interface PlaylistBuilder : NSObject
{
    char _aborted;
    int _defaultVideoKbps;
    NSString * _dateTimeTag;
    NSNumber * _totalPlaylistTimeNumber;
}

@property (readonly, nonatomic) char aborted;
@property (readonly, nonatomic) int defaultVideoKbps;
@property (retain, nonatomic) NSString * dateTimeTag;
@property (retain, nonatomic) NSNumber * totalPlaylistTimeNumber;

+ (PlaylistBuilder *)sharedInstance;

- (char)aborted;
- (int)modifiedPeakBandwidth:(int)arg0;
- (void)abortContentHeaderDownloading;
- (char)buildMasterPlaylist:(id)arg0 withManifestPtr:(struct shared_ptr<const netflix::ase::Manifest> *)arg1;
- (int)defaultVideoKbps;
- (void)setDateTimeTag:(NSString *)arg0;
- (void)setTotalPlaylistTime:(double)arg0;
- (NSString *)dateTimeTag;
- (void)iframeContentError:(struct basic_string<char, std::char_traits<char>, std::allocator<char> >)arg0 dlId:(NSObject *)arg1;
- (void)subtitleContentError:(struct basic_string<char, std::char_traits<char>, std::allocator<char> >)arg0 dlId:(NSObject *)arg1;
- (id)buildDashPlaylist:(id)arg0;
- (id)buildDashIFramePlaylist:(id)arg0;
- (NSObject *)webVTTTrackNameForManifestTrack:(struct shared_ptr<netflix::ase::ManifestTrack> *)arg0;
- (id)codecsForProfile:(int)arg0;
- (char)downloadVideoContentHeaders:(struct vector<std::tr1::shared_ptr<netflix::ase::ManifestStream>, std::allocator<std::tr1::shared_ptr<netflix::ase::ManifestStream> > > *)arg0 movieDetails:(struct vector<std::tr1::shared_ptr<netflix::ase::ManifestStream>, std::allocator<std::tr1::shared_ptr<netflix::ase::ManifestStream> > >)arg1 reorderedStreams:(struct shared_ptr<netflix::ase::ManifestStream> *)arg2 andKbps:(struct shared_ptr<netflix::ase::ManifestStream> *)arg3 andDefaultAudioBps:(id)arg4;
- (id)buildWebVTTPlaylist:(id)arg0;
- (id)buildAVPlaylist:(id)arg0 movieDetails:(NSMutableDictionary *)arg1 mediaType:(NSObject *)arg2;
- (id)buildVideoIframePlaylist:(id)arg0;
- (id)buildVariantPlaylist:(id)arg0 forKey:(NSString *)arg1;
- (char)waitForDownloading:(id)arg0 withTimeout:(double)arg1;
- (NSNumber *)totalPlaylistTimeNumber;
- (void)setTotalPlaylistTimeNumber:(NSNumber *)arg0;
- (void)reset;
- (void).cxx_destruct;

@end
