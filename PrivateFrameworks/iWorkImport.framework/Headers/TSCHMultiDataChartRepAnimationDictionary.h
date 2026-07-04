/* Runtime dump - TSCHMultiDataChartRepAnimationDictionary
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHMultiDataChartRepAnimationDictionary : NSObject
{
    TSURetainedPointerKeyDictionary * mEntries;
}

+ (NSDictionary *)dictionary;

- (CALayer *)entryForLayer:(id)arg0;
- (NSObject *)nonretainedValueForObject:(NSObject *)arg0;
- (void)addAnimation:(CAAnimation *)arg0 animationInfo:(KNAnimationInfo *)arg1 forLayer:(CALayer *)arg2;
- (id)animationDictionaryForBuildEngine;
- (void)addEntriesFromAnimationDictionary:(NSDictionary *)arg0 beginTime:(double)arg1 duration:(float)arg2 interpolations:(TSCHMultiDataChartRepInterpolations *)arg3;
- (void)dealloc;
- (TSCHMultiDataChartRepAnimationDictionary *)init;

@end
