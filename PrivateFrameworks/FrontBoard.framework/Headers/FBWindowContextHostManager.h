/* Runtime dump - FBWindowContextHostManager
 * Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface FBWindowContextHostManager : NSObject <FBWindowContextHostViewDelegate>
{
    FBWindowContextManager * _contextManager;
    FBScene * _scene;
    NSString * _identifier;
    UIColor * _defaultBackgroundColorWhileHosting;
    UIColor * _defaultBackgroundColorWhileNotHosting;
    FBWindowContextHostView * _hostView;
    char _suspended;
    char _invalidated;
    FBOrderedRequesters * _hostRequesters;
    NSMutableDictionary * _hostRequesterInfo;
    NSHashTable * _observers;
    <FBWindowContextHostManagerDelegate> * _delegate;
    struct ? _flags;
}

@property (nonatomic) <FBWindowContextHostManagerDelegate> * delegate;
@property (readonly, nonatomic) FBScene * scene;
@property (copy, nonatomic) NSString * identifier;
@property (copy, nonatomic) UIColor * defaultBackgroundColorWhileHosting;
@property (copy, nonatomic) UIColor * defaultBackgroundColorWhileNotHosting;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (FBScene *)scene;
- (void)dealloc;
- (void)setDelegate:(<FBWindowContextHostManagerDelegate> *)arg0;
- (NSString *)description;
- (<FBWindowContextHostManagerDelegate> *)delegate;
- (void)invalidate;
- (NSString *)identifier;
- (void)removeObserver:(NSObject *)arg0;
- (void)setIdentifier:(NSString *)arg0;
- (void)addObserver:(NSObject *)arg0;
- (void)windowContextHostViewHostedContextsDidChange:(NSDictionary *)arg0;
- (id)_realContextHostViewWhichIReallyNeedToAccessAndIKnowWhatImDoingISwear;
- (UIColor *)defaultBackgroundColorWhileHosting;
- (UIColor *)defaultBackgroundColorWhileNotHosting;
- (void)enableHostingForRequester:(id)arg0 priority:(int)arg1;
- (id)hostViewForRequester:(id)arg0 appearanceStyle:(unsigned int)arg1;
- (void)disableHostingForRequester:(id)arg0;
- (void)suspendContextHosting;
- (void)_updateHostViewFrameForRequester:(id)arg0;
- (id)hostViewForRequester:(id)arg0;
- (id)_hostViewForRequester:(id)arg0;
- (id)_hostViewForRequester:(id)arg0 enableAndOrderFront:(char)arg1;
- (id)_overrideRequesterIfNecessary:(id)arg0;
- (id)_infoForRequester:(id)arg0;
- (void)_removeRequesterInfo:(NSDictionary *)arg0;
- (void)_applyRequesterInfo:(NSDictionary *)arg0;
- (struct CGImage *)_snapshotCGImageRefForFrame:(struct CGRect)arg0 excludingContexts:(struct CGSize)arg1 opaque:(char)arg2 outTransform:(NSObject *)arg3 outIOSurfaceRef:(char)arg4;
- (struct CGImage *)snapshotCGImageRefForFrame:(struct CGRect)arg0 excludingContexts:(struct CGSize)arg1 opaque:(char)arg2 outTransform:(NSObject *)arg3;
- (unsigned int)_populateContextIDs:(unsigned int *)arg0 forSnapshotExcludingContexts:(id)arg1;
- (struct __IOSurface *)snapshotIOSurfaceForFrame:(struct CGRect)arg0 excludingContexts:(struct CGSize)arg1 opaque:(char)arg2 outTransform:(NSObject *)arg3;
- (void)enableHostingForRequester:(id)arg0 orderFront:(char)arg1;
- (FBWindowContextHostManager *)initWithContextManager:(FBWindowContextManager *)arg0 scene:(FBScene *)arg1;
- (void)setDefaultBackgroundColorWhileHosting:(UIColor *)arg0;
- (void)setDefaultBackgroundColorWhileNotHosting:(UIColor *)arg0;
- (unsigned int)contextCount;
- (id)hostViewForRequester:(id)arg0 enableAndOrderFront:(char)arg1;
- (id)hostViewForRequester:(id)arg0 enableAndOrderFront:(char)arg1 appearanceStyle:(unsigned int)arg2;
- (void)resumeContextHosting;
- (void)orderRequesterFront:(id)arg0;
- (id)visibleContexts;
- (void)setContextId:(unsigned int)arg0 hidden:(char)arg1 forRequester:(GEOFeatureSpecificSimpleTileRequester *)arg2;
- (NSObject *)snapshotViewWithFrame:(struct CGRect)arg0 excludingContexts:(struct CGSize)arg1 opaque:(char)arg2;
- (NSObject *)snapshotUIImageForFrame:(struct CGRect)arg0 excludingContexts:(struct CGSize)arg1 opaque:(char)arg2 outTransform:(NSObject *)arg3;
- (void)_notePropertiesSetOnRealContextHostViewWhichIReallyNeedToChangeAndIKnowWhatImDoingISwear:(id)arg0 originalProperties:(NSDictionary *)arg1 forRequester:(GEOFeatureSpecificSimpleTileRequester *)arg2;

@end
