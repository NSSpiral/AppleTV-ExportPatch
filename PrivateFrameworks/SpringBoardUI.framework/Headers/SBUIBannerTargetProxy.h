/* Runtime dump - SBUIBannerTargetProxy
 * Image: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

@interface SBUIBannerTargetProxy : NSObject <SBUIBannerTarget>
{
    void * _identifier;
    int _idiom;
    <SBUIBannerTargetImplementation> * _implementation;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly, nonatomic) void * bannerTargetIdentifier;
@property (readonly, nonatomic) int bannerTargetIdiom;

- (NSString *)description;
- (void)invalidate;
- (void *)bannerTargetIdentifier;
- (int)bannerTargetIdiom;
- (void)registerSource:(NSObject *)arg0;
- (void)unregisterSource:(NSObject *)arg0;
- (void)modallyPresentBannerWithContext:(SBUIBannerContext *)arg0;
- (char)isShowingModalBanner;
- (void)signalSource:(NSObject *)arg0;
- (SBUIBannerContext *)currentBannerContextForSource:(NSObject *)arg0;
- (void)dismissCurrentBannerContextForSource:(NSObject *)arg0;
- (void)cacheBannerForContext:(SBUIBannerContext *)arg0 withCompletion:(id /* block */)arg1;
- (void)removeCachedBannerForContext:(SBUIBannerContext *)arg0;
- (SBUIBannerTargetProxy *)initWithTargetImplementation:(id)arg0;

@end
