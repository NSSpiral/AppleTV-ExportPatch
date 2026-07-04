/* Runtime dump - WMListLevelTextToken
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface WMListLevelTextToken : NSObject
{
    NSString * m_string;
    int m_level;
}

+ (NSString *)tokenWithString:(NSString *)arg0 andLevel:(int)arg1;

- (void)dealloc;
- (NSString *)string;
- (int)level;
- (NSObject *)stringForIndex:(unsigned int)arg0 withFormat:(int)arg1 orNumberFormatter:(void * *)arg2 initialNumber:(void)arg3;
- (WMListLevelTextToken *)initWithString:(NSString *)arg0 andLevel:(int)arg1;

@end
