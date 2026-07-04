/* Runtime dump - WLDPlaybackReporter
 * Image: /Applications/AppleTV.app/AppleTV
 */


@protocol WLDPlaybackReporterProtocol;

@class WLKPlaybackSummary;
@interface WLDPlaybackReporter : NSObject <WLDPlaybackReporterProtocol>

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (char)_isNowPlayingEnabled;
+ (WLDPlaybackReporter *)_cachedNotFoundIdentifiers;
+ (NSString *)_cachedMetadataByIdentifier;

- (void)reportPlayback:(WLKPlaybackSummary *)arg0 completion:(id /* block */)arg1;
- (void)_cleanupWithSuccess:(char)arg0 shouldRetry:(char)arg1 completion:(id /* block */)arg2;
- (void)_reportPlayEvent:(NSObject *)arg0 completion:(id /* block */)arg1;

@end
