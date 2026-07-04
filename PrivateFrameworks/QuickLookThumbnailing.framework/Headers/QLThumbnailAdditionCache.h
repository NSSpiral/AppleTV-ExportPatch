/* Runtime dump - QLThumbnailAdditionCache
 * Image: /System/Library/PrivateFrameworks/QuickLookThumbnailing.framework/QuickLookThumbnailing
 */

@interface QLThumbnailAdditionCache : NSObject
{
    NSCache * _additionsCache;
}

+ (QLThumbnailAdditionCache *)sharedInstance;

- (QLThumbnailAdditionCache *)init;
- (void)cacheAddition:(id)arg0 forDocumentID:(NSObject *)arg1;
- (NSURL *)thumbnailAdditionForItemAtURL:(NSURL *)arg0 error:(id *)arg1;
- (void)purgeCachedAdditionForItemAtURL:(NSURL *)arg0;

@end
