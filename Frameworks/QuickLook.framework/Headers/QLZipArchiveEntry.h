/* Runtime dump - QLZipArchiveEntry
 * Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@interface QLZipArchiveEntry : NSObject
{
    struct archive_entry * _entry;
    QLZipArchive * _archive;
    NSData * _data;
    NSError * _error;
    NSURL * _url;
}

@property (nonatomic) NSURL * url;
@property struct archive_entry * entry;
@property QLZipArchive * archive;
@property NSData * data;

- (NSError *)readDataWithError:(id *)arg0;
- (void)setEntry:(struct archive_entry *)arg0;
- (void)dealloc;
- (NSURL *)url;
- (NSData *)data;
- (void)setData:(NSData *)arg0;
- (void)setUrl:(NSURL *)arg0;
- (struct archive_entry *)entry;
- (QLZipArchive *)archive;
- (void)setArchive:(QLZipArchive *)arg0;

@end
