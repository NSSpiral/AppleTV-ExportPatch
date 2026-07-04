/* Runtime dump - EMColumnInfoMapper
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EMColumnInfoMapper : CMMapper
{
    EDColumnInfo * edColumnInfo;
    double columnWidth;
    unsigned int columnSpan;
}

- (double)columnWidth;
- (void)mapAt:(NSObject *)arg0 withState:(NSObject *)arg1;
- (EMColumnInfoMapper *)initWithEDColumnInfo:(NSDictionary *)arg0 maxSpan:(unsigned int)arg1 parent:(NSObject *)arg2;
- (EMColumnInfoMapper *)initWithDefaultWidth:(double)arg0 span:(unsigned int)arg1 parent:(NSObject *)arg2;

@end
