/* Runtime dump - TCDumpType
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface TCDumpType : NSObject
{
    NSString * mName;
}

- (void)dealloc;
- (TCDumpType *)init;
- (void)setName:(NSString *)arg0;
- (NSString *)name;
- (TCDumpType *)initWithName:(NSString *)arg0;
- (void)fromBinary:(struct __sFILE *)arg0 toXml:(int)arg1 state:(void *)arg2;
- (void)fromXml:(struct _xmlNode *)arg0 toBinary:(struct _xmlNode *)arg1 state:(struct _xmlNode *)arg2;

@end
