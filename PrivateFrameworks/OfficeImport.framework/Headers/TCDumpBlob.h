/* Runtime dump - TCDumpBlob
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface TCDumpBlob : TCDumpType
{
    unsigned long mSize;
}

- (void)fromBinary:(struct __sFILE *)arg0 toXml:(int)arg1 state:(void *)arg2;
- (TCDumpBlob *)initWithSize_:(unsigned long)arg0;

@end
