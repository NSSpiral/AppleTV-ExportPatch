/* Runtime dump - AVAssetInternal
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVAssetInternal : NSObject
{
    AVWeakReference * weakReference;
    long loadChapterInfoOnce;
    NSArray * chapterGroupInfo;
    NSString * anchorChapterType;
    NSArray * availableChapterLocales;
}

@end
