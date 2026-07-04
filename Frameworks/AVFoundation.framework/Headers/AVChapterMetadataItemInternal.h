/* Runtime dump - AVChapterMetadataItemInternal
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVChapterMetadataItemInternal : NSObject
{
    AVWeakReference * weakReference;
    struct OpaqueFigAsset * figAsset;
    long chapterGroupIndex;
    long chapterIndex;
    NSString * chapterType;
    NSLocale * locale;
    NSString * chapterDataType;
    <NSObject><NSCopying> * value;
    struct ? time;
    struct ? duration;
    int valueStatus;
    long valueErrorCode;
    NSMutableArray * completions;
    NSObject<OS_dispatch_queue> * readWriteQueue;
}

@end
