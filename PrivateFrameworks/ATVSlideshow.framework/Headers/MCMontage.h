/* Runtime dump - MCMontage
 * Image: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

@interface MCMontage : NSObject
{
    NSDictionary * mImprintWhileLoading;
    NSMutableDictionary * mVideoAssetsForFilePaths;
    NSMutableDictionary * mVideoAssetsForObjectIDs;
    NSMutableDictionary * mAudioAssetsForFilePaths;
    NSMutableDictionary * mAudioAssetsForObjectIDs;
    NSMutableDictionary * mContainersForObjectIDs;
    NSRecursiveLock * mLock;
    MCPlug * mRootPlug;
    NSString * mBasePath;
    NSArray * mLayouts;
    double mFadeInDuration;
    double mFadeOutDuration;
    double mAudioFadeOutDuration;
    unsigned long long mUUIDSeed;
}

@property (readonly, nonatomic) MCPlug * rootPlug;
@property (nonatomic) double fadeInDuration;
@property (nonatomic) double fadeOutDuration;
@property (nonatomic) double audioFadeOutDuration;
@property (copy) NSString * basePath;
@property (readonly, nonatomic) unsigned long long uuidSeed;
@property (retain) NSArray * layouts;

- (void)dealloc;
- (MCMontage *)init;
- (void)lock;
- (void)unlock;
- (NSData *)data;
- (double)fadeOutDuration;
- (void)setFadeInDuration:(double)arg0;
- (void)setFadeOutDuration:(double)arg0;
- (double)fadeInDuration;
- (NSObject *)createParallelizerContainer;
- (NSString *)audioAssetForFileAtPath:(NSString *)arg0;
- (void)setAudioFadeOutDuration:(double)arg0;
- (MCMontage *)initFromScratch;
- (MCPlug *)rootPlug;
- (void)demolish;
- (double)audioFadeOutDuration;
- (NSString *)videoAssetForFileAtPath:(NSString *)arg0;
- (NSObject *)createEffectContainer;
- (NSObject *)createNavigatorContainer;
- (NSObject *)containerForObjectID:(NSObject *)arg0;
- (NSObject *)createSerializerContainer;
- (NSArray *)layouts;
- (void)forgetAboutContainer:(NSObject *)arg0;
- (NSObject *)videoAssetForObjectID:(NSObject *)arg0;
- (NSObject *)audioAssetForObjectID:(NSObject *)arg0;
- (MCMontage *)initWithData:(NSData *)arg0 error:(id *)arg1;
- (unsigned long long)uuidSeed;
- (NSObject *)assetForObjectID:(NSObject *)arg0;
- (NSArray *)videoAssets;
- (NSArray *)audioAssets;
- (void)registerContainer:(NSObject *)arg0;
- (NSString *)basePath;
- (void)setBasePath:(NSString *)arg0;
- (void)setLayouts:(NSArray *)arg0;
- (NSDictionary *)imprint;
- (NSArray *)assets;

@end
