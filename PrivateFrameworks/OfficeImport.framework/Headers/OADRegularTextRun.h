/* Runtime dump - OADRegularTextRun
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADRegularTextRun : OADTextRun
{
    NSMutableString * mText;
}

- (void)dealloc;
- (OADRegularTextRun *)init;
- (char)isEmpty;
- (NSString *)text;
- (unsigned int)characterCount;

@end
