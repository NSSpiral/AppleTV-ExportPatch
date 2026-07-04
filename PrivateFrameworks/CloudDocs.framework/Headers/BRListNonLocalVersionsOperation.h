/* Runtime dump - BRListNonLocalVersionsOperation
 * Image: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
 */

@interface BRListNonLocalVersionsOperation : NSOperation <BRNonLocalVersionReceiving>
{
    NSURL * _documentURL;
    NSMutableArray * _versions;
    NSMutableDictionary * _versionsByEtag;
    GSPermanentStorage * _versionsStore;
    <BRNonLocalVersionSending> * _sender;
    char _executing;
    char _finished;
    char _includeCachedVersions;
    char _state;
    id _fetchingVersionsDoneBlock;
}

@property (readonly, nonatomic) NSMutableArray * versions;
@property (nonatomic) char includeCachedVersions;
@property (retain, nonatomic) NSError * error;
@property (copy, nonatomic) id fetchingVersionsDoneBlock;
@property (nonatomic) char executing;
@property (nonatomic) char finished;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (BRListNonLocalVersionsOperation *)initWithDocumentURL:(NSURL *)arg0;
- (void)setFetchingVersionsDoneBlock:(id /* block */)arg0;
- (void)cancel;
- (void)dealloc;
- (NSString *)description;
- (void)start;
- (char)isFinished;
- (char)isExecuting;
- (void)_senderInvalidate;
- (char)__finishIfCancelled;
- (char)__advanceToState:(char)arg0 result:(NSObject *)arg1 error:(NSError *)arg2;
- (char)_advanceToState:(char)arg0 result:(NSObject *)arg1 error:(NSError *)arg2;
- (char)_setVersionStoreForDocumentAtURL:(NSURL *)arg0 error:(id *)arg1;
- (void)_addVersion:(NSString *)arg0 forEtag:(id)arg1;
- (id /* block */)fetchingVersionsDoneBlock;
- (void)setExecuting:(char)arg0;
- (void)setFinished:(char)arg0;
- (char)isConcurrent;
- (NSError *)error;
- (void)setIncludeCachedVersions:(char)arg0;
- (void)newThumbnailForVersionWithEtag:(SEL)arg0;
- (void)newCachedVersionAtURL:(SEL)arg0 size:(struct CGSize)arg1 etag:(NSString *)arg2 hasThumbnail:(char)arg3 displayName:(char)arg4 lastEditorDeviceName:(NSString *)arg5 lastEditorFormattedName:(NSString *)arg6 modificationDate:(NSDate *)arg7;
- (void)newFaultVersionAtURL:(SEL)arg0 faultURL:(NSURL *)arg1 faultExtension:(id)arg2 etag:(NSString *)arg3 hasThumbnail:(char)arg4 displayName:(char)arg5 lastEditorDeviceName:(NSString *)arg6 lastEditorFormattedName:(NSString *)arg7 modificationDate:(NSDate *)arg8;
- (void)versionsDone;
- (char)includeCachedVersions;
- (NSMutableArray *)versions;
- (void)setError:(NSError *)arg0;

@end
