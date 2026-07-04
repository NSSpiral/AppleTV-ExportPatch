/* Runtime dump - TCDumpArray
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface TCDumpArray : TCDumpType
{
    int mCount;
    int mCountFieldType;
    NSString * mCountFieldName;
    int mPaddingSize;
    TCDumpType * mElementType;
}

- (void)dealloc;
- (void)fromBinary:(struct __sFILE *)arg0 toXml:(int)arg1 state:(void *)arg2;
- (TCDumpArray *)initWithCount:(int)arg0 countFieldType:(int)arg1 countFieldName:(NSString *)arg2 elementType:(unsigned int)arg3;
- (TCDumpArray *)initWithCount:(int)arg0 elementType:(unsigned int)arg1;
- (TCDumpArray *)initWithCountFieldType:(int)arg0 elementType:(unsigned int)arg1;
- (TCDumpArray *)initWithCountFieldName:(NSString *)arg0 elementType:(unsigned int)arg1;

@end
