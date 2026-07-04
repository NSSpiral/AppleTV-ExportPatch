/* Runtime dump - RadioGetTracksRequest
 * Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@interface RadioGetTracksRequest : RadioRequest
{
    unsigned long long _globalVersion;
    char _includeCleanTracksOnly;
    unsigned int _numberOfTracks;
    SSURLConnectionRequest * _request;
    char _shouldIncludeStationInResponse;
    NSString * _stationHash;
    long long _stationID;
    NSString * _stationStringID;
    char _shouldIncludeAsset;
    char _skipPromptForSeamlessPlayback;
    NSNumber * _accountUniqueIdentifier;
    NSDictionary * _additionalRequestParameters;
    NSData * _heartbeatTokenData;
    SSVPlaybackLease * _playbackLease;
    RadioPlayEventCollection * _playEventCollection;
    NSArray * _playActivityFeedEvents;
    RadioPlaybackContext * _playbackContext;
    int _reasonType;
    RadioStationMatchContext * _stationMatchContext;
}

@property (readonly, copy, nonatomic) NSNumber * accountUniqueIdentifier;
@property (copy, nonatomic) NSDictionary * additionalRequestParameters;
@property (nonatomic) unsigned int numberOfTracks;
@property (copy, nonatomic) NSData * heartbeatTokenData;
@property (nonatomic) char includeCleanTracksOnly;
@property (retain, nonatomic) SSVPlaybackLease * playbackLease;
@property (copy, nonatomic) RadioPlayEventCollection * playEventCollection;
@property (copy, nonatomic) NSArray * playActivityFeedEvents;
@property (copy, nonatomic) RadioPlaybackContext * playbackContext;
@property (nonatomic) int reasonType;
@property (nonatomic) char shouldIncludeAsset;
@property (nonatomic) char shouldIncludeStationInResponse;
@property (nonatomic) char skipPromptForSeamlessPlayback;
@property (retain, nonatomic) RadioStationMatchContext * stationMatchContext;

- (SSVPlaybackLease *)playbackLease;
- (void)setIncludeCleanTracksOnly:(char)arg0;
- (void)cancel;
- (RadioGetTracksRequest *)init;
- (void).cxx_destruct;
- (void)startWithCompletionHandler:(id /* block */)arg0;
- (RadioGetTracksRequest *)initWithGlobalVersion:(unsigned long long)arg0;
- (char)includeCleanTracksOnly;
- (id)_playbackContextForStation:(id)arg0;
- (char)skipPromptForSeamlessPlayback;
- (RadioGetTracksRequest *)initWithStation:(ATVRadioStation *)arg0 globalVersion:(unsigned long long)arg1;
- (RadioGetTracksRequest *)initWithStationStringID:(NSString *)arg0 globalVersion:(unsigned long long)arg1;
- (NSDictionary *)additionalRequestParameters;
- (void)setAdditionalRequestParameters:(NSDictionary *)arg0;
- (unsigned int)numberOfTracks;
- (void)setNumberOfTracks:(unsigned int)arg0;
- (NSData *)heartbeatTokenData;
- (void)setHeartbeatTokenData:(NSData *)arg0;
- (void)setPlaybackLease:(SSVPlaybackLease *)arg0;
- (RadioPlayEventCollection *)playEventCollection;
- (void)setPlayEventCollection:(RadioPlayEventCollection *)arg0;
- (NSArray *)playActivityFeedEvents;
- (void)setPlayActivityFeedEvents:(NSArray *)arg0;
- (RadioPlaybackContext *)playbackContext;
- (void)setPlaybackContext:(RadioPlaybackContext *)arg0;
- (int)reasonType;
- (void)setReasonType:(int)arg0;
- (char)shouldIncludeAsset;
- (void)setShouldIncludeAsset:(char)arg0;
- (char)shouldIncludeStationInResponse;
- (void)setShouldIncludeStationInResponse:(char)arg0;
- (void)setSkipPromptForSeamlessPlayback:(char)arg0;
- (RadioStationMatchContext *)stationMatchContext;
- (void)setStationMatchContext:(RadioStationMatchContext *)arg0;
- (NSNumber *)accountUniqueIdentifier;

@end
