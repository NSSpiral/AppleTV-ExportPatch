/* Runtime dump - GEORequester
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEORequester : PBRequester
{
    char _disableReplay;
    NSThread * _thread;
    char _usePersistentConnection;
    char _useBackgroundConnection;
    NSString * _debugRequestName;
}

@property char disableReplay;
@property (retain, nonatomic) NSString * debugRequestName;

+ (GEORequester *)_logRequestResponseDirectory;
+ (void)setLogRequestResponseDirectory:(id)arg0;
+ (void)enablePersistentConnection;
+ (void)stopAllRequests;
+ (void)replayRequests;
+ (void)setAppID:(NSObject *)arg0;
+ (void)setOSVersion:(NSString *)arg0;

- (void)dealloc;
- (void)start;
- (GEORequester *)initWithURL:(NSString *)arg0 andDelegate:(NSObject *)arg1 useBackgroundConnection:(char)arg2;
- (void)setDebugRequestName:(NSString *)arg0;
- (GEORequester *)initWithURL:(NSString *)arg0 andDelegate:(NSObject *)arg1;
- (void)_applicationDidStopAllRequests:(id)arg0;
- (void)_applicationWantsToReplayRequests:(id)arg0;
- (void)_handleSuspendOnThread;
- (char)disableReplay;
- (void)_handleResumeOnThread;
- (void)startWithConnectionProperties:(NSDictionary *)arg0;
- (NSString *)debugRequestName;
- (NSString *)logRequestToFile;
- (NSString *)logResponseToFile;
- (id)requestPreamble;
- (struct _CFURLRequest *)newCFMutableURLRequestWithURL:(NSString *)arg0;
- (NSObject *)persistentConnectionSession;
- (NSURLRequest *)newConnectionWithCFURLRequest:(struct _CFURLRequest *)arg0 delegate:(<PBRequesterDelegate> *)arg1;
- (void)_logRequestsIfNecessary:(id)arg0;
- (void)_logResponsesIfNecessary:(id)arg0;
- (void)_logErrorIfNecessary:(id)arg0;
- (void)setDisableReplay:(char)arg0;

@end
