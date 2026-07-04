/* Runtime dump - GEOExperimentConfiguration
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOExperimentConfiguration : NSObject <GEOExperimentServerProxyDelegate>
{
    <GEOExperimentServerProxy> * _serverProxy;
    GEOABExperimentResponse * _experimentsInfo;
    NSLock * _experimentsInfoLock;
    NSMutableArray * _experimentObservers;
    NSLock * _experimentObserversLock;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (void)setServerProxyClass:(Class)arg0;
+ (GEOExperimentConfiguration *)sharedConfiguration;

- (void)dealloc;
- (GEOExperimentConfiguration *)init;
- (void)serverProxy:(<GEOExperimentServerProxy> *)arg0 didChangeExperimentsInfo:(NSDictionary *)arg1;
- (NSURL *)experimentURLForURL:(NSURL *)arg0 type:(int)arg1 dispatcherRequestType:(int)arg2;
- (id)experimentAssignments;
- (void)_debug_forceUpdate;
- (NSDate *)_debug_configurationDate;
- (NSObject *)_debug_defaultQuerySubstringForType:(int)arg0 dispatcherRequestType:(int)arg1;
- (NSObject *)_debug_customQuerySubstringForType:(int)arg0 dispatcherRequestType:(int)arg1;
- (void)_debug_setCustomQuerySubstring:(id)arg0 forExperimentType:(int)arg1 dispatcherRequestType:(int)arg2;
- (void)_debug_forEachExperimentType:(NSObject *)arg0;
- (void)addExperimentObserver:(NSObject *)arg0 queue:(NSObject *)arg1;
- (void)removeExperimentObserver:(NSObject *)arg0;

@end
