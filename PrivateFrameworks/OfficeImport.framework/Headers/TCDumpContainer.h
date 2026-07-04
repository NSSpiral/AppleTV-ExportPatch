/* Runtime dump - TCDumpContainer
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface TCDumpContainer : TCDumpType
{
    int mByteSize;
    int mByteSizeFieldType;
    NSString * mByteSizeFieldName;
    int mByteSizeCorrection;
    TCDumpType * mElementType;
}

- (void)dealloc;
- (void)fromBinary:(struct __sFILE *)arg0 toXml:(int)arg1 state:(void *)arg2;
- (TCDumpContainer *)initWithByteSize:(int)arg0 byteSizeFieldType:(int)arg1 byteSizeFieldName:(NSString *)arg2 byteSizeCorrection:(int)arg3 elementType:(unsigned int)arg4;
- (TCDumpContainer *)initWithByteSize:(int)arg0 elementType:(unsigned int)arg1;
- (TCDumpContainer *)initWithByteSizeFieldType:(int)arg0 elementType:(unsigned int)arg1;
- (TCDumpContainer *)initWithByteSizeFieldType:(int)arg0 byteSizeCorrection:(int)arg1 elementType:(unsigned int)arg2;
- (TCDumpContainer *)initWithByteSizeFieldName:(NSString *)arg0 elementType:(unsigned int)arg1;
- (TCDumpContainer *)initWithByteSizeFieldName:(NSString *)arg0 byteSizeCorrection:(int)arg1 elementType:(unsigned int)arg2;

@end
