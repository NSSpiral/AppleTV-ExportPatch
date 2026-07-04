/* Runtime dump - BRCDownloadThumbnailEntry
 * Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCDownloadThumbnailEntry : BRCDownloadEntry

- (NSString *)description;
- (int)kind;
- (BRCDownloadThumbnailEntry *)initWithDocument:(NSObject *)arg0 stageID:(NSString *)arg1 etag:(NSString *)arg2;
- (char)_stageWithSession:(NSObject *)arg0 error:(id *)arg1;

@end
