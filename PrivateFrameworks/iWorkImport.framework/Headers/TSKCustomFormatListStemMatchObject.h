/* Runtime dump - TSKCustomFormatListStemMatchObject
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSKCustomFormatListStemMatchObject : NSObject <NSCopying>
{
    TSUCustomFormat * mCustomFormat;
}

+ (NSString *)stemMatchObjectWithCustomFormat:(TSUCustomFormat *)arg0;

- (TSKCustomFormatListStemMatchObject *)initObjectWithCustomFormat:(TSUCustomFormat *)arg0;
- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (TSKCustomFormatListStemMatchObject *)copyWithZone:(struct _NSZone *)arg0;

@end
