/* Runtime dump - IDSAutoFileDeletion
 * Image: /System/Library/PrivateFrameworks/IDS.framework/IDS
 */

@interface IDSAutoFileDeletion : NSObject
{
    NSURL * _fileURL;
    int _accessedCount;
}

- (void)dealloc;
- (IDSAutoFileDeletion *)initWithURL:(NSString *)arg0;
- (void)incrementAccessCount;

@end
