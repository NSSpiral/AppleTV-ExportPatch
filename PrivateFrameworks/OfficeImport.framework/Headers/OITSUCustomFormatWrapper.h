/* Runtime dump - OITSUCustomFormatWrapper
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OITSUCustomFormatWrapper : NSObject
{
    struct TSUCustomFormat * mCustomFormat;
}

- (int)formatType;
- (NSString *)formatName;
- (OITSUCustomFormatWrapper *)initWithCustomFormat:(struct TSUCustomFormat *)arg0;
- (struct TSUCustomFormat *)pointerToTSUCustomFormat;
- (struct ? *)defaultFormatData;
- (struct ? *)conditionalFormatDataForValue:(SEL)arg0;

@end
