/* Runtime dump - UIFloatArray
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIFloatArray : NSObject
{
    int _count;
    int _gapCount;
    int * _gaps;
    float _gapValue;
    float _minValue;
    id _values;
    struct ? _floatArrayFlags;
}

- (void)dealloc;
- (UIFloatArray *)init;
- (UIFloatArray *)copyWithZone:(struct _NSZone *)arg0;
- (char)_setupValuesWithCount:(int)arg0 singleValue:(float)arg1 isRefresh:(char)arg2;
- (char)_setupValuesWithCount:(int)arg0 dataProvider:(NSObject *)arg1 isRefresh:(char)arg2;
- (char)_setupGapIndexesWithCount:(int)arg0 dataProvider:(NSObject *)arg1 isRefresh:(char)arg2;
- (char)_setupWithDataProvider:(NSObject *)arg0 valueIsSingleton:(char)arg1 singletonValue:(float)arg2 isRefresh:(char)arg3;
- (struct ?)_indexesViaSingletonFromOffset:(float)arg0 toOffset:(float)arg1;
- (struct ?)_indexesViaArrayFromOffset:(float)arg0 toOffset:(float)arg1;
- (char)refreshWithDataProvider:(NSObject *)arg0 singleValue:(float)arg1;
- (char)refreshWithDataProvider:(NSObject *)arg0;
- (float)singleValue;
- (float)minValue;
- (int)valueCount;
- (float)sum;
- (struct ?)offsetsForIndex:(int)arg0;
- (struct ?)offsetsForGapIndex:(int)arg0;
- (struct ?)indexesFromOffset:(float)arg0 toOffset:(float)arg1;
- (int)indexForGapIndex:(int)arg0;
- (void)hideGaps:(char)arg0;

@end
