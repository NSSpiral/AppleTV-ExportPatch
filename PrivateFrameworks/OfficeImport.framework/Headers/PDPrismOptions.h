/* Runtime dump - PDPrismOptions
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface PDPrismOptions : PDSideDirectionOptions
{
    char mIsContent;
    char mIsInverted;
}

- (char)isInverted;
- (char)isContent;
- (void)setIsContent:(char)arg0;
- (void)setIsInverted:(char)arg0;

@end
