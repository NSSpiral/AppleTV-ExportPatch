/* Runtime dump - BRCFileProvider
 * Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCFileProvider : NSObject <NSFileProvider>
{
    BRCAccountSession * _session;
    NSURL * _url;
    NSOperationQueue * _queue;
    NSMutableDictionary * _presentersIDsByURL;
    NSObject<OS_dispatch_queue> * _privQueue;
}

@property (retain, nonatomic) BRCAccountSession * session;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly, copy) NSURL * _providedItemsURL;
@property (readonly) NSOperationQueue * _providedItemsOperationQueue;
@property (readonly, copy) NSString * _fileReactorID;

+ (NSObject *)prettyNameForFilePresenterID:(NSObject *)arg0;

- (void)suspend;
- (void)resume;
- (void).cxx_destruct;
- (BRCAccountSession *)session;
- (void)dumpToContext:(NSObject *)arg0;
- (void)setSession:(BRCAccountSession *)arg0;
- (BRCFileProvider *)initWithURL:(NSString *)arg0 name:(NSString *)arg1;
- (NSURL *)_keyForURL:(NSURL *)arg0 andID:(NSObject *)arg1;
- (void)_registerPresenterForItemAtURL:(NSURL *)arg0 key:(NSString *)arg1 session:(BRCAccountSession *)arg2;
- (void)_unregisterPresenterForItemAtURL:(NSURL *)arg0 key:(NSString *)arg1;
- (NSURL *)_keyForURL:(NSURL *)arg0;
- (void)_providedItemAtURL:(NSURL *)arg0 didLosePresenterWithID:(int)arg1;
- (void)_providedItemAtURL:(NSURL *)arg0 didGainPresenterWithID:(int)arg1;
- (void)_provideItemAtURL:(NSURL *)arg0 completionHandler:(id /* block */)arg1;
- (void)_providedItemAtURL:(NSURL *)arg0 withPresenterWithID:(NSObject *)arg1 didMoveToURL:(NSURL *)arg2;
- (NSURL *)_providedItemsURL;
- (NSOperationQueue *)_providedItemsOperationQueue;

@end
