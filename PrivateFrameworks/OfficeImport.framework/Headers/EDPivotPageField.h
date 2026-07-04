/* Runtime dump - EDPivotPageField
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EDPivotPageField : NSObject
{
    unsigned long mFieldId;
    NSString * mCap;
    NSString * mName;
}

+ (EDPivotPageField *)pivotPageField;

- (void)dealloc;
- (EDPivotPageField *)init;
- (void)setName:(NSString *)arg0;
- (NSString *)name;
- (void)setCap:(int)arg0;
- (int)cap;
- (unsigned long)fieldId;
- (void)setFieldId:(unsigned long)arg0;

@end
