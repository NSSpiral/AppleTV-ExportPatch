/* Runtime dump - TCDumpStruct
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface TCDumpStruct : TCDumpType
{
    long mSize;
    NSString * mSizeFieldName;
    long mSizeCorrection;
    NSMutableArray * mMembers;
}

- (void)dealloc;
- (void)fromBinary:(struct __sFILE *)arg0 toXml:(int)arg1 state:(void *)arg2;
- (TCDumpStruct *)initWithSize:(long)arg0 sizeFieldName:(NSString *)arg1 sizeCorrection:(int)arg2 members:(NSArray *)arg3;
- (TCDumpStruct *)initWithMembers:(NSArray *)arg0;
- (TCDumpStruct *)initWithSize:(long)arg0 members:(NSArray *)arg1;
- (TCDumpStruct *)initWithSizeFieldName:(NSString *)arg0 members:(NSArray *)arg1;
- (TCDumpStruct *)initWithSizeFieldName:(NSString *)arg0 sizeCorrection:(int)arg1 members:(NSArray *)arg2;

@end
