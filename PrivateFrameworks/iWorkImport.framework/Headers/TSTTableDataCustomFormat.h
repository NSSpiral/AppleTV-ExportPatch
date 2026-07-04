/* Runtime dump - TSTTableDataCustomFormat
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTTableDataCustomFormat : TSTTableDataObject
{
    TSUCustomFormat * mCustomFormat;
}

- (TSTTableDataCustomFormat *)initObjectWithCustomFormat:(TSUCustomFormat *)arg0;
- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;

@end
