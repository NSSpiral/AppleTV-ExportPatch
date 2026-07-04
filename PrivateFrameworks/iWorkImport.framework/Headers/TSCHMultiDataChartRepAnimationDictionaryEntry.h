/* Runtime dump - TSCHMultiDataChartRepAnimationDictionaryEntry
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHMultiDataChartRepAnimationDictionaryEntry : NSObject
{
    TSCHMultiDataLayerAnimationInfo * mAnimationInfo;
    NSMutableArray * mAnimations;
}

+ (struct archive_entry *)entry;

- (void)addAnimation:(CAAnimation *)arg0 animationInfo:(KNAnimationInfo *)arg1;
- (void)dealloc;
- (TSCHMultiDataChartRepAnimationDictionaryEntry *)init;
- (CAAnimation *)animation;

@end
