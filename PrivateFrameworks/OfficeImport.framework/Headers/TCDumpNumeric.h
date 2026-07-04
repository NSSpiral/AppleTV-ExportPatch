/* Runtime dump - TCDumpNumeric
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface TCDumpNumeric : TCDumpType
{
    int mType;
    TCDumpEnum * mEnumType;
}

- (void)dealloc;
- (int)type;
- (TCDumpNumeric *)initWithType:(int)arg0;
- (void)fromBinary:(struct __sFILE *)arg0 toXml:(int)arg1 state:(void *)arg2;
- (void)fromXml:(struct _xmlNode *)arg0 toBinary:(struct _xmlNode *)arg1 state:(struct _xmlNode *)arg2;
- (TCDumpNumeric *)initWithType:(int)arg0 enumType:(NSObject *)arg1;
- (NSObject *)enumType;

@end
