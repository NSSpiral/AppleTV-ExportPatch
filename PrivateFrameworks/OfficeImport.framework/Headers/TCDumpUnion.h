/* Runtime dump - TCDumpUnion
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface TCDumpUnion : TCDumpType
{
    NSString * mSelectorFieldName;
    TCDumpNumeric * mSelectorField;
    NSMutableDictionary * mSelectorToMemberMap;
}

- (void)dealloc;
- (void)fromBinary:(struct __sFILE *)arg0 toXml:(int)arg1 state:(void *)arg2;
- (TCDumpUnion *)initWithSelectorFieldName:(NSString *)arg0 selectorEnumType:(NSObject *)arg1 selectorField:(id)arg2 members:(NSArray *)arg3;
- (TCDumpUnion *)initWithSelectorFieldName:(NSString *)arg0 selectorEnumType:(NSObject *)arg1 members:(NSArray *)arg2;
- (TCDumpUnion *)initWithSelectorField:(id)arg0 members:(NSArray *)arg1;

@end
