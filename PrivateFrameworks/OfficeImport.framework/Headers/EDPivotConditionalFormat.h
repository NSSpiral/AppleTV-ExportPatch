/* Runtime dump - EDPivotConditionalFormat
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EDPivotConditionalFormat : NSObject
{
    unsigned long mPriority;
    int mType;
    int mScope;
    EDCollection * mPivotAreas;
}

+ (NSString *)pivotConditionalFormat;

- (void)dealloc;
- (EDPivotConditionalFormat *)init;
- (void)setType:(int)arg0;
- (int)type;
- (void)setScope:(int)arg0;
- (int)scope;
- (void)setPriority:(unsigned long)arg0;
- (unsigned long)priority;
- (id)pivotAreas;

@end
