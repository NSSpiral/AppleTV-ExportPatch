/* Runtime dump - StreamData
 * Image: /Applications/AppleTV.app/AppleTV
 */


@class Buffer;
@interface StreamData : NSObject
{
    long long fileSize;
    NSString * fileID;
    long long creationTime;
    long long preroll;
    long long duration;
    long long wrapInterval;
    int alignmentOffset;
    long long toolsVersion;
}

- (StreamData *)initWithBuffer:(Buffer *)arg0;
- (int)getFileSize;
- (NSString *)getFileID;
- (long long)getPreroll;
- (long long)getWrapInterval;
- (int)getAlignmentOffset;
- (long long)getToolsVersion;
- (void).cxx_destruct;
- (long long)getDuration;
- (long long)getCreationTime;

@end
