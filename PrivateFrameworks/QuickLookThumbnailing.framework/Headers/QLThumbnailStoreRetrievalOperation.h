/* Runtime dump - QLThumbnailStoreRetrievalOperation
 * Image: /System/Library/PrivateFrameworks/QuickLookThumbnailing.framework/QuickLookThumbnailing
 */

@interface QLThumbnailStoreRetrievalOperation : NSOperation
{
    NSURL * _documentURL;
    NSError * _error;
    char _finished;
    char _executing;
    char _allowsThumbnailGeneration;
    QLThumbnailAddition * _addition;
}

@property (readonly) NSDictionary * thumbnailImagesDictionary;
@property (readonly) NSData * serializedQuickLookMetadataDictionary;
@property (retain) NSError * error;
@property char allowsThumbnailGeneration;
@property (nonatomic) char executing;
@property (nonatomic) char finished;

- (void)_finishWithError:(NSError *)arg0;
- (void)cancel;
- (void)dealloc;
- (NSString *)description;
- (void)start;
- (void)main;
- (char)isFinished;
- (char)isExecuting;
- (char)_finishIfCancelled;
- (void)setExecuting:(char)arg0;
- (void)setFinished:(char)arg0;
- (char)isConcurrent;
- (NSError *)error;
- (NSDictionary *)thumbnailImagesDictionary;
- (NSData *)serializedQuickLookMetadataDictionary;
- (QLThumbnailStoreRetrievalOperation *)initWithDocumentAtURL:(NSURL *)arg0;
- (void)setError:(NSError *)arg0;
- (char)allowsThumbnailGeneration;
- (void)setAllowsThumbnailGeneration:(char)arg0;

@end
