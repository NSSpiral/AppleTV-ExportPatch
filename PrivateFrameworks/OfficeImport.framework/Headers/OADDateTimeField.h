/* Runtime dump - OADDateTimeField
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADDateTimeField : OADTextField
{
    int mFormat;
}

- (OADDateTimeField *)init;
- (char)isEmpty;
- (int)format;
- (void)setFormat:(int)arg0;

@end
