/* Runtime dump - WMListLevelTextMapper
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface WMListLevelTextMapper : NSObject
{
    NSMutableArray * m_tokens;
    int m_format;
    unsigned int m_initNumber;
    void * * m_numberFormatter;
}

- (void)dealloc;
- (WMListLevelTextMapper *)initWithText:(NSString *)arg0;
- (WMListLevelTextMapper *)initWithText:(NSString *)arg0 format:(int)arg1 initNumber:(int)arg2 language:(int)arg3;
- (WMListLevelTextMapper *)initWithText:(NSString *)arg0 format:(int)arg1 language:(int)arg2;
- (id)listLevelTextforOutline:(id)arg0;
- (unsigned int)tokenCount;
- (NSString *)token:(unsigned int)arg0;

@end
