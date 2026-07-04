/* Runtime dump - BRCNonLocalVersionsSender
 * Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCNonLocalVersionsSender : _BRCOperation <BRNonLocalVersionSending, BRCOperationSubclass>
{
    <BRNonLocalVersionReceiving> * _receiver;
    BRCItemID * _itemID;
    BRCStatInfo * _st;
    NSString * _currentEtag;
    NSString * _storagePathPrefix;
    struct NSObject * _storage;
    BRCXPCClient * _client;
    BRCServerZone * _serverZone;
    CKRecordID * _recordID;
    id _reply;
    char _includeCachedVersions;
    NSURL * _logicalURL;
    NSURL * _physicalURL;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly, nonatomic) NSURL * logicalURL;
@property (readonly, nonatomic) NSURL * physicalURL;
@property (nonatomic) char includeCachedVersions;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (BRCNonLocalVersionsSender *)senderWithLookup:(id)arg0 client:(BRCXPCClient *)arg1 XPCReceiver:(NSObject *)arg2 error:(id *)arg3;

- (void)invalidate;
- (void)main;
- (void).cxx_destruct;
- (void)finishWithResult:(NSObject *)arg0 error:(NSError *)arg1;
- (char)shouldRetryForError:(NSError *)arg0;
- (void)setIncludeCachedVersions:(char)arg0;
- (NSURL *)physicalURL;
- (BRCNonLocalVersionsSender *)initWithDocument:(NSObject *)arg0 serverItem:(BRCServerItem *)arg1 relpath:(BRCRelativePath *)arg2 logicalURL:(NSURL *)arg3 client:(BRCXPCClient *)arg4 XPCReceiver:(NSObject *)arg5 error:(id *)arg6;
- (NSObject *)_fetchThumbnailOperationForVersionRecord:(NSObject *)arg0 physicalURL:(NSURL *)arg1;
- (NSObject *)_depsTrackingOperation;
- (id)_fetchVersionsOperationWithDepsOp:(id)arg0;
- (NSURL *)logicalURL;
- (char)includeCachedVersions;
- (void)listNonLocalVersionsWithReply:(id /* block */)arg0;

@end
