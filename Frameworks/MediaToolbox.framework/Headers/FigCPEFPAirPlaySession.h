/* Runtime dump - FigCPEFPAirPlaySession
 * Image: /System/Library/Frameworks/MediaToolbox.framework/MediaToolbox
 */

@interface FigCPEFPAirPlaySession : NSObject
{
    char _invalid;
    unsigned long _fairPlayContext;
    NSDictionary * _protectionInfo;
    NSDictionary * _contentInfo;
    MediaControlClient * _mediaControlClient;
    NSString * _mediaControlUUID;
    unsigned long _vodkaVersion;
    struct FPStreamOpaque_ * _fairPlaySession;
    NSObject<OS_dispatch_queue> * _serializationQueue;
}

- (FigCPEFPAirPlaySession *)initWithFairPlayContext:(unsigned long)arg0 protectionInfo:(NSDictionary *)arg1 routeInfo:(NSDictionary *)arg2 mediaControlClient:(MediaControlClient *)arg3 mediaControlUUID:(NSString *)arg4;
- (FigCPEFPAirPlaySession *)initWithFairPlayContext:(unsigned long)arg0 contentInfo:(NSDictionary *)arg1 routeInfo:(NSDictionary *)arg2 mediaControlClient:(MediaControlClient *)arg3 mediaControlUUID:(NSString *)arg4;
- (void)beginSessionWithCompletionQueue:(NSObject<OS_dispatch_queue> *)arg0 completionHandler:(id /* block */)arg1;
- (FigCPEFPAirPlaySession *)initWithFairPlayContext:(unsigned long)arg0 routeInfo:(NSDictionary *)arg1 mediaControlClient:(MediaControlClient *)arg2 mediaControlUUID:(NSString *)arg3;
- (NSError *)createPicRequestWithError:(id *)arg0;
- (id)sicWithPic:(id)arg0;
- (id)legacySinfs;
- (NSURLResponse *)mediaControlParamsWithStoreResponse:(NSURLResponse *)arg0;
- (void)dealloc;
- (void)endSession;
- (void)finalize;

@end
