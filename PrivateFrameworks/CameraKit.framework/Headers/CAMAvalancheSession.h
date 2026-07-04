/* Runtime dump - CAMAvalancheSession
 * Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@interface CAMAvalancheSession : NSObject
{
    int _type;
    <CAMAvalancheSessionDelegate> * _delegate;
    int _state;
    NSString * _uuid;
    unsigned int _numberOfPhotos;
    CAMInflightAsset * _possibleAvalancheAsset;
    id _completionHandler;
    NSMutableDictionary * __assets;
    NSDate * __expirationDate;
    NSObject<OS_dispatch_source> * __expirationTimer;
    NSObject<OS_dispatch_queue> * __expirationQueue;
    CIBurstImageSet * __burstImageSet;
}

@property (readonly, nonatomic) int type;
@property (nonatomic) <CAMAvalancheSessionDelegate> * delegate;
@property (nonatomic) int state;
@property (readonly, copy, nonatomic) NSString * uuid;
@property (readonly, nonatomic) unsigned int numberOfPhotos;
@property (retain, nonatomic) CAMInflightAsset * possibleAvalancheAsset;
@property (copy, nonatomic) id completionHandler;
@property (readonly, nonatomic) NSMutableDictionary * _assets;
@property (retain, nonatomic) NSDate * _expirationDate;
@property (readonly, nonatomic) NSObject<OS_dispatch_source> * _expirationTimer;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> * _expirationQueue;
@property (readonly, nonatomic) CIBurstImageSet * _burstImageSet;

- (void)dealloc;
- (void)setDelegate:(<CAMAvalancheSessionDelegate> *)arg0;
- (CAMAvalancheSession *)init;
- (<CAMAvalancheSessionDelegate> *)delegate;
- (int)state;
- (int)type;
- (CAMAvalancheSession *)initWithType:(int)arg0;
- (id /* block */)completionHandler;
- (void)_didTransitionToState:(int)arg0;
- (void)_setState:(int)arg0;
- (void).cxx_destruct;
- (void)setCompletionHandler:(id /* block */)arg0;
- (NSString *)uuid;
- (void)finalizeWithAnalysis:(char)arg0;
- (void)_teardownExpirationTimer;
- (NSString *)allAssetIdentifiers;
- (id)bestAssetIndentifiers;
- (NSString *)stackAssetIdentifier;
- (id)assetsWithUUIDs:(id)arg0;
- (void)_transitionToState:(int)arg0;
- (void)_expirationTimerFired;
- (void)_setPossibleAvalancheAsset:(NSSet *)arg0;
- (CIBurstImageSet *)_burstImageSet;
- (char)_ensureValidStateChange:(int)arg0;
- (char)extend;
- (void)addAssetForAnalysis:(id)arg0 withIOSurface:(struct __IOSurface *)arg1 metadata:(NSDictionary *)arg2 completionHandler:(id /* block */)arg3;
- (unsigned int)numberOfPhotos;
- (CAMInflightAsset *)possibleAvalancheAsset;
- (NSDate *)_expirationDate;
- (NSObject<OS_dispatch_source> *)_expirationTimer;
- (NSObject<OS_dispatch_queue> *)_expirationQueue;
- (void)_setupExpirationTimer;
- (id)assetWithUUID:(id)arg0;
- (NSMutableDictionary *)_assets;
- (void)_setExpirationDate:(NSDate *)arg0;

@end
