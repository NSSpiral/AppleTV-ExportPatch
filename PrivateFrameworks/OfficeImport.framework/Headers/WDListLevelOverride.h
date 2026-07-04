/* Runtime dump - WDListLevelOverride
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface WDListLevelOverride : NSObject
{
    WDDocument * mDocument;
    WDListLevel * mListLevel;
    unsigned char mLevel;
    long mStartNumber;
    char mStartNumberOverridden;
}

- (void)dealloc;
- (NSString *)description;
- (unsigned char)level;
- (char)isListLevelOverridden;
- (unsigned char)listLevel;
- (long)startNumber;
- (void)setStartNumber:(long)arg0;
- (id)mutableListLevel;
- (WDListLevelOverride *)initWithDocument:(NSObject *)arg0 level:(unsigned char)arg1;
- (char)isStartNumberOverridden;

@end
