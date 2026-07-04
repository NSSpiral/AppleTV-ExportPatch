/* Runtime dump - TCDumpField
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface TCDumpField : NSObject
{
    TCDumpType * mType;
    NSString * mName;
}

- (NSString *)name;
- (NSString *)type;
- (TCDumpField *)initWithType:(NSString *)arg0 name:(NSString *)arg1;

@end
