/* Runtime dump - EDTableFilter
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EDTableFilter : NSObject
{
    int mScale;
    int mOperator;
    double mValue;
    double mFilterValue;
}

+ (NSObject *)edTableFilter;

- (int)operatorType;
- (int)scale;
- (double)value;
- (void)setValue:(double)arg0;
- (void)setScale:(int)arg0;
- (double)filterValue;
- (void)setFilterValue:(double)arg0;
- (void)setOperatorType:(int)arg0;

@end
