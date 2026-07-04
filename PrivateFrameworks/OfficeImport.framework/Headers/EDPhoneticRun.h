/* Runtime dump - EDPhoneticRun
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EDPhoneticRun : NSObject
{
    unsigned int mCharIndex;
    unsigned int mBaseCharIndex;
    unsigned int mBaseCharCount;
}

- (EDPhoneticRun *)init;
- (unsigned int)charIndex;
- (unsigned int)charBaseIndex;
- (unsigned int)charBaseCount;
- (void)setCharBaseIndex:(unsigned int)arg0;
- (void)setCharBaseCount:(unsigned int)arg0;
- (void)setCharIndex:(unsigned int)arg0;
- (void)adjustIndex:(unsigned int)arg0;

@end
