/* Runtime dump - GEOExperimentServerRemoteProxy
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOExperimentServerRemoteProxy : NSObject <GEOExperimentServerProxy>
{
    <GEOExperimentServerProxyDelegate> * _delegate;
    GEOABExperimentResponse * _experimentsInfo;
    NSLock * _experimentsInfoLock;
    int _experimentsChangedToken;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (nonatomic) <GEOExperimentServerProxyDelegate> * delegate;
@property (readonly, nonatomic) GEOABExperimentResponse * experimentsInfo;

- (void)dealloc;
- (void)setDelegate:(<GEOExperimentServerProxyDelegate> *)arg0;
- (<GEOExperimentServerProxyDelegate> *)delegate;
- (void)forceUpdate;
- (void)_debug_setQuerySubstring:(id)arg0 forExperimentType:(int)arg1 dispatcherRequestType:(int)arg2;
- (GEOABExperimentResponse *)experimentsInfo;
- (GEOExperimentServerRemoteProxy *)initWithDelegate:(<GEOExperimentServerProxyDelegate> *)arg0;

@end
