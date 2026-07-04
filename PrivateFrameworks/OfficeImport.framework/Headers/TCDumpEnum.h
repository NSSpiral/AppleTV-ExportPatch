/* Runtime dump - TCDumpEnum
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface TCDumpEnum : NSObject
{
    NSString * mTypeName;
    NSMutableDictionary * mValueToNameMap;
    NSMutableDictionary * mNameToValueMap;
}

- (void)dealloc;
- (TCDumpEnum *)initWithTypeName:(NSString *)arg0 pairs:(struct TCDumpEnumPair *)arg1;
- (NSString *)typeName;
- (NSString *)valueForName:(NSString *)arg0;
- (id)nameForValue:(long)arg0;

@end
