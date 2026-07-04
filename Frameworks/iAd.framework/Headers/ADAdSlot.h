/* Runtime dump - ADAdSlot
 * Image: /System/Library/Frameworks/iAd.framework/iAd
 */

@interface ADAdSlot : NSObject <ADBannerViewInternalDelegate, NSSecureCoding>
{
    <ADAdSlotDelegate> * _delegate;
    char _gatewayAdSlot;
    char _didBeginPlayback;
    char _didRequest;
    char _didReportFinish;
    NSString * _identifier;
    NSData * _stationData;
    NSData * _previousSongData;
    NSData * _followingSongData;
    NSMutableArray * _visuallyEngagedBanners;
    NSMutableArray * _visuallyDisengagedBanners;
    NSMutableArray * _pendingBannerLoads;
    id _completionHandler;
}

@property (weak, nonatomic) <ADAdSlotDelegate> * delegate;
@property (copy, nonatomic) NSString * identifier;
@property (nonatomic) char gatewayAdSlot;
@property (copy, nonatomic) NSData * stationData;
@property (copy, nonatomic) NSData * previousSongData;
@property (copy, nonatomic) NSData * followingSongData;
@property (readonly, retain, nonatomic) NSArray * ads;
@property (retain, nonatomic) NSMutableArray * visuallyEngagedBanners;
@property (retain, nonatomic) NSMutableArray * visuallyDisengagedBanners;
@property (nonatomic) char didBeginPlayback;
@property (retain, nonatomic) NSMutableArray * pendingBannerLoads;
@property (copy, nonatomic) id completionHandler;
@property (nonatomic) char didRequest;
@property (nonatomic) char didReportFinish;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (char)supportsSecureCoding;

- (void)dealloc;
- (ADAdSlot *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (void)setDelegate:(<ADAdSlotDelegate> *)arg0;
- (ADAdSlot *)init;
- (NSString *)description;
- (<ADAdSlotDelegate> *)delegate;
- (NSString *)identifier;
- (void)setIdentifier:(NSString *)arg0;
- (id /* block */)completionHandler;
- (void)setCompletionHandler:(id /* block */)arg0;
- (void)bannerViewDidLoadAd:(ADBannerView *)arg0;
- (void)bannerView:(ADBannerView *)arg0 didFailToReceiveAdWithError:(NSError *)arg1;
- (void)_visuallyEngagedDidChange;
- (char)gatewayAdSlot;
- (NSData *)stationData;
- (NSData *)previousSongData;
- (NSData *)followingSongData;
- (NSMutableArray *)pendingBannerLoads;
- (void)setPendingBannerLoads:(NSMutableArray *)arg0;
- (id)_bannersForAds:(id)arg0;
- (void)setVisuallyEngagedBanners:(NSMutableArray *)arg0;
- (NSMutableArray *)visuallyEngagedBanners;
- (void)setVisuallyDisengagedBanners:(NSMutableArray *)arg0;
- (NSMutableArray *)visuallyDisengagedBanners;
- (void)_considerInvokingCompletionHandler;
- (char)didBeginPlayback;
- (char)didReportFinish;
- (void)setDidReportFinish:(char)arg0;
- (void)loadVisuallyEngagedAds:(id)arg0 visuallyDisengagedAds:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)willBeginPlaybackOfAds:(id)arg0 forSpace:(int)arg1;
- (void)didFinishPlaybackOfAds:(id)arg0 skippedCount:(int)arg1;
- (NSArray *)ads;
- (void)setGatewayAdSlot:(char)arg0;
- (void)setStationData:(NSData *)arg0;
- (void)setPreviousSongData:(NSData *)arg0;
- (void)setFollowingSongData:(NSData *)arg0;
- (void)setDidBeginPlayback:(char)arg0;
- (char)didRequest;
- (void)setDidRequest:(char)arg0;

@end
