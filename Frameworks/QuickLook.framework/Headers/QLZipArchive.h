/* Runtime dump - QLZipArchive
 * Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@interface QLZipArchive : NSObject
{
    struct archive * _archive;
    NSURL * _url;
}

- (void)enumerateEntriesWithHandler:(id /* block */)arg0;
- (id)readCurrentDataWithEntry:(struct archive_entry *)arg0 error:(id *)arg1;
- (char)_reopenWithError:(id *)arg0;
- (NSError *)libarchiveError;
- (void)dealloc;
- (QLZipArchive *)initWithURL:(NSString *)arg0 error:(id *)arg1;

@end
